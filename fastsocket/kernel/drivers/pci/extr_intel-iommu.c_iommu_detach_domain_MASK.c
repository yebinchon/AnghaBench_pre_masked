
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int seq_id; int lock; struct dmar_domain** domains; int domain_ids; int cap; } ;
struct dmar_domain {int iommu_bmp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct dmar_domain *VAR_0,
    struct intel_iommu *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4;
 int VAR_5 = 0;

 FUNC_4(&VAR_1->lock, VAR_2);
 VAR_4 = FUNC_0(VAR_1->cap);
 VAR_3 = FUNC_2(VAR_1->domain_ids, VAR_4);
 for (; VAR_3 < VAR_4; ) {
  if (VAR_1->domains[VAR_3] == VAR_0) {
   VAR_5 = 1;
   break;
  }
  VAR_3 = FUNC_3(VAR_1->domain_ids,
        FUNC_0(VAR_1->cap), VAR_3+1);
 }

 if (VAR_5) {
  FUNC_1(VAR_3, VAR_1->domain_ids);
  FUNC_1(VAR_1->seq_id, VAR_0->iommu_bmp);
  VAR_1->domains[VAR_3] = ((void*)0);
 }
 FUNC_5(&VAR_1->lock, VAR_2);
}
