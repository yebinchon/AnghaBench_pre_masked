
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {unsigned int nents; struct scatterlist* sgl; } ;
struct scatterlist {int dummy; } ;
struct i915_hw_ppgtt {int dev; int * pt_pages; } ;
typedef int gtt_pte_t ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
typedef scalar_t__ dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 unsigned int FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_6(struct i915_hw_ppgtt *VAR_3,
          struct sg_table *VAR_4,
          unsigned VAR_5,
          enum i915_cache_level VAR_6)
{
 gtt_pte_t *VAR_7;
 unsigned VAR_8 = VAR_5 / VAR_0;
 unsigned VAR_9 = VAR_5 % VAR_0;
 unsigned VAR_10, VAR_11, VAR_12, VAR_13;
 dma_addr_t VAR_14;
 struct scatterlist *VAR_15;


 VAR_15 = VAR_4->sgl;
 VAR_10 = 0;
 VAR_13 = FUNC_4(VAR_15) >> VAR_2;
 VAR_12 = 0;

 while (VAR_10 < VAR_4->nents) {
  VAR_7 = FUNC_1(VAR_3->pt_pages[VAR_8], VAR_1);

  for (VAR_11 = VAR_9; VAR_11 < VAR_0; VAR_11++) {
   VAR_14 = FUNC_3(VAR_15) + (VAR_12 << VAR_2);
   VAR_7[VAR_11] = FUNC_0(VAR_3->dev, VAR_14,
            VAR_6);


   if (++VAR_12 == VAR_13) {
    if (++VAR_10 == VAR_4->nents)
     break;

    VAR_15 = FUNC_5(VAR_15);
    VAR_13 = FUNC_4(VAR_15) >> VAR_2;
    VAR_12 = 0;
   }
  }

  FUNC_2(VAR_7, VAR_1);

  VAR_9 = 0;
  VAR_8++;
 }
}
