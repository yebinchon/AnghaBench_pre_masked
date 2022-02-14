
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_ppgtt {int num_pd_entries; struct i915_hw_ppgtt* pt_pages; struct i915_hw_ppgtt* pt_dma_addr; TYPE_1__* dev; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_hw_ppgtt) ;
 int FUNC_1 (struct i915_hw_ppgtt*) ;
 int FUNC_2 (int ,struct i915_hw_ppgtt,int,int ) ;

__attribute__((used)) static void FUNC_3(struct i915_hw_ppgtt *VAR_1)
{
 int VAR_2;

 if (VAR_1->pt_dma_addr) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_pd_entries; VAR_2++)
   FUNC_2(VAR_1->dev->pdev,
           VAR_1->pt_dma_addr[VAR_2],
           4096, VAR_0);
 }

 FUNC_1(VAR_1->pt_dma_addr);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_pd_entries; VAR_2++)
  FUNC_0(VAR_1->pt_pages[VAR_2]);
 FUNC_1(VAR_1->pt_pages);
 FUNC_1(VAR_1);
}
