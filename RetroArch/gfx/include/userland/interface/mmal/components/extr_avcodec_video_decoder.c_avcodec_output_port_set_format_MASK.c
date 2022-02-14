
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int * data; } ;
struct TYPE_20__ {scalar_t__ frame_size; int planes; scalar_t__ output_needs_configuring; TYPE_10__ layout; int height; int width; int pix_fmt; TYPE_1__* codec_context; } ;
struct TYPE_19__ {TYPE_5__* priv; } ;
struct TYPE_18__ {scalar_t__ buffer_size_min; TYPE_7__* component; TYPE_4__* format; } ;
struct TYPE_17__ {TYPE_8__* module; } ;
struct TYPE_16__ {scalar_t__ encoding; TYPE_3__* es; } ;
struct TYPE_14__ {int height; int width; } ;
struct TYPE_15__ {TYPE_2__ video; } ;
struct TYPE_13__ {int pix_fmt; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_10__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_2->component;
   MMAL_COMPONENT_MODULE_T *VAR_4 = VAR_3->priv->module;


   if (FUNC_2(VAR_4->codec_context->pix_fmt) != VAR_2->format->encoding)
      return VAR_0;

   VAR_4->pix_fmt = VAR_4->codec_context->pix_fmt;
   VAR_4->width = VAR_2->format->es->video.width;
   VAR_4->height = VAR_2->format->es->video.height;

   VAR_4->frame_size =
      FUNC_0(&VAR_4->layout, 0, VAR_4->pix_fmt, VAR_4->width, VAR_4->height);
   if (VAR_4->frame_size < 0)
      return VAR_0;


   for (VAR_4->planes = 0; VAR_4->planes < 4; )
      if (!VAR_4->layout.data[VAR_4->planes++])
         break;

   VAR_2->buffer_size_min = VAR_4->frame_size;
   VAR_2->component->priv->module->output_needs_configuring = 0;
   FUNC_1(VAR_2->component);

   return VAR_1;
}
