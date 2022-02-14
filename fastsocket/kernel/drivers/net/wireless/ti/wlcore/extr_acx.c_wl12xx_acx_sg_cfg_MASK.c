
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conf_sg_settings {int * params; } ;
struct TYPE_2__ {struct conf_sg_settings sg; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct acx_bt_wlan_coex_param {int param_idx; int * params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_bt_wlan_coex_param*) ;
 struct acx_bt_wlan_coex_param* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_bt_wlan_coex_param*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_6)
{
 struct acx_bt_wlan_coex_param *VAR_7;
 struct conf_sg_settings *VAR_8 = &VAR_6->conf.sg;
 int VAR_9, VAR_10;

 FUNC_4(VAR_3, "acx sg cfg");

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_5);
 if (!VAR_7) {
  VAR_10 = -VAR_4;
  goto out;
 }


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_7->params[VAR_9] = FUNC_0(VAR_8->params[VAR_9]);
 VAR_7->param_idx = VAR_1;

 VAR_10 = FUNC_3(VAR_6, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_10 < 0) {
  FUNC_5("failed to set sg config: %d", VAR_10);
  goto out;
 }

out:
 FUNC_1(VAR_7);
 return VAR_10;
}
