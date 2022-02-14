
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_4__* thread_t ;
struct TYPE_8__ {int thep_io_tier; int thep_latency_qos; int thep_through_qos; int thep_qos; int thep_new_sockets_bg; int thep_all_sockets_bg; int thep_io_passive; int thep_darwinbg; } ;
struct TYPE_9__ {int iotier_override; TYPE_3__ effective_policy; TYPE_2__* task; } ;
struct TYPE_6__ {int tep_all_sockets_bg; } ;
struct TYPE_7__ {TYPE_1__ effective_policy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(thread_t VAR_1,
                                 int VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
  case 134:







   VAR_3 = VAR_1->effective_policy.thep_darwinbg ? 1 : 0;
   break;
  case 133:




   VAR_3 = VAR_1->effective_policy.thep_io_tier;
   if (VAR_1->iotier_override != VAR_0)
    VAR_3 = FUNC_0(VAR_3, VAR_1->iotier_override);
   break;
  case 130:
   VAR_3 = VAR_1->effective_policy.thep_io_passive ? 1 : 0;
   if (VAR_1->iotier_override != VAR_0 &&
       VAR_1->iotier_override < VAR_1->effective_policy.thep_io_tier)
    VAR_3 = 1;
   break;
  case 135:







   VAR_3 = (VAR_1->effective_policy.thep_all_sockets_bg ||
            VAR_1->task->effective_policy.tep_all_sockets_bg) ? 1 : 0;
   break;
  case 131:




   VAR_3 = VAR_1->effective_policy.thep_new_sockets_bg ? 1 : 0;
   break;
  case 132:




   VAR_3 = VAR_1->effective_policy.thep_latency_qos;
   break;
  case 128:






   VAR_3 = VAR_1->effective_policy.thep_through_qos;
   break;
  case 129:





   VAR_3 = VAR_1->effective_policy.thep_qos;
   break;
  default:
   FUNC_1("unknown thread policy flavor %d", VAR_2);
   break;
 }

 return VAR_3;
}
