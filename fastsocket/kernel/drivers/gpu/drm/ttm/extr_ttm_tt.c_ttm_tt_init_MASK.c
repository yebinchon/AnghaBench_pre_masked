
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {unsigned long num_pages; int pages; int * swap_storage; int state; struct page* dummy_read_page; int page_flags; int caching_state; int glob; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int glob; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ttm_tt*) ;
 int FUNC_2 (struct ttm_tt*) ;

int FUNC_3(struct ttm_tt *VAR_5, struct ttm_bo_device *VAR_6,
  unsigned long VAR_7, uint32_t VAR_8,
  struct page *VAR_9)
{
 VAR_5->bdev = VAR_6;
 VAR_5->glob = VAR_6->glob;
 VAR_5->num_pages = (VAR_7 + VAR_2 - 1) >> VAR_1;
 VAR_5->caching_state = VAR_3;
 VAR_5->page_flags = VAR_8;
 VAR_5->dummy_read_page = VAR_9;
 VAR_5->state = VAR_4;
 VAR_5->swap_storage = ((void*)0);

 FUNC_1(VAR_5);
 if (!VAR_5->pages) {
  FUNC_2(VAR_5);
  FUNC_0("Failed allocating page table\n");
  return -VAR_0;
 }
 return 0;
}
