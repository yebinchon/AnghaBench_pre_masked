
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_22__ {int length; TYPE_4__* type; scalar_t__ flags; int pts; int alloc_size; int data; } ;
struct TYPE_19__ {int * linesize; scalar_t__* data; } ;
struct TYPE_21__ {scalar_t__ width; scalar_t__ height; scalar_t__ pix_fmt; TYPE_5__ layout; int planes; int pts; int queue_out; scalar_t__ picture; TYPE_2__* codec_context; } ;
struct TYPE_20__ {TYPE_1__* priv; } ;
struct TYPE_17__ {int * pitch; scalar_t__* offset; int planes; } ;
struct TYPE_18__ {TYPE_3__ video; } ;
struct TYPE_16__ {scalar_t__ width; scalar_t__ height; scalar_t__ pix_fmt; } ;
struct TYPE_15__ {TYPE_7__* module; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;
typedef int AVPicture ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (int *,TYPE_8__*) ;
 TYPE_8__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_8__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_COMPONENT_T *VAR_3, MMAL_PORT_T *VAR_4)
{
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_3->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_6;
   int VAR_7, VAR_8;


   if (VAR_5->codec_context->width != VAR_5->width ||
       VAR_5->codec_context->height != VAR_5->height ||
       VAR_5->codec_context->pix_fmt != VAR_5->pix_fmt)
   {
      FUNC_1(VAR_3, VAR_4);
      return VAR_0;
   }

   VAR_6 = FUNC_5(VAR_5->queue_out);
   if (!VAR_6)
      return VAR_0;

   VAR_8 = FUNC_2((AVPicture *)VAR_5->picture, VAR_5->pix_fmt,
                           VAR_5->width, VAR_5->height, VAR_6->data, VAR_6->alloc_size);
   if (VAR_8 < 0)
   {
      FUNC_6(VAR_5->queue_out, VAR_6);
      FUNC_0("avpicture_layout failed: %i, %i, %i, %i",VAR_5->pix_fmt,
                VAR_5->width, VAR_5->height, VAR_6->alloc_size );
      FUNC_3(VAR_3, VAR_1);
      return VAR_1;
   }

   VAR_6->length = VAR_8;
   VAR_6->pts = VAR_5->pts;
   VAR_6->flags = 0;

   VAR_6->type->video.planes = VAR_5->planes;
   for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
   {
      VAR_6->type->video.offset[VAR_7] = (uint64_t)VAR_5->layout.data[VAR_7];
      VAR_6->type->video.pitch[VAR_7] = VAR_5->layout.linesize[VAR_7];
   }

   FUNC_4(VAR_4, VAR_6);
   return VAR_2;
}
