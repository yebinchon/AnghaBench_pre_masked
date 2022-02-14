
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int queue_mapping; } ;
struct net_device {scalar_t__ real_num_tx_queues; } ;
struct TYPE_2__ {int bond_queue_mapping; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(struct net_device *VAR_0, struct sk_buff *VAR_1)
{






 u16 VAR_2 = FUNC_2(VAR_1) ? FUNC_1(VAR_1) : 0;




 FUNC_0(VAR_1)->bond_queue_mapping = VAR_1->queue_mapping;

 if (FUNC_3(VAR_2 >= VAR_0->real_num_tx_queues)) {
  do
   VAR_2 -= VAR_0->real_num_tx_queues;
  while (VAR_2 >= VAR_0->real_num_tx_queues);
 }
 return VAR_2;
}
