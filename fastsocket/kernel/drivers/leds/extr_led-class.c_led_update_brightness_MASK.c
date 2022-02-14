
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int (* brightness_get ) (struct led_classdev*) ;int brightness; } ;


 int FUNC_0 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_1(struct led_classdev *VAR_0)
{
 if (VAR_0->brightness_get)
  VAR_0->brightness = VAR_0->brightness_get(VAR_0);
}
