
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int register_lock; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct intel_iommu* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(unsigned int VAR_2)
{
 unsigned long VAR_3;
 struct intel_iommu *VAR_4 = FUNC_0(VAR_2);


 FUNC_2(&VAR_4->register_lock, VAR_3);
 FUNC_4(VAR_1, VAR_4->reg + VAR_0);

 FUNC_1(VAR_4->reg + VAR_0);
 FUNC_3(&VAR_4->register_lock, VAR_3);
}
