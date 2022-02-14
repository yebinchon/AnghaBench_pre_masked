
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urdev {TYPE_1__* cdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,struct urdev*) ;
 int FUNC_1 (struct urdev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct urdev *VAR_0)
{
 FUNC_0("urdev_free: %p\n", VAR_0);
 if (VAR_0->cdev)
  FUNC_2(&VAR_0->cdev->dev);
 FUNC_1(VAR_0);
}
