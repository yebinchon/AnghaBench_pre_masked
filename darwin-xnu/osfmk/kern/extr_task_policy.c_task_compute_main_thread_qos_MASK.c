
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
struct TYPE_4__ {int trp_qos_clamp; int trp_apptype; } ;
struct TYPE_5__ {scalar_t__ bsd_info; TYPE_1__ requested_policy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_2(task_t VAR_6)
{
 int VAR_7 = VAR_2;

 int VAR_8 = VAR_6->requested_policy.trp_qos_clamp;

 switch (VAR_6->requested_policy.trp_apptype) {
  case 132:
  case 133:
   VAR_7 = VAR_4;
   break;

  case 129:
  case 128:
  case 131:
   VAR_7 = VAR_1;
   break;

  case 130:
   VAR_7 = VAR_0;
   break;
 }

 if (VAR_6->bsd_info == VAR_5) {

  VAR_7 = FUNC_0(VAR_7, VAR_3);
 }

 if (VAR_8 != VAR_2) {
  if (VAR_7 != VAR_2) {
   VAR_7 = FUNC_1(VAR_8, VAR_7);
  } else {
   VAR_7 = VAR_8;
  }
 }

 return VAR_7;
}
