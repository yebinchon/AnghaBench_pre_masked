
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int dummy; } ;
struct ieee80211_sta {scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ auto_agg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct iwl_mvm*,char*,scalar_t__) ;
 int FUNC_2 (struct ieee80211_sta*,scalar_t__,int) ;
 int FUNC_3 (struct ieee80211_sta*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_4 (struct iwl_lq_sta*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_3,
          struct iwl_lq_sta *VAR_4, u8 VAR_5,
          struct ieee80211_sta *VAR_6)
{
 int VAR_7 = -VAR_0;
 u32 VAR_8;

 VAR_8 = FUNC_4(VAR_4, VAR_5);

 if ((VAR_2.auto_agg) || (VAR_8 > VAR_1)) {
  FUNC_0(VAR_3, "Starting Tx agg: STA: %pM tid: %d\n",
        VAR_6->addr, VAR_5);
  VAR_7 = FUNC_2(VAR_6, VAR_5, 5000);
  if (VAR_7 == -VAR_0) {





   FUNC_1(VAR_3, "Fail start Tx agg on tid: %d\n",
    VAR_5);
   FUNC_3(VAR_6, VAR_5);
  }
 } else {
  FUNC_0(VAR_3,
        "Aggregation not enabled for tid %d because load = %u\n",
        VAR_5, VAR_8);
 }
 return VAR_7;
}
