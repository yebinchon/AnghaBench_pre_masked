
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_21, u32 VAR_22)
{
 u32 VAR_23;
 if (VAR_22 & VAR_2) {

  VAR_23 = FUNC_1(VAR_21, VAR_20);
  FUNC_0("PGLUE hw attention 0x%x\n", VAR_23);
  if (VAR_23 & VAR_11)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_ADDRESS_ERROR\n");
  if (VAR_23 & VAR_13)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_INCORRECT_RCV_BEHAVIOR\n");
  if (VAR_23 & VAR_19)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_WAS_ERROR_ATTN\n");
  if (VAR_23 & VAR_17)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_VF_LENGTH_VIOLATION_ATTN\n");
  if (VAR_23 &
      VAR_16)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_VF_GRC_SPACE_VIOLATION_ATTN\n");
  if (VAR_23 &
      VAR_18)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_VF_MSIX_BAR_VIOLATION_ATTN\n");
  if (VAR_23 & VAR_14)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_TCPL_ERROR_ATTN\n");
  if (VAR_23 & VAR_15)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_TCPL_IN_TWO_RCBS_ATTN\n");
  if (VAR_23 & VAR_12)
   FUNC_0("PGLUE_B_PGLUE_B_INT_STS_REG_CSSNOOP_FIFO_OVERFLOW\n");
 }
 if (VAR_22 & VAR_0) {
  VAR_23 = FUNC_1(VAR_21, VAR_10);
  FUNC_0("ATC hw attention 0x%x\n", VAR_23);
  if (VAR_23 & VAR_4)
   FUNC_0("ATC_ATC_INT_STS_REG_ADDRESS_ERROR\n");
  if (VAR_23 & VAR_9)
   FUNC_0("ATC_ATC_INT_STS_REG_ATC_TCPL_TO_NOT_PEND\n");
  if (VAR_23 & VAR_5)
   FUNC_0("ATC_ATC_INT_STS_REG_ATC_GPA_MULTIPLE_HITS\n");
  if (VAR_23 & VAR_7)
   FUNC_0("ATC_ATC_INT_STS_REG_ATC_RCPL_TO_EMPTY_CNT\n");
  if (VAR_23 & VAR_8)
   FUNC_0("ATC_ATC_INT_STS_REG_ATC_TCPL_ERROR\n");
  if (VAR_23 & VAR_6)
   FUNC_0("ATC_ATC_INT_STS_REG_ATC_IREQ_LESS_THAN_STU\n");
 }

 if (VAR_22 & (VAR_3 |
      VAR_1)) {
  FUNC_0("FATAL parity attention set4 0x%x\n",
  (u32)(VAR_22 & (VAR_3 |
      VAR_1)));
 }
}
