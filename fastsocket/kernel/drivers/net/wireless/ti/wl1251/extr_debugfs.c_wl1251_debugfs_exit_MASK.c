
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * rootdir; int * fw_statistics; } ;
struct TYPE_3__ {int * fw_stats; } ;
struct wl1251 {TYPE_2__ debugfs; TYPE_1__ stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl1251*) ;

void FUNC_3(struct wl1251 *VAR_0)
{
 FUNC_2(VAR_0);

 FUNC_1(VAR_0->stats.fw_stats);
 VAR_0->stats.fw_stats = ((void*)0);

 FUNC_0(VAR_0->debugfs.fw_statistics);
 VAR_0->debugfs.fw_statistics = ((void*)0);

 FUNC_0(VAR_0->debugfs.rootdir);
 VAR_0->debugfs.rootdir = ((void*)0);

}
