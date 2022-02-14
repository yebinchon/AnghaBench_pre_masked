
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {size_t index; TYPE_1__* queue_addr; } ;
struct ibmveth_adapter {TYPE_3__* rx_buff_pool; TYPE_2__ rx_queue; } ;
struct TYPE_6__ {unsigned int size; struct sk_buff** skbuff; } ;
struct TYPE_4__ {int correlator; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static inline struct sk_buff *FUNC_1(struct ibmveth_adapter *VAR_1)
{
 u64 VAR_2 = VAR_1->rx_queue.queue_addr[VAR_1->rx_queue.index].correlator;
 unsigned int VAR_3 = VAR_2 >> 32;
 unsigned int VAR_4 = VAR_2 & 0xffffffffUL;

 FUNC_0(VAR_3 >= VAR_0);
 FUNC_0(VAR_4 >= VAR_1->rx_buff_pool[VAR_3].size);

 return VAR_1->rx_buff_pool[VAR_3].skbuff[VAR_4];
}
