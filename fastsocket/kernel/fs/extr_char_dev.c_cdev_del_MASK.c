
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int kobj; int count; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cdev *VAR_0)
{
 FUNC_0(VAR_0->dev, VAR_0->count);
 FUNC_1(&VAR_0->kobj);
}
