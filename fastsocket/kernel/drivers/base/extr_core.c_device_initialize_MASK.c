
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kset; } ;
struct device {int devres_head; int devres_lock; int sem; int dma_pools; TYPE_1__ kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct device*,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct device *VAR_2)
{
 VAR_2->kobj.kset = VAR_1;
 FUNC_4(&VAR_2->kobj, &VAR_0);
 FUNC_0(&VAR_2->dma_pools);
 FUNC_3(&VAR_2->sem);
 FUNC_6(&VAR_2->devres_lock);
 FUNC_0(&VAR_2->devres_head);
 FUNC_1(VAR_2, 0);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2, -1);
}
