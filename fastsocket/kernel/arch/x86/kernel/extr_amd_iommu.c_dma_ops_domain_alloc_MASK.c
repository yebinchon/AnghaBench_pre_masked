
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; void* pt_root; struct dma_ops_domain* priv; int flags; int mode; int lock; } ;
struct dma_ops_domain {int need_flush; int target_dev; scalar_t__ next_address; TYPE_2__** aperture; TYPE_1__ domain; } ;
struct amd_iommu {int dummy; } ;
struct TYPE_4__ {int* bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct amd_iommu*,struct dma_ops_domain*,int,int ) ;
 int FUNC_1 (struct dma_ops_domain*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 struct dma_ops_domain* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct dma_ops_domain *FUNC_6(struct amd_iommu *VAR_3)
{
 struct dma_ops_domain *VAR_4;

 VAR_4 = FUNC_4(sizeof(struct dma_ops_domain), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5(&VAR_4->domain.lock);

 VAR_4->domain.id = FUNC_2();
 if (VAR_4->domain.id == 0)
  goto free_dma_dom;
 VAR_4->domain.mode = VAR_1;
 VAR_4->domain.pt_root = (void *)FUNC_3(VAR_0);
 VAR_4->domain.flags = VAR_2;
 VAR_4->domain.priv = VAR_4;
 if (!VAR_4->domain.pt_root)
  goto free_dma_dom;

 VAR_4->need_flush = 0;
 VAR_4->target_dev = 0xffff;

 if (FUNC_0(VAR_3, VAR_4, 1, VAR_0))
  goto free_dma_dom;





 VAR_4->aperture[0]->bitmap[0] = 1;
 VAR_4->next_address = 0;


 return VAR_4;

free_dma_dom:
 FUNC_1(VAR_4);

 return ((void*)0);
}
