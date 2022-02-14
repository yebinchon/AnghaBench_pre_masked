
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dev; int ops_lock; int * ops; } ;


 int FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct backlight_device* VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct backlight_device *VAR_2)
{
 if (!VAR_2)
  return;







 FUNC_2(&VAR_2->ops_lock);
 VAR_2->ops = ((void*)0);
 FUNC_3(&VAR_2->ops_lock);

 FUNC_0(VAR_2);
 FUNC_1(&VAR_2->dev);
}
