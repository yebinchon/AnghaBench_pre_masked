
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int dummy; } ;
struct sms_board {int lna_ctrl; int led_power; } ;





 struct sms_board* FUNC_0 (int) ;
 int FUNC_1 (struct smscore_device_t*,int ,int) ;
 int FUNC_2 (struct smscore_device_t*) ;

int FUNC_3(struct smscore_device_t *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0);
 struct sms_board *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_2) {
 case 128:

  FUNC_1(VAR_0,
        VAR_3->led_power, VAR_1 ? 1 : 0);
  break;
 case 129:
 case 130:

  if (!VAR_1)
   FUNC_1(VAR_0, VAR_3->lna_ctrl, 0);
  break;
 }
 return 0;
}
