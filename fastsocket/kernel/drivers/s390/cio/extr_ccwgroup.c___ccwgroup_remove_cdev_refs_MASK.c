
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccwgroup_device {int count; struct ccw_device** cdev; } ;
struct ccw_device {int dev; int ccwlock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ccwgroup_device *VAR_0)
{
 struct ccw_device *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  VAR_1 = VAR_0->cdev[VAR_2];
  if (!VAR_1)
   continue;
  FUNC_2(VAR_1->ccwlock);
  FUNC_0(&VAR_1->dev, ((void*)0));
  FUNC_3(VAR_1->ccwlock);
  VAR_0->cdev[VAR_2] = ((void*)0);
  FUNC_1(&VAR_1->dev);
 }
}
