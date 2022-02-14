
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {void* address_hi; void* address_lo; void* data; } ;
struct intel_iommu {int register_lock; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct intel_iommu* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(int VAR_3, struct msi_msg *VAR_4)
{
 struct intel_iommu *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;

 FUNC_2(&VAR_5->register_lock, VAR_6);
 VAR_4->data = FUNC_1(VAR_5->reg + VAR_1);
 VAR_4->address_lo = FUNC_1(VAR_5->reg + VAR_0);
 VAR_4->address_hi = FUNC_1(VAR_5->reg + VAR_2);
 FUNC_3(&VAR_5->register_lock, VAR_6);
}
