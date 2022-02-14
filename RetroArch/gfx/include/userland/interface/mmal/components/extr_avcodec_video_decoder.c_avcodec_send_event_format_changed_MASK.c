
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_23__ {scalar_t__ status; int output_needs_configuring; TYPE_4__* codec_context; } ;
struct TYPE_22__ {TYPE_1__* priv; } ;
struct TYPE_21__ {int buffer_size_min; int buffer_size_recommended; int buffer_num_recommended; int buffer_num_min; TYPE_11__* format; } ;
struct TYPE_20__ {int buffer_num_recommended; int buffer_num_min; int format; } ;
struct TYPE_19__ {int width; int height; int pix_fmt; } ;
struct TYPE_17__ {int width; int height; } ;
struct TYPE_18__ {TYPE_2__ video; } ;
struct TYPE_16__ {TYPE_8__* module; } ;
struct TYPE_15__ {int encoding; TYPE_3__* es; } ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int **,int ) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(MMAL_COMPONENT_T *VAR_2, MMAL_PORT_T *VAR_3)
{
   MMAL_COMPONENT_MODULE_T *VAR_4 = VAR_2->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_5 = ((void*)0);
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_6;


   VAR_4->status = FUNC_3(VAR_3, &VAR_5, VAR_0);
   if (VAR_4->status != VAR_1)
   {
      FUNC_0("unable to get an event buffer");
      return;
   }
   VAR_6 = FUNC_1(VAR_5);


   FUNC_2(VAR_6->format, VAR_3->format);
   VAR_6->format->es->video.width = VAR_4->codec_context->width;
   VAR_6->format->es->video.height = VAR_4->codec_context->height;
   VAR_6->format->encoding = FUNC_5(VAR_4->codec_context->pix_fmt);


   VAR_6->buffer_num_min = VAR_3->buffer_num_min;
   VAR_6->buffer_size_min = VAR_4->codec_context->width * VAR_4->codec_context->height * 2;
   VAR_6->buffer_size_recommended = VAR_6->buffer_size_min;
   VAR_6->buffer_num_recommended = VAR_3->buffer_num_recommended;

   VAR_4->output_needs_configuring = 1;
   FUNC_4(VAR_3, VAR_5);
}
