
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int dev; } ;
struct queue_entry_priv_mmio {int * desc; int desc_dma; } ;
struct data_queue {int limit; int desc_size; TYPE_1__* entries; } ;
struct TYPE_2__ {struct queue_entry_priv_mmio* priv_data; } ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct rt2x00_dev *VAR_0,
          struct data_queue *VAR_1)
{
 struct queue_entry_priv_mmio *VAR_2 =
     VAR_1->entries[0].priv_data;

 if (VAR_2->desc)
  FUNC_0(VAR_0->dev,
      VAR_1->limit * VAR_1->desc_size,
      VAR_2->desc, VAR_2->desc_dma);
 VAR_2->desc = ((void*)0);
}
