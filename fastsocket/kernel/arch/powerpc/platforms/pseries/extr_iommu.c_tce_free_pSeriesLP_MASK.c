
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_index; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct iommu_table *VAR_1, long VAR_2, long VAR_3)
{
 u64 VAR_4;

 while (VAR_3--) {
  VAR_4 = FUNC_1((u64)VAR_1->it_index, (u64)VAR_2 << 12, 0);

  if (VAR_4 && FUNC_3()) {
   FUNC_2("tce_free_pSeriesLP: plpar_tce_put failed. rc=%lld\n", VAR_4);
   FUNC_2("\tindex   = 0x%llx\n", (u64)VAR_1->it_index);
   FUNC_2("\ttcenum  = 0x%llx\n", (u64)VAR_2);
   FUNC_4(VAR_0, (unsigned long *)FUNC_0());
  }

  VAR_2++;
 }
}
