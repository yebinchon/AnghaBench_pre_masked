
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_statfs_change_host {scalar_t__ sc_total; scalar_t__ sc_free; scalar_t__ sc_dinodes; } ;
struct gfs2_sbd {int sd_statfs_spin; struct gfs2_statfs_change_host sd_statfs_local; struct gfs2_statfs_change_host sd_statfs_master; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gfs2_sbd *VAR_0, struct gfs2_statfs_change_host *VAR_1)
{
 struct gfs2_statfs_change_host *VAR_2 = &VAR_0->sd_statfs_master;
 struct gfs2_statfs_change_host *VAR_3 = &VAR_0->sd_statfs_local;

 FUNC_0(&VAR_0->sd_statfs_spin);

 *VAR_1 = *VAR_2;
 VAR_1->sc_total += VAR_3->sc_total;
 VAR_1->sc_free += VAR_3->sc_free;
 VAR_1->sc_dinodes += VAR_3->sc_dinodes;

 FUNC_1(&VAR_0->sd_statfs_spin);

 if (VAR_1->sc_free < 0)
  VAR_1->sc_free = 0;
 if (VAR_1->sc_free > VAR_1->sc_total)
  VAR_1->sc_free = VAR_1->sc_total;
 if (VAR_1->sc_dinodes < 0)
  VAR_1->sc_dinodes = 0;

 return 0;
}
