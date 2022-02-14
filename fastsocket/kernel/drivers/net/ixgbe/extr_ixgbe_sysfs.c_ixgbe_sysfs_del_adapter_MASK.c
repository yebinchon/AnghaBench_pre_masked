
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n_hwmon; scalar_t__ device; TYPE_3__* hwmon_list; } ;
struct ixgbe_adapter {TYPE_2__ ixgbe_hwmon_buff; TYPE_1__* pdev; } ;
struct TYPE_6__ {int dev_attr; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->ixgbe_hwmon_buff.n_hwmon; VAR_1++) {
  FUNC_0(&VAR_0->pdev->dev,
      &VAR_0->ixgbe_hwmon_buff.hwmon_list[VAR_1].dev_attr);
 }

 FUNC_2(VAR_0->ixgbe_hwmon_buff.hwmon_list);

 if (VAR_0->ixgbe_hwmon_buff.device)
  FUNC_1(VAR_0->ixgbe_hwmon_buff.device);
}
