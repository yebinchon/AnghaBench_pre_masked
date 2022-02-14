
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct igb_adapter {int num_rx_queues; TYPE_1__** rx_ring; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, u32 VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_rx_queues; VAR_4++) {
  if (VAR_2)
   FUNC_2(VAR_0,
    &VAR_3->rx_ring[VAR_4]->flags);
  else
   FUNC_0(VAR_0,
      &VAR_3->rx_ring[VAR_4]->flags);
 }

 return 0;
}
