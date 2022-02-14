
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int restart_queue; } ;
struct igb_ring {TYPE_1__ tx_stats; int queue_index; struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ const FUNC_0 (struct igb_ring*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct igb_ring *VAR_1, const u16 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;

 FUNC_1(VAR_3, VAR_1->queue_index);





 FUNC_3();




 if (FUNC_0(VAR_1) < VAR_2)
  return -VAR_0;


 FUNC_2(VAR_3, VAR_1->queue_index);
 VAR_1->tx_stats.restart_queue++;
 return 0;
}
