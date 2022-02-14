
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * rootdir; int * fw_statistics; } ;
struct TYPE_3__ {int * fw_stats; int fw_stats_update; } ;
struct wl1251 {TYPE_2__ debugfs; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 char* VAR_2 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (char*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (struct wl1251*) ;

int FUNC_7(struct wl1251 *VAR_4)
{
 int VAR_5;

 VAR_4->debugfs.rootdir = FUNC_2(VAR_2, ((void*)0));

 if (FUNC_0(VAR_4->debugfs.rootdir)) {
  VAR_5 = FUNC_1(VAR_4->debugfs.rootdir);
  VAR_4->debugfs.rootdir = ((void*)0);
  goto err;
 }

 VAR_4->debugfs.fw_statistics = FUNC_2("fw-statistics",
             VAR_4->debugfs.rootdir);

 if (FUNC_0(VAR_4->debugfs.fw_statistics)) {
  VAR_5 = FUNC_1(VAR_4->debugfs.fw_statistics);
  VAR_4->debugfs.fw_statistics = ((void*)0);
  goto err_root;
 }

 VAR_4->stats.fw_stats = FUNC_5(sizeof(*VAR_4->stats.fw_stats),
          VAR_1);

 if (!VAR_4->stats.fw_stats) {
  VAR_5 = -VAR_0;
  goto err_fw;
 }

 VAR_4->stats.fw_stats_update = VAR_3;

 VAR_5 = FUNC_6(VAR_4);

 if (VAR_5 < 0)
  goto err_file;

 return 0;

err_file:
 FUNC_4(VAR_4->stats.fw_stats);
 VAR_4->stats.fw_stats = ((void*)0);

err_fw:
 FUNC_3(VAR_4->debugfs.fw_statistics);
 VAR_4->debugfs.fw_statistics = ((void*)0);

err_root:
 FUNC_3(VAR_4->debugfs.rootdir);
 VAR_4->debugfs.rootdir = ((void*)0);

err:
 return VAR_5;
}
