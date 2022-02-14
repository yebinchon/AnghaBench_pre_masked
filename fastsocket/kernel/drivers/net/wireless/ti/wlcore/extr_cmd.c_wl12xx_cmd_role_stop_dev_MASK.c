
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ dev_hlid; int dev_role_id; } ;
struct wl12xx_cmd_role_stop {int reason; int disc_type; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wl12xx_cmd_role_stop*) ;
 struct wl12xx_cmd_role_stop* FUNC_3 (int,int ) ;
 int FUNC_4 (struct wl1271*,int ,struct wl12xx_cmd_role_stop*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(struct wl1271 *VAR_8,
        struct wl12xx_vif *VAR_9)
{
 struct wl12xx_cmd_role_stop *VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_9->dev_hlid == VAR_6))
  return -VAR_3;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_5);
 if (!VAR_10) {
  VAR_11 = -VAR_4;
  goto out;
 }

 FUNC_5(VAR_1, "cmd role stop dev");

 VAR_10->role_id = VAR_9->dev_role_id;
 VAR_10->disc_type = VAR_2;
 VAR_10->reason = FUNC_1(VAR_7);

 VAR_11 = FUNC_4(VAR_8, VAR_0, VAR_10, sizeof(*VAR_10), 0);
 if (VAR_11 < 0) {
  FUNC_6("failed to initiate cmd role stop");
  goto out_free;
 }

 FUNC_7(VAR_8, VAR_9, &VAR_9->dev_hlid);

out_free:
 FUNC_2(VAR_10);

out:
 return VAR_11;
}
