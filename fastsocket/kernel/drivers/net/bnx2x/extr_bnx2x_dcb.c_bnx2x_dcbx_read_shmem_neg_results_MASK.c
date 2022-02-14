
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lldp_local_mib {int error; int features; int member_0; } ;
struct bnx2x {int dcbx_error; int dcbx_local_feat; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct bnx2x*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct bnx2x*,scalar_t__*,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_5)
{
 struct lldp_local_mib VAR_6 = {0};
 u32 VAR_7 = FUNC_2(VAR_5, VAR_7);
 int VAR_8;

 FUNC_1(VAR_0, "dcbx_neg_res_offset 0x%x\n", VAR_7);

 if (VAR_3 == VAR_7) {
  FUNC_0("FW doesn't support dcbx_neg_res_offset\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_3(VAR_5, (u32 *)&VAR_6, VAR_7,
     VAR_1);

 if (VAR_8) {
  FUNC_0("Failed to read local mib from FW\n");
  return VAR_8;
 }


 VAR_5->dcbx_local_feat = VAR_6.features;
 VAR_5->dcbx_error = VAR_6.error;
 return 0;
}
