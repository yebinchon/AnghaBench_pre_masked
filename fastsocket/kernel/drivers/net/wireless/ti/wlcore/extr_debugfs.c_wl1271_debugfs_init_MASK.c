
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fw_stats_update; int fw_stats; int fw_stats_len; } ;
struct wl1271 {TYPE_1__ stats; TYPE_3__* hw; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {int debugfsdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct wl1271*,struct dentry*) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*,struct dentry*) ;

int FUNC_8(struct wl1271 *VAR_4)
{
 int VAR_5;
 struct dentry *VAR_6;

 VAR_6 = FUNC_2(VAR_2,
         VAR_4->hw->wiphy->debugfsdir);

 if (FUNC_0(VAR_6)) {
  VAR_5 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_4->stats.fw_stats = FUNC_4(VAR_4->stats.fw_stats_len, VAR_1);
 if (!VAR_4->stats.fw_stats) {
  VAR_5 = -VAR_0;
  goto out_remove;
 }

 VAR_4->stats.fw_stats_update = VAR_3;

 VAR_5 = FUNC_5(VAR_4, VAR_6);
 if (VAR_5 < 0)
  goto out_exit;

 VAR_5 = FUNC_7(VAR_4, VAR_6);
 if (VAR_5 < 0)
  goto out_exit;

 goto out;

out_exit:
 FUNC_6(VAR_4);

out_remove:
 FUNC_3(VAR_6);

out:
 return VAR_5;
}
