
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct wl12xx_vif {int role_id; } ;
struct TYPE_3__ {scalar_t__ rts_threshold; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_rts_threshold {int threshold; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_rts_threshold*) ;
 struct acx_rts_threshold* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_rts_threshold*,int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
        u32 VAR_7)
{
 struct acx_rts_threshold *VAR_8;
 int VAR_9;





 if (VAR_7 > VAR_4)
  VAR_7 = VAR_5->conf.rx.rts_threshold;

 FUNC_4(VAR_0, "acx rts threshold: %d", VAR_7);

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_8->role_id = VAR_6->role_id;
 VAR_8->threshold = FUNC_0((u16)VAR_7);

 VAR_9 = FUNC_3(VAR_5, VAR_1, VAR_8, sizeof(*VAR_8));
 if (VAR_9 < 0) {
  FUNC_5("failed to set rts threshold: %d", VAR_9);
  goto out;
 }

out:
 FUNC_1(VAR_8);
 return VAR_9;
}
