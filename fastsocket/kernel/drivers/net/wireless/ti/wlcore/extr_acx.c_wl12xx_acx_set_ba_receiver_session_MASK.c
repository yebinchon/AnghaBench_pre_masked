
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wl1271_acx_ba_receiver_setup {int hlid; int tid; int enable; int ssn; int win_size; } ;
struct TYPE_3__ {int rx_ba_win_size; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct wl1271_acx_ba_receiver_setup*) ;
 struct wl1271_acx_ba_receiver_setup* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct wl1271*,int ,struct wl1271_acx_ba_receiver_setup*,int,int ) ;

int FUNC_6(struct wl1271 *VAR_6, u8 VAR_7,
           u16 VAR_8, bool VAR_9, u8 VAR_10)
{
 struct wl1271_acx_ba_receiver_setup *VAR_11;
 int VAR_12;

 FUNC_3(VAR_2, "acx ba receiver session setting");

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_5);
 if (!VAR_11) {
  VAR_12 = -VAR_4;
  goto out;
 }

 VAR_11->hlid = VAR_10;
 VAR_11->tid = VAR_7;
 VAR_11->enable = VAR_9;
 VAR_11->win_size = VAR_6->conf.ht.rx_ba_win_size;
 VAR_11->ssn = VAR_8;

 VAR_12 = FUNC_5(VAR_6, VAR_0, VAR_11,
         sizeof(*VAR_11),
         FUNC_0(VAR_1));
 if (VAR_12 < 0) {
  FUNC_4("acx ba receiver session failed: %d", VAR_12);
  goto out;
 }


 if (VAR_12 == VAR_1) {
  FUNC_4("no fw rx ba on tid %d", VAR_7);
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_12 = 0;
out:
 FUNC_1(VAR_11);
 return VAR_12;
}
