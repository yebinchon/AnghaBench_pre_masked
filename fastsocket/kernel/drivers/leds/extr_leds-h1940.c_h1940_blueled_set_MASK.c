
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_2,
         enum led_brightness VAR_3)
{
 if (VAR_3) {

  FUNC_0(0, VAR_0);
  FUNC_1(VAR_1, 1);
 } else {
  FUNC_0(VAR_0, 0);
  FUNC_1(VAR_1, 0);
 }

}
