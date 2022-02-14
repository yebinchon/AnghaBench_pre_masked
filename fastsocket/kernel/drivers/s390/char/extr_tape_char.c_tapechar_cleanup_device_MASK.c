
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {int * nt; TYPE_1__* cdev; int * rt; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct tape_device *VAR_0)
{
 FUNC_0(&VAR_0->cdev->dev, VAR_0->rt);
 VAR_0->rt = ((void*)0);
 FUNC_0(&VAR_0->cdev->dev, VAR_0->nt);
 VAR_0->nt = ((void*)0);
}
