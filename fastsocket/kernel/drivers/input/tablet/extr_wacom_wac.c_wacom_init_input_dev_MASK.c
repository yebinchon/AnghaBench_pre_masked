
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int type; int device_type; } ;



 int VAR_0 ;
 int FUNC_0 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_1 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_2 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_3 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_4 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_5 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_6 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_7 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_8 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_9 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_10 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_11 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_12 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_13 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_14 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_15 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_16 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_17 (struct input_dev*,struct wacom_wac*) ;

void FUNC_18(struct input_dev *VAR_1, struct wacom_wac *VAR_2)
{
 switch (VAR_2->features->type) {
  case 128:
   FUNC_13(VAR_1, VAR_2);
  case 129:
   FUNC_7(VAR_1, VAR_2);

  case 149:
   FUNC_6(VAR_1, VAR_2);
   break;
  case 131:
   FUNC_0(VAR_1, VAR_2);
   break;
  case 132:
   FUNC_4(VAR_1, VAR_2);

  case 133:
   FUNC_3(VAR_1, VAR_2);

  case 130:
   FUNC_2(VAR_1, VAR_2);

  case 147:
  case 146:
   FUNC_9(VAR_1, VAR_2);

  case 145:
   FUNC_10(VAR_1, VAR_2);

  case 148:
   FUNC_8(VAR_1, VAR_2);
   break;
  case 141:
  case 140:
  case 144:
  case 143:
   FUNC_11(VAR_1, VAR_2);

  case 139:
  case 142:
   FUNC_12(VAR_1, VAR_2);
   FUNC_8(VAR_1, VAR_2);
   break;
  case 134:
   FUNC_17(VAR_1, VAR_2);

  case 135:
   FUNC_16(VAR_1, VAR_2);
   if (VAR_2->features->device_type != VAR_0)
    break;


  case 137:
  case 136:
  case 150:
   FUNC_14(VAR_1, VAR_2);

  case 138:
   FUNC_15(VAR_1, VAR_2);
   break;
                case 151:
                        FUNC_5(VAR_1, VAR_2);
                        break;
  case 152:
   FUNC_1(VAR_1, VAR_2);
   break;
 }
 return;
}
