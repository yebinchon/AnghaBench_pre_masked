
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_ba_initiator_policy {int inactivity_timeout; int win_size; int tid_bitmap; int role_id; } ;
struct TYPE_3__ {int inactivity_timeout; int tx_ba_win_size; int tx_ba_tid_bitmap; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271_acx_ba_initiator_policy*) ;
 struct wl1271_acx_ba_initiator_policy* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_acx_ba_initiator_policy*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_4,
           struct wl12xx_vif *VAR_5)
{
 struct wl1271_acx_ba_initiator_policy *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "acx ba initiator policy");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }


 VAR_6->role_id = VAR_5->role_id;
 VAR_6->tid_bitmap = VAR_4->conf.ht.tx_ba_tid_bitmap;
 VAR_6->win_size = VAR_4->conf.ht.tx_ba_win_size;
 VAR_6->inactivity_timeout = VAR_4->conf.ht.inactivity_timeout;

 VAR_7 = FUNC_2(VAR_4,
       VAR_0,
       VAR_6,
       sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("acx ba initiator policy failed: %d", VAR_7);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
