
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_tx_ring {unsigned int count; unsigned long size; int dma; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct pch_gbe_buffer* desc; struct pch_gbe_buffer* buffer_info; } ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct pch_gbe_buffer {int dummy; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; } ;
struct TYPE_2__ {int TX_DSC_SIZE; int TX_DSC_HW_P; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct pch_gbe_buffer*,int ,unsigned long) ;
 int FUNC_2 (struct pch_gbe_adapter*,struct pch_gbe_buffer*) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct pch_gbe_adapter *VAR_0,
       struct pch_gbe_tx_ring *VAR_1)
{
 struct pch_gbe_hw *VAR_2 = &VAR_0->hw;
 struct pch_gbe_buffer *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++) {
  VAR_3 = &VAR_1->buffer_info[VAR_5];
  FUNC_2(VAR_0, VAR_3);
 }
 FUNC_3("call pch_gbe_unmap_and_free_tx_resource() %d count\n", VAR_5);

 VAR_4 = (unsigned long)sizeof(struct pch_gbe_buffer) * VAR_1->count;
 FUNC_1(VAR_1->buffer_info, 0, VAR_4);


 FUNC_1(VAR_1->desc, 0, VAR_1->size);
 VAR_1->next_to_use = 0;
 VAR_1->next_to_clean = 0;
 FUNC_0(VAR_1->dma, &VAR_2->reg->TX_DSC_HW_P);
 FUNC_0((VAR_1->size - 0x10), &VAR_2->reg->TX_DSC_SIZE);
}
