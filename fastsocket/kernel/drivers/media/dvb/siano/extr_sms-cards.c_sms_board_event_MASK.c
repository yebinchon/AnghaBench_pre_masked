
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_gpio_config {int dummy; } ;
struct smscore_device_t {int dummy; } ;
typedef enum SMS_BOARD_EVENTS { ____Placeholder_SMS_BOARD_EVENTS } SMS_BOARD_EVENTS ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smscore_gpio_config*) ;

int FUNC_2(struct smscore_device_t *VAR_0,
  enum SMS_BOARD_EVENTS VAR_1) {
 struct smscore_gpio_config VAR_2;

 FUNC_1(&VAR_2);

 switch (VAR_1) {
 case 137:
  break;

 case 135:
  break;

 case 136:
  break;

 case 145:
  break;

 case 128:
  break;
 case 129:
  break;
 case 142:
  break;
 case 141:
  break;
 case 140:
  break;
 case 144:
  break;
 case 143:
  break;
 case 130:
  break;
 case 132:
  break;
 case 133:
  break;
 case 134:
  break;
 case 131:
  break;
 case 138:
  break;
 case 139:
  break;

 default:
  FUNC_0("Unknown SMS board event");
  break;
 }
 return 0;
}
