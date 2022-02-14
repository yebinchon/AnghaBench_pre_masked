
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;

 if (FUNC_1(VAR_2, &VAR_0))
  FUNC_0(VAR_2, "failed to create rss sysfs entry\n");
}
