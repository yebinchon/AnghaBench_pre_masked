
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int vendor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct qlcnic_adapter *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 if (FUNC_3(VAR_1))
  return FUNC_4(VAR_1);

 VAR_2 = FUNC_1(VAR_1, FUNC_0(0));
 if ((VAR_2 & 0xffff) != VAR_1->pdev->vendor)
  return 1;

 return 0;
}
