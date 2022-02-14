
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_buffer {int page_count; int * pages; int direction; } ;
struct fw_card {int device; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct fw_iso_buffer *VAR_1,
      struct fw_card *VAR_2)
{
 int VAR_3;
 dma_addr_t VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->page_count; VAR_3++) {
  VAR_4 = FUNC_3(VAR_1->pages[VAR_3]);
  FUNC_1(VAR_2->device, VAR_4,
          VAR_0, VAR_1->direction);
  FUNC_0(VAR_1->pages[VAR_3]);
 }

 FUNC_2(VAR_1->pages);
 VAR_1->pages = ((void*)0);
}
