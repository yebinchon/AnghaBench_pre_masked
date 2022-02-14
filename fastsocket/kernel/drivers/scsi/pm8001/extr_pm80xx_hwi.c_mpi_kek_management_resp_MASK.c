
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;
struct kek_mgmt_resp {int err_qlfr; int kidx_new_curr_ksop; int status; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_0,
   void *VAR_1)
{
 struct kek_mgmt_resp *VAR_2 = (struct kek_mgmt_resp *)(VAR_1 + 4);

 u32 VAR_3 = FUNC_1(VAR_2->status);
 u32 VAR_4 = FUNC_1(VAR_2->kidx_new_curr_ksop);
 u32 VAR_5 = FUNC_1(VAR_2->err_qlfr);

 FUNC_0(VAR_0, FUNC_2(
  "KEK MGMT RESP. Status 0x%x idx_ksop 0x%x err_qlfr 0x%x\n",
  VAR_3, VAR_4, VAR_5));

 return 0;
}
