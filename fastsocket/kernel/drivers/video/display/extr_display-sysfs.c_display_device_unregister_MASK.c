
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_device {int idx; int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct display_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct display_device *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_3(&VAR_2->lock);
 FUNC_0(VAR_2->dev);
 FUNC_4(&VAR_2->lock);

 FUNC_3(&VAR_1);
 FUNC_1(&VAR_0, VAR_2->idx);
 FUNC_4(&VAR_1);
 FUNC_2(VAR_2);
}
