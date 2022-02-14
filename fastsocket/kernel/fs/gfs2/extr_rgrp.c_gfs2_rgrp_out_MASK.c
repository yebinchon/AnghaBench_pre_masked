
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrpd {int rd_flags; int rd_free; int rd_dinodes; int rd_igeneration; } ;
struct gfs2_rgrp {int rg_reserved; int rg_igeneration; void* __pad; void* rg_dinodes; void* rg_free; void* rg_flags; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gfs2_rgrpd *VAR_1, void *VAR_2)
{
 struct gfs2_rgrp *VAR_3 = VAR_2;

 VAR_3->rg_flags = FUNC_0(VAR_1->rd_flags & ~VAR_0);
 VAR_3->rg_free = FUNC_0(VAR_1->rd_free);
 VAR_3->rg_dinodes = FUNC_0(VAR_1->rd_dinodes);
 VAR_3->__pad = FUNC_0(0);
 VAR_3->rg_igeneration = FUNC_1(VAR_1->rd_igeneration);
 FUNC_2(&VAR_3->rg_reserved, 0, sizeof(VAR_3->rg_reserved));
}
