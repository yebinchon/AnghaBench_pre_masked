
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_rgrpd {scalar_t__ rd_reserved; int rd_extfail_pt; int rd_rstree; } ;
struct TYPE_4__ {TYPE_1__* bi; struct gfs2_rgrpd* rgd; } ;
struct gfs2_blkreserv {scalar_t__ rs_free; TYPE_2__ rs_rbm; int rs_node; } ;
struct TYPE_3__ {int bi_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gfs2_blkreserv*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct gfs2_blkreserv*,int ) ;

__attribute__((used)) static void FUNC_7(struct gfs2_blkreserv *VAR_2)
{
 struct gfs2_rgrpd *VAR_3;

 if (!FUNC_2(VAR_2))
  return;

 VAR_3 = VAR_2->rs_rbm.rgd;
 FUNC_6(VAR_2, VAR_1);
 FUNC_3(&VAR_2->rs_node, &VAR_3->rd_rstree);
 FUNC_4(&VAR_2->rs_node);

 if (VAR_2->rs_free) {

  FUNC_0(VAR_2->rs_rbm.rgd->rd_reserved < VAR_2->rs_free);
  VAR_2->rs_rbm.rgd->rd_reserved -= VAR_2->rs_free;




  VAR_3->rd_extfail_pt += VAR_2->rs_free;
  VAR_2->rs_free = 0;
  FUNC_1(VAR_0, &VAR_2->rs_rbm.bi->bi_flags);
  FUNC_5();
 }
}
