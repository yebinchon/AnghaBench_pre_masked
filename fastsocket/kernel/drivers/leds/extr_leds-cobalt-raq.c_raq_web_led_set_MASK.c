
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
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_4,
       enum led_brightness VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(&VAR_3, VAR_6);

 if (VAR_5)
  VAR_2 |= VAR_0;
 else
  VAR_2 &= ~VAR_0;
 FUNC_2(VAR_2, VAR_1);

 FUNC_1(&VAR_3, VAR_6);
}
