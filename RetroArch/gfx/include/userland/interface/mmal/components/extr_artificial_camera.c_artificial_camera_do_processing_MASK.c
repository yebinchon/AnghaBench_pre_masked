
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ alloc_size; scalar_t__ data; scalar_t__ length; TYPE_5__* type; scalar_t__ offset; } ;
struct TYPE_26__ {scalar_t__ status; } ;
struct TYPE_25__ {unsigned int output_num; TYPE_6__** output; TYPE_1__* priv; } ;
struct TYPE_24__ {TYPE_3__* priv; } ;
struct TYPE_22__ {int planes; scalar_t__* offset; } ;
struct TYPE_23__ {TYPE_4__ video; } ;
struct TYPE_21__ {TYPE_2__* module; } ;
struct TYPE_20__ {scalar_t__ frame_size; int count; TYPE_4__ frame; int queue; } ;
struct TYPE_19__ {TYPE_8__* module; } ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_9__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_9__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_7__*,scalar_t__) ;
 int FUNC_5 (TYPE_6__*,TYPE_9__*) ;
 TYPE_9__* FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_9__*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_MODULE_T *VAR_3 = VAR_2->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_4;
   unsigned int VAR_5;

   if (VAR_3->status != VAR_1)
      return;


   for (VAR_5 = 0; VAR_5 < VAR_2->output_num; VAR_5++)
   {
      MMAL_PORT_T *VAR_6 = VAR_2->output[VAR_5];

      VAR_4 = FUNC_6(VAR_6->priv->module->queue);
      if (!VAR_4)
         continue;


      if (VAR_4->alloc_size < VAR_6->priv->module->frame_size)
      {
         FUNC_0("buffer too small (%i/%i)",
                   VAR_4->alloc_size, VAR_6->priv->module->frame_size);
         VAR_3->status = VAR_0;
         FUNC_7(VAR_6->priv->module->queue, VAR_4);
         FUNC_4(VAR_2, VAR_3->status);
         return;
      }
      VAR_3->status = FUNC_2(VAR_4);
      if (VAR_3->status != VAR_1)
      {
         FUNC_0("invalid buffer (%p, %p)", VAR_4, VAR_4->data);
         FUNC_7(VAR_6->priv->module->queue, VAR_4);
         FUNC_4(VAR_2, VAR_3->status);
         return;
      }

      VAR_4->offset = 0;
      VAR_4->length = VAR_6->priv->module->frame_size;
      VAR_4->type->video = VAR_6->priv->module->frame;

      FUNC_1(VAR_4->data, 0xff, VAR_4->length);
      if (VAR_4->type->video.planes > 1)
         FUNC_1(VAR_4->data + VAR_4->type->video.offset[1],
                0x7f - VAR_6->priv->module->count++,
                VAR_4->length - VAR_4->type->video.offset[1]);

      FUNC_3(VAR_4);
      FUNC_5(VAR_6, VAR_4);
   }

   FUNC_8(10);
}
