
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {int flags; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ op_mode; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int *) ;
 scalar_t__ FUNC_2 (struct device*,int *) ;

void FUNC_3(struct qlcnic_adapter *VAR_15)
{
 struct device *VAR_16 = &VAR_15->pdev->dev;

 if (FUNC_1(VAR_16, &VAR_10))
  FUNC_0(VAR_16, "failed to create port stats sysfs entry");

 if (VAR_15->ahw->op_mode == VAR_2)
  return;
 if (FUNC_2(VAR_16, &VAR_12))
  FUNC_0(VAR_16, "failed to create diag_mode sysfs entry\n");
 if (FUNC_1(VAR_16, &VAR_3))
  FUNC_0(VAR_16, "failed to create crb sysfs entry\n");
 if (FUNC_1(VAR_16, &VAR_6))
  FUNC_0(VAR_16, "failed to create mem sysfs entry\n");

 if (FUNC_2(VAR_16, &VAR_11))
  FUNC_0(VAR_16, "failed to create beacon sysfs entry");
 if (FUNC_2(VAR_16, &VAR_14))
  FUNC_0(VAR_16, "failed to create rss sysfs entry\n");
 if (FUNC_2(VAR_16, &VAR_13))
  FUNC_0(VAR_16, "failed to create elb_mode sysfs entry\n");
 if (FUNC_1(VAR_16, &VAR_8))
  FUNC_0(VAR_16, "failed to create pci config sysfs entry");
 if (!(VAR_15->flags & VAR_0))
  return;
 if (FUNC_1(VAR_16, &VAR_4))
  FUNC_0(VAR_16, "failed to create esw config sysfs entry");
 if (VAR_15->ahw->op_mode != VAR_1)
  return;
 if (FUNC_1(VAR_16, &VAR_7))
  FUNC_0(VAR_16, "failed to create npar config sysfs entry");
 if (FUNC_1(VAR_16, &VAR_9))
  FUNC_0(VAR_16, "failed to create pm config sysfs entry");
 if (FUNC_1(VAR_16, &VAR_5))
  FUNC_0(VAR_16, "failed to create eswitch stats sysfs entry");
}
