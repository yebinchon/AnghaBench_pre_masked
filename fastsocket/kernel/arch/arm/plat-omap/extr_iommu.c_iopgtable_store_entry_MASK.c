
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iotlb_entry {int da; } ;
struct iommu {int dummy; } ;


 int FUNC_0 (struct iommu*,int ) ;
 int FUNC_1 (struct iommu*,struct iotlb_entry*) ;
 int FUNC_2 (struct iommu*,struct iotlb_entry*) ;

int FUNC_3(struct iommu *VAR_0, struct iotlb_entry *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, VAR_1->da);
 VAR_2 = FUNC_1(VAR_0, VAR_1);




 return VAR_2;
}
