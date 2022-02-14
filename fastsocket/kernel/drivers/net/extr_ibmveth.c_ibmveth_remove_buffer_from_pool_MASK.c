
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct ibmveth_adapter {TYPE_2__* rx_buff_pool; TYPE_1__* vdev; } ;
struct TYPE_4__ {unsigned int size; unsigned int producer_index; unsigned int* free_map; int available; int buff_size; int * dma_addr; struct sk_buff** skbuff; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct ibmveth_adapter *VAR_2,
         u64 VAR_3)
{
 unsigned int VAR_4 = VAR_3 >> 32;
 unsigned int VAR_5 = VAR_3 & 0xffffffffUL;
 unsigned int VAR_6;
 struct sk_buff *VAR_7;

 FUNC_0(VAR_4 >= VAR_1);
 FUNC_0(VAR_5 >= VAR_2->rx_buff_pool[VAR_4].size);

 VAR_7 = VAR_2->rx_buff_pool[VAR_4].skbuff[VAR_5];

 FUNC_0(VAR_7 == ((void*)0));

 VAR_2->rx_buff_pool[VAR_4].skbuff[VAR_5] = ((void*)0);

 FUNC_2(&VAR_2->vdev->dev,
    VAR_2->rx_buff_pool[VAR_4].dma_addr[VAR_5],
    VAR_2->rx_buff_pool[VAR_4].buff_size,
    VAR_0);

 VAR_6 = VAR_2->rx_buff_pool[VAR_4].producer_index;
 VAR_2->rx_buff_pool[VAR_4].producer_index++;
 if (VAR_2->rx_buff_pool[VAR_4].producer_index >=
     VAR_2->rx_buff_pool[VAR_4].size)
  VAR_2->rx_buff_pool[VAR_4].producer_index = 0;
 VAR_2->rx_buff_pool[VAR_4].free_map[VAR_6] = VAR_5;

 FUNC_3();

 FUNC_1(&(VAR_2->rx_buff_pool[VAR_4].available));
}
