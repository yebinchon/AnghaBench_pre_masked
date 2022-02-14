
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lcd_ops {int dummy; } ;
struct TYPE_5__ {int release; struct device* parent; int class; } ;
struct lcd_device {struct lcd_ops* ops; TYPE_1__ dev; int update_lock; int ops_lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct lcd_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct lcd_device*) ;
 struct lcd_device* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct lcd_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*) ;

struct lcd_device *FUNC_10(const char *VAR_4, struct device *VAR_5,
  void *VAR_6, struct lcd_ops *VAR_7)
{
 struct lcd_device *VAR_8;
 int VAR_9;

 FUNC_9("lcd_device_register: name=%s\n", VAR_4);

 VAR_8 = FUNC_6(sizeof(struct lcd_device), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_8(&VAR_8->ops_lock);
 FUNC_8(&VAR_8->update_lock);

 VAR_8->dev.class = VAR_2;
 VAR_8->dev.parent = VAR_5;
 VAR_8->dev.release = VAR_3;
 FUNC_2(&VAR_8->dev, VAR_4);
 FUNC_1(&VAR_8->dev, VAR_6);

 VAR_9 = FUNC_3(&VAR_8->dev);
 if (VAR_9) {
  FUNC_5(VAR_8);
  return FUNC_0(VAR_9);
 }

 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9) {
  FUNC_4(&VAR_8->dev);
  return FUNC_0(VAR_9);
 }

 VAR_8->ops = VAR_7;

 return VAR_8;
}
