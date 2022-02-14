
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_statfs_change_host {int sc_dinodes; int sc_free; int sc_total; } ;
struct gfs2_statfs_change {void* sc_dinodes; void* sc_free; void* sc_total; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct gfs2_statfs_change_host *VAR_0, void *VAR_1)
{
 struct gfs2_statfs_change *VAR_2 = VAR_1;

 VAR_2->sc_total = FUNC_0(VAR_0->sc_total);
 VAR_2->sc_free = FUNC_0(VAR_0->sc_free);
 VAR_2->sc_dinodes = FUNC_0(VAR_0->sc_dinodes);
}
