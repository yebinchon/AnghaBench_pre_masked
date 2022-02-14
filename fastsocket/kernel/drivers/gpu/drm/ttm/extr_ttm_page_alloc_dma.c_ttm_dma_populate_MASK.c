
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; int page_flags; unsigned int num_pages; int * pages; int caching_state; TYPE_1__* glob; } ;
struct ttm_mem_global {int dummy; } ;
struct ttm_dma_tt {int pages_list; struct ttm_tt ttm; } ;
struct dma_pool {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef enum pool_type { ____Placeholder_pool_type } pool_type ;
struct TYPE_2__ {struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct dma_pool*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct dma_pool* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct dma_pool*,struct ttm_dma_tt*,unsigned int) ;
 struct dma_pool* FUNC_4 (struct device*,int,int) ;
 int FUNC_5 (struct ttm_dma_tt*,struct device*) ;
 int FUNC_6 (struct ttm_mem_global*,int ,int,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct ttm_tt*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct ttm_dma_tt *VAR_10, struct device *VAR_11)
{
 struct ttm_tt *VAR_12 = &VAR_10->ttm;
 struct ttm_mem_global *VAR_13 = VAR_12->glob->mem_glob;
 struct dma_pool *VAR_14;
 enum pool_type VAR_15;
 unsigned VAR_16;
 gfp_t VAR_17;
 int VAR_18;

 if (VAR_12->state != VAR_9)
  return 0;

 VAR_15 = FUNC_7(VAR_12->page_flags, VAR_12->caching_state);
 if (VAR_12->page_flags & VAR_4)
  VAR_17 = VAR_3 | VAR_1;
 else
  VAR_17 = VAR_2;
 if (VAR_12->page_flags & VAR_6)
  VAR_17 |= VAR_7;

 VAR_14 = FUNC_2(VAR_11, VAR_15);
 if (!VAR_14) {
  VAR_14 = FUNC_4(VAR_11, VAR_17, VAR_15);
  if (FUNC_1(VAR_14)) {
   return -VAR_0;
  }
 }

 FUNC_0(&VAR_10->pages_list);
 for (VAR_16 = 0; VAR_16 < VAR_12->num_pages; ++VAR_16) {
  VAR_18 = FUNC_3(VAR_14, VAR_10, VAR_16);
  if (VAR_18 != 0) {
   FUNC_5(VAR_10, VAR_11);
   return -VAR_0;
  }

  VAR_18 = FUNC_6(VAR_13, VAR_12->pages[VAR_16],
      0, 0);
  if (FUNC_9(VAR_18 != 0)) {
   FUNC_5(VAR_10, VAR_11);
   return -VAR_0;
  }
 }

 if (FUNC_9(VAR_12->page_flags & VAR_5)) {
  VAR_18 = FUNC_8(VAR_12);
  if (FUNC_9(VAR_18 != 0)) {
   FUNC_5(VAR_10, VAR_11);
   return VAR_18;
  }
 }

 VAR_12->state = VAR_8;
 return 0;
}
