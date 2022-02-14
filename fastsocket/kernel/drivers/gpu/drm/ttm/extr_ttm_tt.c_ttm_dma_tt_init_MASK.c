
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {unsigned long num_pages; int pages; int * swap_storage; int state; struct page* dummy_read_page; int page_flags; int caching_state; int glob; struct ttm_bo_device* bdev; } ;
struct ttm_dma_tt {int dma_address; int pages_list; struct ttm_tt ttm; } ;
struct ttm_bo_device {int glob; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ttm_dma_tt*) ;
 int FUNC_3 (struct ttm_tt*) ;

int FUNC_4(struct ttm_dma_tt *VAR_5, struct ttm_bo_device *VAR_6,
  unsigned long VAR_7, uint32_t VAR_8,
  struct page *VAR_9)
{
 struct ttm_tt *VAR_10 = &VAR_5->ttm;

 VAR_10->bdev = VAR_6;
 VAR_10->glob = VAR_6->glob;
 VAR_10->num_pages = (VAR_7 + VAR_2 - 1) >> VAR_1;
 VAR_10->caching_state = VAR_3;
 VAR_10->page_flags = VAR_8;
 VAR_10->dummy_read_page = VAR_9;
 VAR_10->state = VAR_4;
 VAR_10->swap_storage = ((void*)0);

 FUNC_0(&VAR_5->pages_list);
 FUNC_2(VAR_5);
 if (!VAR_10->pages || !VAR_5->dma_address) {
  FUNC_3(VAR_10);
  FUNC_1("Failed allocating page table\n");
  return -VAR_0;
 }
 return 0;
}
