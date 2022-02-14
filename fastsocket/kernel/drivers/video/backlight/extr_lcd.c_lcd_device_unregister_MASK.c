
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; int ops_lock; int * ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct lcd_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->ops_lock);
 VAR_0->ops = ((void*)0);
 FUNC_3(&VAR_0->ops_lock);
 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev);
}
