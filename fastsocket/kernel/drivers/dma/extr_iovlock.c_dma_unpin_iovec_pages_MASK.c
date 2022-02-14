
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pinned_list {int nr_iovecs; struct dma_page_list* page_list; } ;
struct dma_page_list {int nr_pages; int * pages; } ;


 int FUNC_0 (struct dma_pinned_list*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dma_pinned_list *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_iovecs; VAR_1++) {
  struct dma_page_list *VAR_3 = &VAR_0->page_list[VAR_1];
  for (VAR_2 = 0; VAR_2 < VAR_3->nr_pages; VAR_2++) {
   FUNC_2(VAR_3->pages[VAR_2]);
   FUNC_1(VAR_3->pages[VAR_2]);
  }
 }

 FUNC_0(VAR_0);
}
