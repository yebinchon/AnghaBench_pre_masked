
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbevf_ring {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; struct ixgbevf_ring* rx_ring; struct net_device* netdev; } ;


 int FUNC_0 (struct ixgbevf_ring*) ;
 int FUNC_1 (struct ixgbevf_adapter*,struct ixgbevf_ring*,int ) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct ixgbevf_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 FUNC_5(VAR_1);

 FUNC_4(VAR_0);

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_queues; VAR_2++) {
  struct ixgbevf_ring *VAR_3 = &VAR_0->rx_ring[VAR_2];
  FUNC_1(VAR_0, VAR_3,
      FUNC_0(VAR_3));
 }
}
