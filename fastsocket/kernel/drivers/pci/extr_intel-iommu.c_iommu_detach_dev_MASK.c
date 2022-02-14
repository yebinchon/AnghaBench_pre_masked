
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* flush_iotlb ) (struct intel_iommu*,int ,int ,int ,int ) ;int (* flush_context ) (struct intel_iommu*,int ,int ,int ,int ) ;} ;
struct intel_iommu {TYPE_1__ flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_iommu*,int ,int ) ;
 int FUNC_1 (struct intel_iommu*,int ,int ,int ,int ) ;
 int FUNC_2 (struct intel_iommu*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_iommu *VAR_2, u8 VAR_3, u8 VAR_4)
{
 if (!VAR_2)
  return;

 FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_2->flush.flush_context(VAR_2, 0, 0, 0,
        VAR_0);
 VAR_2->flush.flush_iotlb(VAR_2, 0, 0, 0, VAR_1);
}
