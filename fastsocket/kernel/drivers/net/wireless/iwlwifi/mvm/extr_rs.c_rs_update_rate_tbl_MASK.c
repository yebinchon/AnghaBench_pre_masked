
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int lq; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,int *,int ,int) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_lq_sta*,int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_1,
          struct iwl_lq_sta *VAR_2,
          struct iwl_scale_tbl_info *VAR_3,
          int VAR_4, u8 VAR_5)
{
 u32 VAR_6;


 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_1, VAR_2, VAR_6);
 FUNC_0(VAR_1, &VAR_2->lq, VAR_0, 0);
}
