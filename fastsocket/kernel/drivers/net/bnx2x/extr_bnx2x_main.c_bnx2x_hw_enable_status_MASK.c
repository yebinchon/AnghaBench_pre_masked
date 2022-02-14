
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_1);
 FUNC_0(VAR_0, "CFC_REG_WEAK_ENABLE_PF is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_5);
 FUNC_0(VAR_0, "PBF_REG_DISABLE_PF is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_4);
 FUNC_0(VAR_0, "IGU_REG_PCI_PF_MSI_EN is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_2);
 FUNC_0(VAR_0, "IGU_REG_PCI_PF_MSIX_EN is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_3);
 FUNC_0(VAR_0, "IGU_REG_PCI_PF_MSIX_FUNC_MASK is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_8);
 FUNC_0(VAR_0, "PGLUE_B_REG_SHADOW_BME_PF_7_0_CLR is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_6);
 FUNC_0(VAR_0, "PGLUE_B_REG_FLR_REQUEST_PF_7_0_CLR is 0x%x\n", VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_7);
 FUNC_0(VAR_0, "PGLUE_B_REG_INTERNAL_PFID_ENABLE_MASTER is 0x%x\n",
    VAR_10);
}
