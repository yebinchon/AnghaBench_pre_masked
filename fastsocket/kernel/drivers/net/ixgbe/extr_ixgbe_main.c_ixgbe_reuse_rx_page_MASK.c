
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixgbe_rx_buffer {int page_offset; int dma; int page; } ;
struct ixgbe_ring {size_t next_to_alloc; size_t count; int dev; struct ixgbe_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_ring *VAR_1,
    struct ixgbe_rx_buffer *VAR_2)
{
 struct ixgbe_rx_buffer *VAR_3;
 u16 VAR_4 = VAR_1->next_to_alloc;

 VAR_3 = &VAR_1->rx_buffer_info[VAR_4];


 VAR_4++;
 VAR_1->next_to_alloc = (VAR_4 < VAR_1->count) ? VAR_4 : 0;


 VAR_3->page = VAR_2->page;
 VAR_3->dma = VAR_2->dma;
 VAR_3->page_offset = VAR_2->page_offset;


 FUNC_0(VAR_1->dev, VAR_3->dma,
      VAR_3->page_offset,
      FUNC_1(VAR_1),
      VAR_0);
}
