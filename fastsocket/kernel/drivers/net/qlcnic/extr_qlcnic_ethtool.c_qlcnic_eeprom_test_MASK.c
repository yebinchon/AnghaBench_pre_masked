
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct net_device {int dummy; } ;


 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct qlcnic_adapter *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_1))
  return 0;

 return FUNC_2(VAR_1);
}
