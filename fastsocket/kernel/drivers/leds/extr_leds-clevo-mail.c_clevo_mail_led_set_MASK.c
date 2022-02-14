
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_5,
    enum led_brightness VAR_6)
{
 FUNC_1();

 if (VAR_6 == VAR_4)
  FUNC_0(((void*)0), VAR_2);
 else if (VAR_6 <= VAR_3)
  FUNC_0(((void*)0), VAR_0);
 else
  FUNC_0(((void*)0), VAR_1);

 FUNC_2();

}
