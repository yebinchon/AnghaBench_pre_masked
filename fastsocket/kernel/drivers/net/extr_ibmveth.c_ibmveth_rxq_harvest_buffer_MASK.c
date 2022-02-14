
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t index; size_t num_slots; int toggle; TYPE_1__* queue_addr; } ;
struct ibmveth_adapter {TYPE_2__ rx_queue; } ;
struct TYPE_3__ {int correlator; } ;


 int FUNC_0 (struct ibmveth_adapter*,int ) ;

__attribute__((used)) static void FUNC_1(struct ibmveth_adapter *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->rx_queue.queue_addr[VAR_0->rx_queue.index].correlator);

 if (++VAR_0->rx_queue.index == VAR_0->rx_queue.num_slots) {
  VAR_0->rx_queue.index = 0;
  VAR_0->rx_queue.toggle = !VAR_0->rx_queue.toggle;
 }
}
