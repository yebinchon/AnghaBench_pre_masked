
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int action_quit; int * pf_action; int action_mutex; int action_event; int action_thread; } ;
struct TYPE_4__ {scalar_t__ priv; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;
typedef TYPE_2__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

MMAL_STATUS_T FUNC_4(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_3 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_2->priv;

   if (!VAR_3->pf_action)
      return VAR_0;

   VAR_3->action_quit = 1;
   FUNC_1(&VAR_3->action_event);
   FUNC_3(&VAR_3->action_thread, ((void*)0));
   FUNC_0(&VAR_3->action_event);
   FUNC_2(&VAR_3->action_mutex);
   VAR_3->pf_action = ((void*)0);
   VAR_3->action_quit = 0;
   return VAR_1;
}
