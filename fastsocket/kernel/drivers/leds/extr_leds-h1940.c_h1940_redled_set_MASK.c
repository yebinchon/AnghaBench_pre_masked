
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_3,
        enum led_brightness VAR_4)
{
 switch (VAR_4) {
 case 129:
  FUNC_0(0, VAR_0);
  FUNC_1(VAR_2, 1);
  break;
 case 130:
  FUNC_0(0, VAR_1);
  FUNC_1(VAR_2, 1);
  break;
 default:
 case 128:
  FUNC_0(VAR_0, 0);
  FUNC_0(VAR_1, 0);
  FUNC_1(VAR_2, 0);
  break;
 }
}
