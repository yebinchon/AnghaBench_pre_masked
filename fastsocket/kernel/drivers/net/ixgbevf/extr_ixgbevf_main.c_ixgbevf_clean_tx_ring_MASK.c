
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbevf_tx_buffer {int dummy; } ;
struct ixgbevf_ring {unsigned int count; unsigned long size; scalar_t__ tail; scalar_t__ head; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct ixgbevf_tx_buffer* desc; struct ixgbevf_tx_buffer* tx_buffer_info; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct ixgbevf_adapter {TYPE_1__ hw; } ;


 int FUNC_0 (struct ixgbevf_ring*,struct ixgbevf_tx_buffer*) ;
 int FUNC_1 (struct ixgbevf_tx_buffer*,int ,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_0,
      struct ixgbevf_ring *VAR_1)
{
 struct ixgbevf_tx_buffer *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 if (!VAR_1->tx_buffer_info)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  VAR_2 = &VAR_1->tx_buffer_info[VAR_4];
  FUNC_0(VAR_1, VAR_2);
 }

 VAR_3 = sizeof(struct ixgbevf_tx_buffer) * VAR_1->count;
 FUNC_1(VAR_1->tx_buffer_info, 0, VAR_3);

 FUNC_1(VAR_1->desc, 0, VAR_1->size);

 VAR_1->next_to_use = 0;
 VAR_1->next_to_clean = 0;

 if (VAR_1->head)
  FUNC_2(0, VAR_0->hw.hw_addr + VAR_1->head);
 if (VAR_1->tail)
  FUNC_2(0, VAR_0->hw.hw_addr + VAR_1->tail);
}
