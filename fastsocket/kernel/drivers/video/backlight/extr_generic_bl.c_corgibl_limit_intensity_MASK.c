
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct backlight_device {int ops_lock; TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (struct backlight_device*) ;
 struct backlight_device* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(int VAR_2)
{
 struct backlight_device *VAR_3 = VAR_1;

 FUNC_1(&VAR_3->ops_lock);
 if (VAR_2)
  VAR_3->props.state |= VAR_0;
 else
  VAR_3->props.state &= ~VAR_0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_3->ops_lock);
}
