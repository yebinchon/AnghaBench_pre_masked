
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_keep_alive_config {int trigger; void* tpl_validation; void* index; int period; int role_id; } ;
struct TYPE_3__ {int keep_alive_interval; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_keep_alive_config*) ;
 struct wl1271_acx_keep_alive_config* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_keep_alive_config*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
     u8 VAR_7, u8 VAR_8)
{
 struct wl1271_acx_keep_alive_config *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 FUNC_4(VAR_2, "acx keep alive config");

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_9->role_id = VAR_6->role_id;
 VAR_9->period = FUNC_0(VAR_5->conf.conn.keep_alive_interval);
 VAR_9->index = VAR_7;
 VAR_9->tpl_validation = VAR_8;
 VAR_9->trigger = VAR_0;

 VAR_10 = FUNC_3(VAR_5, VAR_1,
       VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_5("acx keep alive config failed: %d", VAR_10);
  goto out;
 }

out:
 FUNC_1(VAR_9);
 return VAR_10;
}
