
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ sg; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_bt_wlan_coex {int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_bt_wlan_coex*) ;
 struct acx_bt_wlan_coex* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_bt_wlan_coex*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_5, bool VAR_6)
{
 struct acx_bt_wlan_coex *VAR_7;
 int VAR_8;

 FUNC_3(VAR_2, "acx sg enable");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  VAR_8 = -VAR_3;
  goto out;
 }

 if (VAR_6)
  VAR_7->enable = VAR_5->conf.sg.state;
 else
  VAR_7->enable = VAR_1;

 VAR_8 = FUNC_2(VAR_5, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("failed to set softgemini enable: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
