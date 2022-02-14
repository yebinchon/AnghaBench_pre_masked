
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; TYPE_6__* rx_queue; TYPE_3__* tx_queue; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_11__ {scalar_t__ gen; scalar_t__ next2proc; } ;
struct TYPE_12__ {TYPE_5__ comp_ring; TYPE_4__* rx_ring; } ;
struct TYPE_10__ {scalar_t__ gen; scalar_t__ next2comp; scalar_t__ next2fill; } ;
struct TYPE_8__ {scalar_t__ gen; scalar_t__ next2proc; } ;
struct TYPE_7__ {scalar_t__ gen; scalar_t__ next2comp; scalar_t__ next2fill; } ;
struct TYPE_9__ {scalar_t__ stopped; TYPE_2__ comp_ring; TYPE_1__ tx_ring; } ;


 int FUNC_0 (void*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct vmxnet3_adapter *VAR_3 = FUNC_1(VAR_0);
 u32 *VAR_4 = VAR_2;
 int VAR_5 = 0, VAR_6 = 0;

 FUNC_0(VAR_2, 0, FUNC_2(VAR_0));

 VAR_1->version = 1;




 for (VAR_5 = 0; VAR_5 < VAR_3->num_tx_queues; VAR_5++) {
  VAR_4[VAR_6++] = VAR_3->tx_queue[VAR_5].tx_ring.next2fill;
  VAR_4[VAR_6++] = VAR_3->tx_queue[VAR_5].tx_ring.next2comp;
  VAR_4[VAR_6++] = VAR_3->tx_queue[VAR_5].tx_ring.gen;
  VAR_4[VAR_6++] = 0;

  VAR_4[VAR_6++] = VAR_3->tx_queue[VAR_5].comp_ring.next2proc;
  VAR_4[VAR_6++] = VAR_3->tx_queue[VAR_5].comp_ring.gen;
  VAR_4[VAR_6++] = VAR_3->tx_queue[VAR_5].stopped;
  VAR_4[VAR_6++] = 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_rx_queues; VAR_5++) {
  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].rx_ring[0].next2fill;
  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].rx_ring[0].next2comp;
  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].rx_ring[0].gen;
  VAR_4[VAR_6++] = 0;

  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].rx_ring[1].next2fill;
  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].rx_ring[1].next2comp;
  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].rx_ring[1].gen;
  VAR_4[VAR_6++] = 0;

  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].comp_ring.next2proc;
  VAR_4[VAR_6++] = VAR_3->rx_queue[VAR_5].comp_ring.gen;
  VAR_4[VAR_6++] = 0;
  VAR_4[VAR_6++] = 0;
 }

}
