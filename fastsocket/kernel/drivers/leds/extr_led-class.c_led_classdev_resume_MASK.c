
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int brightness; int (* brightness_set ) (struct led_classdev*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct led_classdev*,int ) ;

void FUNC_1(struct led_classdev *VAR_1)
{
 VAR_1->brightness_set(VAR_1, VAR_1->brightness);
 VAR_1->flags &= ~VAR_0;
}
