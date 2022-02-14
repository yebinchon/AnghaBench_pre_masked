
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_iommu {int reset_in_progress; } ;


 int FUNC_0 (struct amd_iommu*) ;
 int FUNC_1 (struct amd_iommu*) ;
 int FUNC_2 (struct amd_iommu*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct amd_iommu *VAR_0)
{
 FUNC_4("AMD-Vi: Resetting IOMMU command buffer\n");

 if (VAR_0->reset_in_progress)
  FUNC_3("AMD-Vi: ILLEGAL_COMMAND_ERROR while resetting command buffer\n");

 VAR_0->reset_in_progress = 1;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 VAR_0->reset_in_progress = 0;
}
