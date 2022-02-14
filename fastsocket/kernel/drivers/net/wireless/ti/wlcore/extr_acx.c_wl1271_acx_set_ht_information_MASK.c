
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_ht_information {int gf_protection; scalar_t__ dual_cts_protection; scalar_t__ ht_tx_burst_limit; scalar_t__ rifs_mode; scalar_t__ ht_protection; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wl1271_acx_ht_information*) ;
 struct wl1271_acx_ht_information* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_acx_ht_information*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_6,
       struct wl12xx_vif *VAR_7,
       u16 VAR_8)
{
 struct wl1271_acx_ht_information *VAR_9;
 int VAR_10 = 0;

 FUNC_3(VAR_1, "acx ht information setting");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9->role_id = VAR_7->role_id;
 VAR_9->ht_protection =
  (u8)(VAR_8 & VAR_5);
 VAR_9->rifs_mode = 0;
 VAR_9->gf_protection =
  !!(VAR_8 & VAR_4);
 VAR_9->ht_tx_burst_limit = 0;
 VAR_9->dual_cts_protection = 0;

 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_9, sizeof(*VAR_9));

 if (VAR_10 < 0) {
  FUNC_4("acx ht information setting failed: %d", VAR_10);
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
