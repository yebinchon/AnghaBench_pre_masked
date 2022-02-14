
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int gcmd; size_t seq_id; struct dmar_domain** domain_ids; struct dmar_domain** domains; scalar_t__ irq; int cap; } ;
struct dmar_domain {scalar_t__ iommu_count; int flags; int iommu_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct dmar_domain**) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dmar_domain*) ;
 int FUNC_4 (struct dmar_domain**,int) ;
 int FUNC_5 (struct dmar_domain**,int,int) ;
 int FUNC_6 (struct intel_iommu*) ;
 int FUNC_7 (scalar_t__,struct intel_iommu*) ;
 struct dmar_domain** VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct intel_iommu*) ;
 int FUNC_9 (struct dmar_domain**) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct dmar_domain*) ;

void FUNC_14(struct intel_iommu *VAR_4)
{
 struct dmar_domain *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 if ((VAR_4->domains) && (VAR_4->domain_ids)) {
  VAR_6 = FUNC_4(VAR_4->domain_ids, FUNC_0(VAR_4->cap));
  for (; VAR_6 < FUNC_0(VAR_4->cap); ) {
   VAR_5 = VAR_4->domains[VAR_6];
   FUNC_1(VAR_6, VAR_4->domain_ids);

   FUNC_11(&VAR_5->iommu_lock, VAR_7);
   if (--VAR_5->iommu_count == 0) {
    if (VAR_5->flags & VAR_1)
     FUNC_13(VAR_5);
    else
     FUNC_3(VAR_5);
   }
   FUNC_12(&VAR_5->iommu_lock, VAR_7);

   VAR_6 = FUNC_5(VAR_4->domain_ids,
    FUNC_0(VAR_4->cap), VAR_6+1);
  }
 }

 if (VAR_4->gcmd & VAR_0)
  FUNC_8(VAR_4);

 if (VAR_4->irq) {
  FUNC_10(VAR_4->irq, ((void*)0));

  FUNC_7(VAR_4->irq, VAR_4);
  FUNC_2(VAR_4->irq);
 }

 FUNC_9(VAR_4->domains);
 FUNC_9(VAR_4->domain_ids);

 VAR_2[VAR_4->seq_id] = ((void*)0);


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_2[VAR_6])
   break;
 }

 if (VAR_6 == VAR_3)
  FUNC_9(VAR_2);


 FUNC_6(VAR_4);
}
