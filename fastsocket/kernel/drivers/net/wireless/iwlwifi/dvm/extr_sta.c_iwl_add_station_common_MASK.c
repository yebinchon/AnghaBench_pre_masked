
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int sta_lock; TYPE_2__* stations; } ;
struct iwl_addsta_cmd {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {size_t const* addr; } ;
struct TYPE_6__ {TYPE_1__ sta; } ;
struct TYPE_5__ {int used; TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,size_t,size_t const*) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t) ;
 int FUNC_2 (struct iwl_priv*,char*,size_t const*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*,size_t const*,int,struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;
 int FUNC_5 (struct iwl_addsta_cmd*,TYPE_3__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_priv *VAR_7, struct iwl_rxon_context *VAR_8,
      const u8 *VAR_9, bool VAR_10,
      struct ieee80211_sta *VAR_11, u8 *VAR_12)
{
 int VAR_13 = 0;
 u8 VAR_14;
 struct iwl_addsta_cmd VAR_15;

 *VAR_12 = 0;
 FUNC_6(&VAR_7->sta_lock);
 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_14 == VAR_3) {
  FUNC_2(VAR_7, "Unable to prepare station %pM for addition\n",
   VAR_9);
  FUNC_7(&VAR_7->sta_lock);
  return -VAR_2;
 }






 if (VAR_7->stations[VAR_14].used & VAR_6) {
  FUNC_1(VAR_7, "STA %d already in process of being "
          "added.\n", VAR_14);
  FUNC_7(&VAR_7->sta_lock);
  return -VAR_1;
 }

 if ((VAR_7->stations[VAR_14].used & VAR_4) &&
     (VAR_7->stations[VAR_14].used & VAR_5)) {
  FUNC_0(VAR_7, "STA %d (%pM) already added, not "
    "adding again.\n", VAR_14, VAR_9);
  FUNC_7(&VAR_7->sta_lock);
  return -VAR_1;
 }

 VAR_7->stations[VAR_14].used |= VAR_6;
 FUNC_5(&VAR_15, &VAR_7->stations[VAR_14].sta,
        sizeof(struct iwl_addsta_cmd));
 FUNC_7(&VAR_7->sta_lock);


 VAR_13 = FUNC_4(VAR_7, &VAR_15, VAR_0);
 if (VAR_13) {
  FUNC_6(&VAR_7->sta_lock);
  FUNC_2(VAR_7, "Adding station %pM failed.\n",
   VAR_7->stations[VAR_14].sta.sta.addr);
  VAR_7->stations[VAR_14].used &= ~VAR_4;
  VAR_7->stations[VAR_14].used &= ~VAR_6;
  FUNC_7(&VAR_7->sta_lock);
 }
 *VAR_12 = VAR_14;
 return VAR_13;
}
