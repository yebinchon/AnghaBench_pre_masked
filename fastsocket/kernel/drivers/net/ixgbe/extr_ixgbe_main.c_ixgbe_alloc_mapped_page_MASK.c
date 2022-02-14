
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ixgbe_rx_buffer {int dma; scalar_t__ page_offset; struct page* page; } ;
struct TYPE_2__ {int alloc_rx_page_failed; } ;
struct ixgbe_ring {TYPE_1__ rx_stats; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct ixgbe_ring *VAR_4,
        struct ixgbe_rx_buffer *VAR_5)
{
 struct page *VAR_6 = VAR_5->page;
 dma_addr_t VAR_7 = VAR_5->dma;


 if (FUNC_6(VAR_7))
  return 1;


 if (FUNC_6(!VAR_6)) {
  VAR_6 = FUNC_1(VAR_1 | VAR_2 | VAR_3,
       FUNC_4(VAR_4));
  if (FUNC_7(!VAR_6)) {
   VAR_4->rx_stats.alloc_rx_page_failed++;
   return 0;
  }
  VAR_5->page = VAR_6;
 }


 VAR_7 = FUNC_2(VAR_4->dev, VAR_6, 0,
      FUNC_5(VAR_4), VAR_0);





 if (FUNC_3(VAR_4->dev, VAR_7)) {
  FUNC_0(VAR_6, FUNC_4(VAR_4));
  VAR_5->page = ((void*)0);

  VAR_4->rx_stats.alloc_rx_page_failed++;
  return 0;
 }

 VAR_5->dma = VAR_7;
 VAR_5->page_offset = 0;

 return 1;
}
