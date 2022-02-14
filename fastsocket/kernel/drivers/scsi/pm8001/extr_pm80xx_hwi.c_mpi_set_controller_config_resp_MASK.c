
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_ctrl_cfg_resp {int err_qlfr_pgcd; int status; } ;
struct pm8001_hba_info {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_0,
   void *VAR_1)
{
 struct set_ctrl_cfg_resp *VAR_2 =
   (struct set_ctrl_cfg_resp *)(VAR_1 + 4);
 u32 VAR_3 = FUNC_1(VAR_2->status);
 u32 VAR_4 = FUNC_1(VAR_2->err_qlfr_pgcd);

 FUNC_0(VAR_0, FUNC_2(
   "SET CONTROLLER RESP: status 0x%x qlfr_pgcd 0x%x\n",
   VAR_3, VAR_4));

 return 0;
}
