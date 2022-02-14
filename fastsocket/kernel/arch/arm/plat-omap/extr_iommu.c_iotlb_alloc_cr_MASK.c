
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iotlb_entry {int dummy; } ;
struct iommu {int dummy; } ;
struct cr_regs {int dummy; } ;
struct TYPE_2__ {struct cr_regs* (* alloc_cr ) (struct iommu*,struct iotlb_entry*) ;} ;


 TYPE_1__* VAR_0 ;
 struct cr_regs* FUNC_0 (struct iommu*,struct iotlb_entry*) ;

__attribute__((used)) static inline struct cr_regs *FUNC_1(struct iommu *VAR_1,
          struct iotlb_entry *VAR_2)
{
 if (!VAR_2)
  return ((void*)0);

 return VAR_0->alloc_cr(VAR_1, VAR_2);
}
