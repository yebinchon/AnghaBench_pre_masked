
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int reply ;
typedef int msg ;
struct TYPE_9__ {scalar_t__ status; } ;
typedef TYPE_2__ mmal_worker_reply ;
struct TYPE_10__ {int header; int component_handle; } ;
typedef TYPE_3__ mmal_worker_component_destroy ;
struct TYPE_12__ {int callback_queue; int component_handle; } ;
struct TYPE_11__ {TYPE_1__* priv; scalar_t__ clock_num; int clock; scalar_t__ output_num; int output; scalar_t__ input_num; int input; } ;
struct TYPE_8__ {TYPE_5__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *,int,int ,TYPE_2__*,size_t*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_9(MMAL_COMPONENT_T *VAR_3)
{
   MMAL_STATUS_T VAR_4;
   mmal_worker_component_destroy VAR_5;
   mmal_worker_reply VAR_6;
   size_t VAR_7 = sizeof(VAR_6);

   FUNC_7(VAR_3 && VAR_3->priv && VAR_3->priv->module);

   VAR_5.component_handle = VAR_3->priv->module->component_handle;

   VAR_4 = FUNC_6(FUNC_4(), &VAR_5.header, sizeof(VAR_5),
         VAR_2,
         &VAR_6, &VAR_7, VAR_0);

   if (VAR_4 == VAR_1)
   {
      FUNC_7(VAR_7 == sizeof(VAR_6));
      VAR_4 = VAR_6.status;
   }
   if (VAR_4 != VAR_1)
   {
      FUNC_0("failed to destroy component - reason %d", VAR_4 );
      goto fail;
   }

   if(VAR_3->input_num)
      FUNC_1(VAR_3->input, VAR_3->input_num);
   if(VAR_3->output_num)
      FUNC_1(VAR_3->output, VAR_3->output_num);
   if(VAR_3->clock_num)
      FUNC_1(VAR_3->clock, VAR_3->clock_num);

   FUNC_2(VAR_3->priv->module->callback_queue);

   FUNC_8(VAR_3->priv->module);
   VAR_3->priv->module = ((void*)0);

fail:

   FUNC_5();
   FUNC_3();
   return VAR_4;
}
