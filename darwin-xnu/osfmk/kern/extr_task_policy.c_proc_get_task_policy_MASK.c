
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct task_requested_policy {int trp_ext_darwinbg; int trp_int_darwinbg; int trp_ext_iotier; int trp_ext_iopassive; int trp_int_iotier; int trp_int_iopassive; int trp_bg_iotier; int trp_role; int trp_sfi_managed; } ;
struct TYPE_5__ {struct task_requested_policy requested_policy; } ;


 int VAR_0 ;


 int VAR_1 ;





 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(task_t VAR_2,
                     int VAR_3,
                     int VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(VAR_2);

 struct task_requested_policy VAR_6 = VAR_2->requested_policy;

 switch (VAR_4) {
  case 134:
   if (VAR_3 == VAR_1)
    VAR_5 = VAR_6.trp_ext_darwinbg;
   else
    VAR_5 = VAR_6.trp_int_darwinbg;
   break;
  case 131:
   if (VAR_3 == VAR_1)
    VAR_5 = FUNC_2(VAR_6.trp_ext_iotier,
                               VAR_6.trp_ext_iopassive);
   else
    VAR_5 = FUNC_2(VAR_6.trp_int_iotier,
                               VAR_6.trp_int_iopassive);
   break;
  case 132:
   if (VAR_3 == VAR_1)
    VAR_5 = VAR_6.trp_ext_iotier;
   else
    VAR_5 = VAR_6.trp_int_iotier;
   break;
  case 130:
   if (VAR_3 == VAR_1)
    VAR_5 = VAR_6.trp_ext_iopassive;
   else
    VAR_5 = VAR_6.trp_int_iopassive;
   break;
  case 133:
   FUNC_0(VAR_3 == VAR_0);
   VAR_5 = FUNC_2(VAR_6.trp_bg_iotier, 0);
   break;
  case 129:
   FUNC_0(VAR_3 == VAR_0);
   VAR_5 = VAR_6.trp_role;
   break;
  case 128:
   FUNC_0(VAR_3 == VAR_0);
   VAR_5 = VAR_6.trp_sfi_managed;
   break;
  default:
   FUNC_1("unknown policy_flavor %d", VAR_4);
   break;
 }

 FUNC_4(VAR_2);

 return VAR_5;
}
