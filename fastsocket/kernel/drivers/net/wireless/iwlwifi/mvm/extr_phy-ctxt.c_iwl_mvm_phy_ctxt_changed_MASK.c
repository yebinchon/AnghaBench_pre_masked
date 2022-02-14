
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_phy_ctxt {int channel; } ;
struct iwl_mvm {int mutex; } ;
struct cfg80211_chan_def {int chan; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct iwl_mvm *VAR_1, struct iwl_mvm_phy_ctxt *VAR_2,
        struct cfg80211_chan_def *VAR_3,
        u8 VAR_4, u8 VAR_5)
{
 FUNC_1(&VAR_1->mutex);

 VAR_2->channel = VAR_3->chan;
 return FUNC_0(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_0, 0);
}
