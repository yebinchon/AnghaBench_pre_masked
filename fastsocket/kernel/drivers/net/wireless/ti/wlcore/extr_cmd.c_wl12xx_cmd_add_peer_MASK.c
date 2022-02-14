
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct wl12xx_vif {size_t band; } ;
struct wl12xx_cmd_add_peer {size_t hlid; int wmm; int supported_rates; int * psd_type; int session_id; int sp_len; int aid; int bss_index; int addr; } ;
struct wl1271 {int * session_ids; } ;
struct TYPE_3__ {int* rx_mask; } ;
struct TYPE_4__ {TYPE_1__ mcs; scalar_t__ ht_supported; } ;
struct ieee80211_sta {int uapsd_queues; int* supp_rates; TYPE_2__ ht_cap; scalar_t__ wme; int max_sp; int aid; int addr; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wl12xx_cmd_add_peer*) ;
 struct wl12xx_cmd_add_peer* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct wl1271*,int ,struct wl12xx_cmd_add_peer*,int,int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wl1271*,int,size_t) ;

int FUNC_9(struct wl1271 *VAR_11, struct wl12xx_vif *VAR_12,
   struct ieee80211_sta *VAR_13, u8 VAR_14)
{
 struct wl12xx_cmd_add_peer *VAR_15;
 int VAR_16, VAR_17;
 u32 VAR_18;

 FUNC_6(VAR_1, "cmd add peer %d", (int)VAR_14);

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_4);
 if (!VAR_15) {
  VAR_17 = -VAR_2;
  goto out;
 }

 FUNC_4(VAR_15->addr, VAR_13->addr, VAR_3);
 VAR_15->bss_index = VAR_8;
 VAR_15->aid = VAR_13->aid;
 VAR_15->hlid = VAR_14;
 VAR_15->sp_len = VAR_13->max_sp;
 VAR_15->wmm = VAR_13->wme ? 1 : 0;
 VAR_15->session_id = VAR_11->session_ids[VAR_14];

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
  if (VAR_13->wme && (VAR_13->uapsd_queues & FUNC_0(VAR_16)))
   VAR_15->psd_type[VAR_7-1-VAR_16] =
     VAR_10;
  else
   VAR_15->psd_type[VAR_7-1-VAR_16] =
     VAR_9;


 VAR_18 = VAR_13->supp_rates[VAR_12->band];
 if (VAR_13->ht_cap.ht_supported)
  VAR_18 |=
   (VAR_13->ht_cap.mcs.rx_mask[0] << VAR_5) |
   (VAR_13->ht_cap.mcs.rx_mask[1] << VAR_6);

 VAR_15->supported_rates =
  FUNC_1(FUNC_8(VAR_11, VAR_18,
       VAR_12->band));

 FUNC_6(VAR_1, "new peer rates=0x%x queues=0x%x",
       VAR_15->supported_rates, VAR_13->uapsd_queues);

 VAR_17 = FUNC_5(VAR_11, VAR_0, VAR_15, sizeof(*VAR_15), 0);
 if (VAR_17 < 0) {
  FUNC_7("failed to initiate cmd add peer");
  goto out_free;
 }

out_free:
 FUNC_2(VAR_15);

out:
 return VAR_17;
}
