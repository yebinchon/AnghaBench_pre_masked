
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 if (FUNC_1(VAR_2)) {
  if (!FUNC_3(VAR_1, VAR_2))
   FUNC_2(VAR_2, VAR_0);
 }

 FUNC_0(VAR_2);
}
