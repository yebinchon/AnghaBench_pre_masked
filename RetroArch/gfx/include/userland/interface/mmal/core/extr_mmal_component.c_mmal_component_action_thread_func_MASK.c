
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_5__ {int action_mutex; int (* pf_action ) (TYPE_1__*) ;scalar_t__ action_quit; int action_event; } ;
struct TYPE_4__ {scalar_t__ priv; } ;
typedef TYPE_1__ MMAL_COMPONENT_T ;
typedef TYPE_2__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = (MMAL_COMPONENT_T *)VAR_2;
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_4 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_3->priv;
   VCOS_STATUS_T VAR_5;

   while (1)
   {
      VAR_5 = FUNC_1(&VAR_4->action_event);

      if (VAR_5 == VAR_0)
         continue;
      if (VAR_4->action_quit)
         break;
      if (!FUNC_4(VAR_5 == VAR_1))
         break;

      FUNC_2(&VAR_4->action_mutex);
      VAR_4->pf_action(VAR_3);
      FUNC_3(&VAR_4->action_mutex);
   }
   return 0;
}
