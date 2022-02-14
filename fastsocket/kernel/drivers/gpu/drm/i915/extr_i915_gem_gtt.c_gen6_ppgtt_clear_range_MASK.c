
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_hw_ppgtt {int * pt_pages; int scratch_page_dma_addr; int dev; } ;
typedef int gtt_pte_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct i915_hw_ppgtt *VAR_3,
       unsigned VAR_4,
       unsigned VAR_5)
{
 gtt_pte_t *VAR_6;
 gtt_pte_t VAR_7;
 unsigned VAR_8 = VAR_4 / VAR_1;
 unsigned VAR_9 = VAR_4 % VAR_1;
 unsigned VAR_10, VAR_11;

 VAR_7 = FUNC_0(VAR_3->dev,
          VAR_3->scratch_page_dma_addr,
          VAR_0);

 while (VAR_5) {
  VAR_10 = VAR_9 + VAR_5;
  if (VAR_10 > VAR_1)
   VAR_10 = VAR_1;

  VAR_6 = FUNC_1(VAR_3->pt_pages[VAR_8], VAR_2);

  for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++)
   VAR_6[VAR_11] = VAR_7;

  FUNC_2(VAR_6, VAR_2);

  VAR_5 -= VAR_10 - VAR_9;
  VAR_9 = 0;
  VAR_8++;
 }
}
