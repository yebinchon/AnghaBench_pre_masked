
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arm_implementor; int arm_part; } ;
struct TYPE_4__ {TYPE_1__ arm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* FUNC_0 () ;

int
FUNC_1(void)
{
 int VAR_13 = 0;

 switch (FUNC_0()->arm_info.arm_implementor) {
 case 129:
  switch (FUNC_0()->arm_info.arm_part) {
  case 141:
   VAR_13 = VAR_2;
   break;
  case 142:
   VAR_13 = VAR_1;
   break;
  case 143:
   VAR_13 = VAR_3;
   break;
  case 147:
  case 146:
   VAR_13 = VAR_0;
   break;
  case 144:
  case 145:
   VAR_13 = VAR_4;
   break;
  default:
   VAR_13 = VAR_12;
   break;
  }
  break;

 case 128:
  VAR_13 = VAR_11;
  break;

 case 130:
  switch (FUNC_0()->arm_info.arm_part) {
  case 135:
   VAR_13 = VAR_8;
   break;
  case 140:
   VAR_13 = VAR_5;
   break;
  case 132:
  case 131:
   VAR_13 = VAR_10;
   break;
  case 134:
  case 133:
   VAR_13 = VAR_9;
   break;
  case 139:
  case 138:
   VAR_13 = VAR_6;
   break;
  case 136:
  case 137:
   VAR_13 = VAR_7;
   break;
  default:
   VAR_13 = VAR_12;
   break;
  }
  break;

 default:
  VAR_13 = VAR_12;
  break;
 }

 return VAR_13;
}
