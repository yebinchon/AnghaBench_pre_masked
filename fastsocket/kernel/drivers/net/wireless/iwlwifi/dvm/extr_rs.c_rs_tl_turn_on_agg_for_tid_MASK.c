
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct iwl_priv {scalar_t__ bt_traffic_load; } ;
struct iwl_lq_sta {int dummy; } ;
struct ieee80211_sta {scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ auto_agg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,scalar_t__) ;
 int FUNC_1 (struct iwl_priv*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct iwl_priv*,char*,scalar_t__) ;
 int FUNC_3 (struct ieee80211_sta*,scalar_t__,int) ;
 int FUNC_4 (struct ieee80211_sta*,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_5 (struct iwl_lq_sta*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_4,
          struct iwl_lq_sta *VAR_5, u8 VAR_6,
          struct ieee80211_sta *VAR_7)
{
 int VAR_8 = -VAR_0;
 u32 VAR_9;





 if (VAR_4->bt_traffic_load >= VAR_2) {
  FUNC_0(VAR_4,
          "BT traffic (%d), no aggregation allowed\n",
          VAR_4->bt_traffic_load);
  return VAR_8;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_6);

 if ((VAR_3.auto_agg) || (VAR_9 > VAR_1)) {
  FUNC_1(VAR_4, "Starting Tx agg: STA: %pM tid: %d\n",
    VAR_7->addr, VAR_6);
  VAR_8 = FUNC_3(VAR_7, VAR_6, 5000);
  if (VAR_8 == -VAR_0) {





   FUNC_2(VAR_4, "Fail start Tx agg on tid: %d\n",
    VAR_6);
   FUNC_4(VAR_7, VAR_6);
  }
 } else {
  FUNC_1(VAR_4, "Aggregation not enabled for tid %d "
   "because load = %u\n", VAR_6, VAR_9);
 }
 return VAR_8;
}
