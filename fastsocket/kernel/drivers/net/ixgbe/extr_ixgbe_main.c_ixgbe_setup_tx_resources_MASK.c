
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
struct ixgbe_tx_buffer {int dummy; } ;
struct ixgbe_ring {int count; int size; int * tx_buffer_info; scalar_t__ next_to_clean; scalar_t__ next_to_use; void* desc; int dma; TYPE_1__* q_vector; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int numa_node; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 void* FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (int,int) ;

int FUNC_8(struct ixgbe_ring *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = -1;
 int VAR_6;

 VAR_6 = sizeof(struct ixgbe_tx_buffer) * VAR_2->count;

 if (VAR_2->q_vector)
  VAR_5 = VAR_2->q_vector->numa_node;

 VAR_2->tx_buffer_info = FUNC_7(VAR_6, VAR_5);
 if (!VAR_2->tx_buffer_info)
  VAR_2->tx_buffer_info = FUNC_6(VAR_6);
 if (!VAR_2->tx_buffer_info)
  goto err;


 VAR_2->size = VAR_2->count * sizeof(union ixgbe_adv_tx_desc);
 VAR_2->size = FUNC_0(VAR_2->size, 4096);

 FUNC_4(VAR_3, VAR_5);
 VAR_2->desc = FUNC_3(VAR_3,
        VAR_2->size,
        &VAR_2->dma,
        VAR_1);
 FUNC_4(VAR_3, VAR_4);
 if (!VAR_2->desc)
  VAR_2->desc = FUNC_3(VAR_3, VAR_2->size,
         &VAR_2->dma, VAR_1);
 if (!VAR_2->desc)
  goto err;

 VAR_2->next_to_use = 0;
 VAR_2->next_to_clean = 0;
 return 0;

err:
 FUNC_5(VAR_2->tx_buffer_info);
 VAR_2->tx_buffer_info = ((void*)0);
 FUNC_1(VAR_3, "Unable to allocate memory for the Tx descriptor ring\n");
 return -VAR_0;
}
