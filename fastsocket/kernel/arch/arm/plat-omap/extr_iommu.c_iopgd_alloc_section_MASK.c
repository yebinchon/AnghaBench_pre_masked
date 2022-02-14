
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;
 int* FUNC_1 (struct iommu*,int) ;

__attribute__((used)) static int FUNC_2(struct iommu *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 *VAR_6 = FUNC_1(VAR_2, VAR_3);

 *VAR_6 = (VAR_4 & VAR_1) | VAR_5 | VAR_0;
 FUNC_0(VAR_6, VAR_6);
 return 0;
}
