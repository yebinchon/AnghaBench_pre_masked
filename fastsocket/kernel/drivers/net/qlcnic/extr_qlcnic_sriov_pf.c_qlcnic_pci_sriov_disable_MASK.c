
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_1, VAR_2);

 FUNC_5(VAR_1);

 FUNC_4(VAR_1);




 if (FUNC_3(VAR_1))
  return -VAR_0;

 if (FUNC_2(VAR_2))
  FUNC_1(VAR_1, VAR_2);

 return 0;
}
