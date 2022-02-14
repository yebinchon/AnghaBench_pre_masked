
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int queue_mapping; } ;
struct igb_ring {int dummy; } ;
struct igb_adapter {unsigned int num_tx_queues; struct igb_ring** tx_ring; } ;



__attribute__((used)) static inline struct igb_ring *FUNC_0(struct igb_adapter *VAR_0,
          struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = VAR_1->queue_mapping;

 if (VAR_2 >= VAR_0->num_tx_queues)
  VAR_2 = VAR_2 % VAR_0->num_tx_queues;

 return VAR_0->tx_ring[VAR_2];
}
