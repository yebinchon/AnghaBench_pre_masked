
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devres_group {int * node; } ;
struct device {int devres_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,int *) ;
 struct devres_group* FUNC_2 (struct device*,void*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct device *VAR_0, void *VAR_1)
{
 struct devres_group *VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0->devres_lock, VAR_3);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, &VAR_2->node[1]);
 else
  FUNC_0(1);

 FUNC_4(&VAR_0->devres_lock, VAR_3);
}
