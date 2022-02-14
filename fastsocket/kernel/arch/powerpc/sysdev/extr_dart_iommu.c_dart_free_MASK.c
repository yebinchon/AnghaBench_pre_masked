
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {scalar_t__ it_base; } ;


 int FUNC_0 (char*,long,long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct iommu_table *VAR_1, long VAR_2, long VAR_3)
{
 unsigned int *VAR_4;






 FUNC_0("dart: free at: %lx, %lx\n", VAR_2, VAR_3);

 VAR_4 = ((unsigned int *)VAR_1->it_base) + VAR_2;

 while (VAR_3--)
  *(VAR_4++) = VAR_0;
}
