
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devres_group {TYPE_1__* node; } ;
struct device {int devres_lock; } ;
struct TYPE_2__ {int entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,TYPE_1__*,char*) ;
 struct devres_group* FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct devres_group*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct device *VAR_0, void *VAR_1)
{
 struct devres_group *VAR_2;
 unsigned long VAR_3;

 FUNC_5(&VAR_0->devres_lock, VAR_3);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_4(&VAR_2->node[0].entry);
  FUNC_4(&VAR_2->node[1].entry);
  FUNC_1(VAR_0, &VAR_2->node[0], "REM");
 } else
  FUNC_0(1);

 FUNC_6(&VAR_0->devres_lock, VAR_3);

 FUNC_3(VAR_2);
}
