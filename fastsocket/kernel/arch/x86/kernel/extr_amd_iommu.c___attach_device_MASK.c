
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct protection_domain {int dev_cnt; int lock; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (int ,struct protection_domain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct amd_iommu *VAR_0,
       struct protection_domain *VAR_1,
       u16 VAR_2)
{

 FUNC_1(&VAR_1->lock);


 FUNC_0(VAR_2, VAR_1);

 VAR_1->dev_cnt += 1;


 FUNC_2(&VAR_1->lock);
}
