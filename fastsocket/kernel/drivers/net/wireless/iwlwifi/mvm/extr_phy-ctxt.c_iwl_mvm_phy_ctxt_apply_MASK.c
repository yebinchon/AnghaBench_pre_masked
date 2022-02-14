
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_phy_context_cmd {int dummy; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_phy_context_cmd*,struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_2 (struct iwl_mvm_phy_ctxt*,struct iwl_phy_context_cmd*,int ,int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_phy_context_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_2,
      struct iwl_mvm_phy_ctxt *VAR_3,
      struct cfg80211_chan_def *VAR_4,
      u8 VAR_5, u8 VAR_6,
      u32 VAR_7, u32 VAR_8)
{
 struct iwl_phy_context_cmd VAR_9;
 int VAR_10;


 FUNC_2(VAR_3, &VAR_9, VAR_7, VAR_8);


 FUNC_1(VAR_2, &VAR_9, VAR_4,
      VAR_5, VAR_6);

 VAR_10 = FUNC_3(VAR_2, VAR_1, VAR_0,
       sizeof(struct iwl_phy_context_cmd),
       &VAR_9);
 if (VAR_10)
  FUNC_0(VAR_2, "PHY ctxt cmd error. ret=%d\n", VAR_10);
 return VAR_10;
}
