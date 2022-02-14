
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct unity_map_entry {size_t devid_start; size_t devid_end; } ;
struct amd_iommu {int dummy; } ;


 size_t* VAR_0 ;
 struct amd_iommu** VAR_1 ;

__attribute__((used)) static int FUNC_0(struct amd_iommu *VAR_2,
          struct unity_map_entry *VAR_3)
{
 u16 VAR_4, VAR_5;

 for (VAR_5 = VAR_3->devid_start; VAR_5 <= VAR_3->devid_end; ++VAR_5) {
  VAR_4 = VAR_0[VAR_5];
  if (VAR_1[VAR_4] == VAR_2)
   return 1;
 }

 return 0;
}
