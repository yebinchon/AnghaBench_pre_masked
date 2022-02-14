
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_led {int work; int client; int state; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pca9532_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_5,
 enum led_brightness VAR_6)
{
 int VAR_7 = 0;
 struct pca9532_led *VAR_8 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_1)
  VAR_8->state = VAR_2;
 else if (VAR_6 == VAR_0)
  VAR_8->state = VAR_3;
 else {
  VAR_8->state = VAR_4;
  VAR_7 = FUNC_1(VAR_8->client, 0, 0, VAR_6);
  if (VAR_7)
   return;
 }
 FUNC_2(&VAR_8->work);
}
