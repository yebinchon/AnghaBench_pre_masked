
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct backlight_ops {int dummy; } ;
struct TYPE_5__ {int release; struct device* parent; int class; } ;
struct backlight_device {struct backlight_ops* ops; TYPE_1__ dev; int ops_lock; int update_lock; } ;


 int VAR_0 ;
 struct backlight_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct backlight_device*) ;
 struct backlight_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct backlight_device* VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,char const*) ;

struct backlight_device *FUNC_12(const char *VAR_6,
  struct device *VAR_7, void *VAR_8, struct backlight_ops *VAR_9)
{
 struct backlight_device *VAR_10;
 int VAR_11;

 FUNC_11("backlight_device_register: name=%s\n", VAR_6);

 VAR_10 = FUNC_7(sizeof(struct backlight_device), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 FUNC_8(&VAR_10->update_lock);
 FUNC_8(&VAR_10->ops_lock);

 VAR_10->dev.class = VAR_2;
 VAR_10->dev.parent = VAR_7;
 VAR_10->dev.release = VAR_3;
 FUNC_3(&VAR_10->dev, VAR_6);
 FUNC_2(&VAR_10->dev, VAR_8);

 VAR_11 = FUNC_4(&VAR_10->dev);
 if (VAR_11) {
  FUNC_6(VAR_10);
  return FUNC_0(VAR_11);
 }

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11) {
  FUNC_5(&VAR_10->dev);
  return FUNC_0(VAR_11);
 }

 VAR_10->ops = VAR_9;
 return VAR_10;
}
