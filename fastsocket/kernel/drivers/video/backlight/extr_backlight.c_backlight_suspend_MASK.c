
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {int state; } ;
struct backlight_device {int ops_lock; TYPE_2__ props; TYPE_1__* ops; } ;
typedef int pm_message_t ;
struct TYPE_3__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct backlight_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, pm_message_t VAR_3)
{
 struct backlight_device *VAR_4 = FUNC_3(VAR_2);

 if (VAR_4->ops->options & VAR_1) {
  FUNC_1(&VAR_4->ops_lock);
  VAR_4->props.state |= VAR_0;
  FUNC_0(VAR_4);
  FUNC_2(&VAR_4->ops_lock);
 }

 return 0;
}
