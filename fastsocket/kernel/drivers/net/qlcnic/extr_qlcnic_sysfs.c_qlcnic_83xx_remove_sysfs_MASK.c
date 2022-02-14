
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct device {int kobj; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_2->kobj, &VAR_0);
}
