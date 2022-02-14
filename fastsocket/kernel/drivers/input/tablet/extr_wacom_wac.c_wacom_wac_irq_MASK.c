
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct TYPE_2__ {int type; } ;
 int FUNC_0 (struct wacom_wac*,void*) ;
 int FUNC_1 (struct wacom_wac*,void*) ;
 int FUNC_2 (struct wacom_wac*,void*) ;
 int FUNC_3 (struct wacom_wac*,void*) ;
 int FUNC_4 (struct wacom_wac*,void*) ;
 int FUNC_5 (struct wacom_wac*,void*) ;
 int FUNC_6 (struct wacom_wac*,void*) ;
 int FUNC_7 (struct wacom_wac*,void*) ;

int FUNC_8(struct wacom_wac *VAR_0, void *VAR_1)
{
 switch (VAR_0->features->type) {
  case 138:
   return FUNC_4(VAR_0, VAR_1);

  case 137:
   return FUNC_5(VAR_0, VAR_1);

  case 129:
  case 149:
  case 128:
   return FUNC_2(VAR_0, VAR_1);

  case 136:
   return FUNC_6(VAR_0, VAR_1);

  case 150:
   return FUNC_1(VAR_0, VAR_1);

  case 148:
  case 145:
  case 147:
  case 146:
  case 142:
  case 144:
  case 143:
  case 139:
  case 141:
  case 140:
  case 151:
  case 130:
  case 133:
  case 132:
  case 131:
   return FUNC_3(VAR_0, VAR_1);

  case 135:
  case 134:
   return FUNC_7(VAR_0, VAR_1);
  case 152:
   return FUNC_0(VAR_0, VAR_1);

  default:
   return 0;
 }
 return 0;
}
