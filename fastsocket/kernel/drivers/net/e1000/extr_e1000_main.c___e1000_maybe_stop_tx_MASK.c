
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_tx_ring {int dummy; } ;
struct e1000_adapter {int restart_queue; struct e1000_tx_ring* tx_ring; } ;


 int FUNC_0 (struct e1000_tx_ring*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct e1000_adapter *VAR_3 = FUNC_2(VAR_1);
 struct e1000_tx_ring *VAR_4 = VAR_3->tx_ring;

 FUNC_4(VAR_1);



 FUNC_5();



 if (FUNC_1(FUNC_0(VAR_4) < VAR_2))
  return -VAR_0;


 FUNC_3(VAR_1);
 ++VAR_3->restart_queue;
 return 0;
}
