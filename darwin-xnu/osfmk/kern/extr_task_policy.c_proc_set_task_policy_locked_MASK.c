
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct task_requested_policy {int trp_ext_darwinbg; int trp_int_darwinbg; int trp_ext_iotier; int trp_ext_iopassive; int trp_int_iotier; int trp_int_iopassive; int trp_bg_iotier; int trp_tal_enabled; int trp_boosted; int trp_role; int trp_terminated; int trp_base_latency_qos; int trp_base_through_qos; int trp_sfi_managed; int trp_over_latency_qos; int trp_over_through_qos; } ;
struct TYPE_3__ {struct task_requested_policy requested_policy; } ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (int,int*,int*) ;

__attribute__((used)) static void
FUNC_3(task_t VAR_3,
                            int VAR_4,
                            int VAR_5,
                            int VAR_6,
                            int VAR_7)
{
 int VAR_8, VAR_9;

 struct task_requested_policy VAR_10 = VAR_3->requested_policy;

 switch (VAR_5) {



  case 137:
   if (VAR_4 == VAR_1)
    VAR_10.trp_ext_darwinbg = VAR_6;
   else
    VAR_10.trp_int_darwinbg = VAR_6;
   break;

  case 134:
   FUNC_2(VAR_6, &VAR_8, &VAR_9);
   if (VAR_4 == VAR_1) {
    VAR_10.trp_ext_iotier = VAR_8;
    VAR_10.trp_ext_iopassive = VAR_9;
   } else {
    VAR_10.trp_int_iotier = VAR_8;
    VAR_10.trp_int_iopassive = VAR_9;
   }
   break;

  case 135:
   if (VAR_4 == VAR_1)
    VAR_10.trp_ext_iotier = VAR_6;
   else
    VAR_10.trp_int_iotier = VAR_6;
   break;

  case 132:
   if (VAR_4 == VAR_1)
    VAR_10.trp_ext_iopassive = VAR_6;
   else
    VAR_10.trp_int_iopassive = VAR_6;
   break;



  case 136:
   FUNC_0(VAR_4 == VAR_2);
   FUNC_2(VAR_6, &VAR_8, &VAR_9);
   VAR_10.trp_bg_iotier = VAR_8;
   break;



  case 129:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_tal_enabled = VAR_6;
   break;

  case 138:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_boosted = VAR_6;
   break;

  case 131:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_role = VAR_6;
   break;

  case 128:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_terminated = VAR_6;
   break;

  case 141:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_base_latency_qos = VAR_6;
   break;

  case 140:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_base_through_qos = VAR_6;
   break;

  case 130:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_sfi_managed = VAR_6;
   break;

  case 139:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_base_latency_qos = VAR_6;
   VAR_10.trp_base_through_qos = VAR_7;
   break;

  case 133:
   FUNC_0(VAR_4 == VAR_0);
   VAR_10.trp_over_latency_qos = VAR_6;
   VAR_10.trp_over_through_qos = VAR_7;
   break;

  default:
   FUNC_1("unknown task policy: %d %d %d %d", VAR_4, VAR_5, VAR_6, VAR_7);
   break;
 }

 VAR_3->requested_policy = VAR_10;
}
