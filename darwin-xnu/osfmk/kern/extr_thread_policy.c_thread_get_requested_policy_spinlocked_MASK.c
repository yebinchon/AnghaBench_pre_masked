
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct thread_requested_policy {int thrp_ext_darwinbg; int thrp_int_darwinbg; int thrp_ext_iotier; int thrp_ext_iopassive; int thrp_int_iotier; int thrp_int_iopassive; int thrp_qos; int thrp_qos_override; int thrp_latency_qos; int thrp_through_qos; int thrp_qos_workq_override; int thrp_qos_relprio; int thrp_qos_promote; int thrp_qos_ipc_override; int thrp_terminated; } ;
struct TYPE_3__ {struct thread_requested_policy requested_policy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(thread_t VAR_2,
                                       int VAR_3,
                                       int VAR_4,
                                       int* VAR_5)
{
 int VAR_6 = 0;

 struct thread_requested_policy VAR_7 = VAR_2->requested_policy;

 switch (VAR_4) {
  case 140:
   if (VAR_3 == VAR_1)
    VAR_6 = VAR_7.thrp_ext_darwinbg;
   else
    VAR_6 = VAR_7.thrp_int_darwinbg;
   break;
  case 138:
   if (VAR_3 == VAR_1)
    VAR_6 = FUNC_2(VAR_7.thrp_ext_iotier,
                               VAR_7.thrp_ext_iopassive);
   else
    VAR_6 = FUNC_2(VAR_7.thrp_int_iotier,
                               VAR_7.thrp_int_iopassive);
   break;
  case 139:
   if (VAR_3 == VAR_1)
    VAR_6 = VAR_7.thrp_ext_iotier;
   else
    VAR_6 = VAR_7.thrp_int_iotier;
   break;
  case 136:
   if (VAR_3 == VAR_1)
    VAR_6 = VAR_7.thrp_ext_iopassive;
   else
    VAR_6 = VAR_7.thrp_int_iopassive;
   break;
  case 135:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_qos;
   break;
  case 132:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_qos_override;
   break;
  case 137:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_latency_qos;
   break;
  case 128:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_through_qos;
   break;
  case 130:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_qos_workq_override;
   break;
  case 134:
   FUNC_0(VAR_3 == VAR_0);
   FUNC_0(VAR_5 != ((void*)0));
   VAR_6 = VAR_7.thrp_qos;
   *VAR_5 = VAR_7.thrp_qos_relprio;
   break;
  case 131:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_qos_promote;
   break;
  case 133:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_qos_ipc_override;
   break;
  case 129:
   FUNC_0(VAR_3 == VAR_0);
   VAR_6 = VAR_7.thrp_terminated;
   break;

  default:
   FUNC_1("unknown policy_flavor %d", VAR_4);
   break;
 }

 return VAR_6;
}
