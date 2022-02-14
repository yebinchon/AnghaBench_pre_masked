
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct igb_rx_buffer {scalar_t__ page_offset; struct page* page; int dma; } ;
struct TYPE_2__ {int alloc_failed; } ;
struct igb_ring {TYPE_1__ rx_stats; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct igb_ring *VAR_4,
      struct igb_rx_buffer *VAR_5)
{
 struct page *VAR_6 = VAR_5->page;
 dma_addr_t VAR_7;


 if (FUNC_4(VAR_6))
  return 1;


 VAR_6 = FUNC_1(VAR_1 | VAR_3);
 if (FUNC_5(!VAR_6)) {
  VAR_4->rx_stats.alloc_failed++;
  return 0;
 }


 VAR_7 = FUNC_2(VAR_4->dev, VAR_6, 0, VAR_2, VAR_0);




 if (FUNC_3(VAR_4->dev, VAR_7)) {
  FUNC_0(VAR_6);

  VAR_4->rx_stats.alloc_failed++;
  return 0;
 }

 VAR_5->dma = VAR_7;
 VAR_5->page = VAR_6;
 VAR_5->page_offset = 0;

 return 1;
}
