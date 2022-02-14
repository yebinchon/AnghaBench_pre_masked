
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct iommu_table {scalar_t__ it_index; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct iommu_table *VAR_0, long VAR_1, long VAR_2)
{
 u64 VAR_3;

 while (VAR_2--) {
  VAR_3 = FUNC_0((u64)VAR_0->it_index, (u64)VAR_1, 0);
  if (VAR_3)
   FUNC_1("PCI_DMA: HvCallXm_setTce failed, Rc: 0x%llx\n",
     VAR_3);
  VAR_1++;
 }
}
