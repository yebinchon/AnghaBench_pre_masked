
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixgbe_tx_buffer {int dummy; } ;
struct ixgbe_ring {size_t count; unsigned long size; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct ixgbe_tx_buffer* desc; struct ixgbe_tx_buffer* tx_buffer_info; } ;


 int FUNC_0 (struct ixgbe_ring*,struct ixgbe_tx_buffer*) ;
 int FUNC_1 (struct ixgbe_tx_buffer*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_ring *VAR_0)
{
 struct ixgbe_tx_buffer *VAR_1;
 unsigned long VAR_2;
 u16 VAR_3;


 if (!VAR_0->tx_buffer_info)
  return;


 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
  VAR_1 = &VAR_0->tx_buffer_info[VAR_3];
  FUNC_0(VAR_0, VAR_1);
 }

 VAR_2 = sizeof(struct ixgbe_tx_buffer) * VAR_0->count;
 FUNC_1(VAR_0->tx_buffer_info, 0, VAR_2);


 FUNC_1(VAR_0->desc, 0, VAR_0->size);

 VAR_0->next_to_use = 0;
 VAR_0->next_to_clean = 0;
}
