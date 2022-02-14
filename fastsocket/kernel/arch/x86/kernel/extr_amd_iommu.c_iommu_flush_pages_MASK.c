
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct amd_iommu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,size_t,int ) ;
 int FUNC_1 (struct amd_iommu*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct amd_iommu *VAR_3, u16 VAR_4,
  u64 VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;
 unsigned VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_2);

 VAR_5 &= VAR_1;

 if (VAR_8 > 1) {




  VAR_5 = VAR_0;
  VAR_7 = 1;
 }

 FUNC_1(VAR_3, VAR_5, VAR_4, 0, VAR_7);

 return 0;
}
