
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned long max_brightness; unsigned long brightness; } ;
struct backlight_device {int ops_lock; TYPE_1__ props; scalar_t__ ops; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct backlight_device*,int ) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (char const*,int ,unsigned long*) ;
 struct backlight_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct backlight_device *VAR_8 = FUNC_6(VAR_3);
 unsigned long VAR_9;

 VAR_7 = FUNC_5(VAR_5, 0, &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_7 = -VAR_2;

 FUNC_2(&VAR_8->ops_lock);
 if (VAR_8->ops) {
  if (VAR_9 > VAR_8->props.max_brightness)
   VAR_7 = -VAR_1;
  else {
   FUNC_4("backlight: set brightness to %lu\n",
     VAR_9);
   VAR_8->props.brightness = VAR_9;
   FUNC_1(VAR_8);
   VAR_7 = VAR_6;
  }
 }
 FUNC_3(&VAR_8->ops_lock);

 FUNC_0(VAR_8, VAR_0);

 return VAR_7;
}
