
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_statfs_change_host {int sc_dinodes; int sc_free; int sc_total; } ;
struct gfs2_rgrpd {scalar_t__ rd_dinodes; scalar_t__ rd_free; scalar_t__ rd_data; } ;


 int FUNC_0 (struct gfs2_rgrpd*) ;

__attribute__((used)) static int FUNC_1(struct gfs2_rgrpd *VAR_0,
       struct gfs2_statfs_change_host *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_1->sc_total += VAR_0->rd_data;
 VAR_1->sc_free += VAR_0->rd_free;
 VAR_1->sc_dinodes += VAR_0->rd_dinodes;
 return 0;
}
