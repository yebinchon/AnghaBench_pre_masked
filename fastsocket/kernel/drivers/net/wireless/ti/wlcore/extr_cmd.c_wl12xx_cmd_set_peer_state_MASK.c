
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {scalar_t__ bss_type; int wmm_enabled; } ;
struct wl12xx_cmd_set_peer_state {int wmm; int state; int hlid; } ;
struct wl1271 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wl12xx_cmd_set_peer_state*) ;
 struct wl12xx_cmd_set_peer_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl12xx_cmd_set_peer_state*,int,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_6, struct wl12xx_vif *VAR_7,
         u8 VAR_8)
{
 struct wl12xx_cmd_set_peer_state *VAR_9;
 int VAR_10 = 0;

 FUNC_3(VAR_2, "cmd set peer state (hlid=%d)", VAR_8);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_9->hlid = VAR_8;
 VAR_9->state = VAR_5;


 if (VAR_7->bss_type == VAR_0)
  VAR_9->wmm = VAR_7->wmm_enabled;

 VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_9, sizeof(*VAR_9), 0);
 if (VAR_10 < 0) {
  FUNC_4("failed to send set peer state command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_9);

out:
 return VAR_10;
}
