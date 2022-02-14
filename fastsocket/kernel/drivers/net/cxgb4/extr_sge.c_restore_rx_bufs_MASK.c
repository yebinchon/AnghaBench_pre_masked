
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_fl {size_t cidx; size_t size; int avail; struct rx_sw_desc* sdesc; } ;
struct rx_sw_desc {int dma_addr; int page; } ;
struct pkt_gl {TYPE_1__* frags; } ;
struct TYPE_2__ {int page; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct pkt_gl *VAR_1, struct sge_fl *VAR_2,
       int VAR_3)
{
 struct rx_sw_desc *VAR_4;

 while (VAR_3--) {
  if (VAR_2->cidx == 0)
   VAR_2->cidx = VAR_2->size - 1;
  else
   VAR_2->cidx--;
  VAR_4 = &VAR_2->sdesc[VAR_2->cidx];
  VAR_4->page = VAR_1->frags[VAR_3].page;
  VAR_4->dma_addr |= VAR_0;
  VAR_2->avail++;
 }
}
