
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int action_event; int pf_action; } ;
struct TYPE_4__ {scalar_t__ priv; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;
typedef TYPE_2__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

MMAL_STATUS_T FUNC_1(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_3 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_2->priv;

   if (!VAR_3->pf_action)
      return VAR_0;

   FUNC_0(&VAR_3->action_event);
   return VAR_1;
}
