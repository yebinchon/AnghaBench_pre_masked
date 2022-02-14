
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct protection_domain {scalar_t__ dev_cnt; int id; int lock; } ;
struct amd_iommu {int dummy; } ;
struct TYPE_2__ {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_iommu*,struct protection_domain*,size_t) ;
 int FUNC_1 (size_t) ;
 TYPE_1__* VAR_2 ;
 int ** VAR_3 ;
 struct amd_iommu** VAR_4 ;
 int FUNC_2 (struct amd_iommu*) ;
 int FUNC_3 (struct amd_iommu*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct amd_iommu*,size_t) ;
 struct protection_domain* VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct protection_domain *VAR_7, u16 VAR_8)
{
 struct amd_iommu *VAR_9 = VAR_4[VAR_8];


 FUNC_5(&VAR_7->lock);


 VAR_3[VAR_8] = ((void*)0);


 VAR_2[VAR_8].data[0] = VAR_0 | VAR_1;
 VAR_2[VAR_8].data[1] = 0;
 VAR_2[VAR_8].data[2] = 0;

 FUNC_1(VAR_8);


 VAR_7->dev_cnt -= 1;


 FUNC_6(&VAR_7->lock);






 if (VAR_5 && VAR_7 != VAR_6)
  FUNC_0(VAR_9, VAR_6, VAR_8);

 FUNC_4(VAR_9, VAR_8);
 if (VAR_7->dev_cnt == 0)
  FUNC_3(VAR_9, VAR_7->id);
 FUNC_2(VAR_9);
}
