
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct TYPE_4__ {scalar_t__ bcn_filt_mode; } ;
struct TYPE_3__ {TYPE_2__ conn; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct acx_beacon_filter_option {int enable; scalar_t__ max_num_beacons; int role_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_beacon_filter_option*) ;
 struct acx_beacon_filter_option* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_beacon_filter_option*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
     bool VAR_7)
{
 struct acx_beacon_filter_option *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_3(VAR_2, "acx beacon filter opt");

 if (VAR_7 &&
     VAR_5->conf.conn.bcn_filt_mode == VAR_1)
  goto out;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_4);
 if (!VAR_8) {
  VAR_9 = -VAR_3;
  goto out;
 }

 VAR_8->role_id = VAR_6->role_id;
 VAR_8->enable = VAR_7;





 VAR_8->max_num_beacons = 0;

 VAR_9 = FUNC_2(VAR_5, VAR_0,
       VAR_8, sizeof(*VAR_8));
 if (VAR_9 < 0) {
  FUNC_4("failed to set beacon filter opt: %d", VAR_9);
  goto out;
 }

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
