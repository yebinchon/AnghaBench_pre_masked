
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
struct TYPE_4__ {int tep_darwinbg; int tep_all_sockets_bg; int tep_latency_qos; int tep_through_qos; int tep_role; int tep_watchers_bg; int tep_sfi_managed; } ;
struct TYPE_5__ {TYPE_1__ effective_policy; } ;
 int FUNC_0 (char*,int) ;

int
FUNC_1(task_t VAR_0,
                               int VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
  case 133:







   VAR_2 = VAR_0->effective_policy.tep_darwinbg;
   break;
  case 134:







   VAR_2 = VAR_0->effective_policy.tep_all_sockets_bg;
   break;
  case 132:




   VAR_2 = VAR_0->effective_policy.tep_latency_qos;
   break;
  case 129:





   VAR_2 = VAR_0->effective_policy.tep_through_qos;
   break;
  case 131:




   VAR_2 = VAR_0->effective_policy.tep_role;
   break;
  case 128:



   VAR_2 = VAR_0->effective_policy.tep_watchers_bg;
   break;
  case 130:



   VAR_2 = VAR_0->effective_policy.tep_sfi_managed;
   break;
  default:
   FUNC_0("unknown policy_flavor %d", VAR_1);
   break;
 }

 return VAR_2;
}
