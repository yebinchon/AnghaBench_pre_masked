
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ length; } ;
struct TYPE_22__ {int error; int sent_flags; int enabled_flags; } ;
struct TYPE_21__ {unsigned int output_num; TYPE_4__** output; TYPE_4__** input; TYPE_1__* priv; } ;
struct TYPE_20__ {TYPE_5__* component; TYPE_3__* priv; } ;
struct TYPE_19__ {TYPE_2__* module; } ;
struct TYPE_18__ {int queue; } ;
struct TYPE_17__ {TYPE_6__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_7__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,TYPE_7__*) ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,TYPE_4__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_2->component;
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_4->priv->module;
   MMAL_PORT_T *VAR_6, *VAR_7;
   MMAL_BUFFER_HEADER_T *VAR_8;
   MMAL_STATUS_T VAR_9;
   unsigned int VAR_10;

   FUNC_4(VAR_2->priv->module->queue, VAR_3);

   if (VAR_5->error)
      return VAR_1;


   VAR_6 = VAR_4->input[0];
   VAR_8 = FUNC_3(VAR_6->priv->module->queue);
   if (!VAR_8)
      return VAR_1;

   for (VAR_10 = 0; VAR_10 < VAR_4->output_num; VAR_10++)
   {
      VAR_7 = VAR_4->output[VAR_10];
      VAR_9 = FUNC_5(VAR_8, VAR_7);

      if (VAR_9 != VAR_1 && VAR_9 != VAR_0)
         goto error;

      if (VAR_9 == VAR_1)
         VAR_5->sent_flags |= (1<<VAR_10);
   }


   if ((VAR_5->sent_flags & VAR_5->enabled_flags) == VAR_5->enabled_flags)
   {
      VAR_8->length = 0;
      FUNC_2(VAR_6, VAR_8);
      VAR_5->sent_flags = 0;
      return VAR_1;
   }


   FUNC_4(VAR_6->priv->module->queue, VAR_8);
   return VAR_1;

 error:
   FUNC_4(VAR_6->priv->module->queue, VAR_8);

   VAR_9 = FUNC_1(VAR_2->component, VAR_9);
   if (VAR_9 != VAR_1)
   {
      FUNC_0("unable to send an error event buffer (%i)", (int)VAR_9);
      return VAR_1;
   }
   VAR_5->error = 1;
   return VAR_1;
}
