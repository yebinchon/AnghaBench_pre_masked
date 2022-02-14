
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_ha_struct {TYPE_1__* pcidev; } ;
struct asd_dma_tok {size_t size; int vaddr; int dma_handle; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 struct asd_dma_tok* FUNC_0 (int ) ;
 int FUNC_1 (struct asd_dma_tok*) ;
 int FUNC_2 (int *,size_t,int *,int ) ;

__attribute__((used)) static inline struct asd_dma_tok *FUNC_3(struct asd_ha_struct *
           VAR_0, size_t VAR_1,
           gfp_t VAR_2)
{
 struct asd_dma_tok *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  VAR_3->size = VAR_1;
  VAR_3->vaddr = FUNC_2(&VAR_0->pcidev->dev,
        VAR_3->size,
        &VAR_3->dma_handle,
        VAR_2);
  if (!VAR_3->vaddr) {
   FUNC_1(VAR_3);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
