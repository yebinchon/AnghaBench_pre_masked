
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hdr_addr; int pkt_addr; } ;
union e1000_adv_rx_desc {TYPE_1__ read; } ;
typedef size_t u16 ;
struct igb_rx_buffer {scalar_t__ page_offset; scalar_t__ dma; } ;
struct igb_ring {size_t next_to_use; size_t next_to_alloc; int tail; scalar_t__ count; struct igb_rx_buffer* rx_buffer_info; } ;


 union e1000_adv_rx_desc* FUNC_0 (struct igb_ring*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct igb_ring*,struct igb_rx_buffer*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (size_t,int ) ;

void FUNC_6(struct igb_ring *VAR_0, u16 VAR_1)
{
 union e1000_adv_rx_desc *VAR_2;
 struct igb_rx_buffer *VAR_3;
 u16 VAR_4 = VAR_0->next_to_use;


 if (!VAR_1)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_4);
 VAR_3 = &VAR_0->rx_buffer_info[VAR_4];
 VAR_4 -= VAR_0->count;

 do {
  if (!FUNC_2(VAR_0, VAR_3))
   break;




  VAR_2->read.pkt_addr = FUNC_1(VAR_3->dma + VAR_3->page_offset);

  VAR_2++;
  VAR_3++;
  VAR_4++;
  if (FUNC_3(!VAR_4)) {
   VAR_2 = FUNC_0(VAR_0, 0);
   VAR_3 = VAR_0->rx_buffer_info;
   VAR_4 -= VAR_0->count;
  }


  VAR_2->read.hdr_addr = 0;

  VAR_1--;
 } while (VAR_1);

 VAR_4 += VAR_0->count;

 if (VAR_0->next_to_use != VAR_4) {

  VAR_0->next_to_use = VAR_4;


  VAR_0->next_to_alloc = VAR_4;






  FUNC_4();
  FUNC_5(VAR_4, VAR_0->tail);
 }
}
