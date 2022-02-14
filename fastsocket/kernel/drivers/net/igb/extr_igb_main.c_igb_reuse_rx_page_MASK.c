
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct igb_rx_buffer {int page_offset; int dma; } ;
struct igb_ring {size_t next_to_alloc; size_t count; int dev; struct igb_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct igb_rx_buffer*,struct igb_rx_buffer*,int) ;

__attribute__((used)) static void FUNC_2(struct igb_ring *VAR_2,
         struct igb_rx_buffer *VAR_3)
{
 struct igb_rx_buffer *VAR_4;
 u16 VAR_5 = VAR_2->next_to_alloc;

 VAR_4 = &VAR_2->rx_buffer_info[VAR_5];


 VAR_5++;
 VAR_2->next_to_alloc = (VAR_5 < VAR_2->count) ? VAR_5 : 0;


 FUNC_1(VAR_4, VAR_3, sizeof(struct igb_rx_buffer));


 FUNC_0(VAR_2->dev, VAR_3->dma,
      VAR_3->page_offset,
      VAR_1,
      VAR_0);
}
