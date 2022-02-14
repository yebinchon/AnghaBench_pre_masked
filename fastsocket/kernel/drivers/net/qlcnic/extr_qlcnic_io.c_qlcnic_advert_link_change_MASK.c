
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int linkup; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

void FUNC_6(struct qlcnic_adapter *VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = VAR_0->netdev;

 if (VAR_0->ahw->linkup && !VAR_1) {
  FUNC_0(VAR_2, "NIC Link is down\n");
  VAR_0->ahw->linkup = 0;
  if (FUNC_3(VAR_2)) {
   FUNC_1(VAR_2);
   FUNC_4(VAR_2);
  }
 } else if (!VAR_0->ahw->linkup && VAR_1) {
  FUNC_0(VAR_2, "NIC Link is up\n");
  VAR_0->ahw->linkup = 1;
  if (FUNC_3(VAR_2)) {
   FUNC_2(VAR_2);
   FUNC_5(VAR_2);
  }
 }
}
