
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ls_ops; } ;
struct gfs2_sbd {TYPE_2__ sd_lockstruct; } ;
struct gfs2_glock {int gl_holders; int gl_hash; int gl_list; int gl_ref; struct gfs2_sbd* gl_sbd; } ;
struct address_space {scalar_t__ nrpages; } ;
struct TYPE_3__ {int (* lm_put_lock ) (struct gfs2_glock*) ;} ;


 int FUNC_0 (struct gfs2_glock*,int) ;
 int FUNC_1 (struct gfs2_glock*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 struct address_space* FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct gfs2_glock*) ;
 int FUNC_10 (struct gfs2_glock*) ;

void FUNC_11(struct gfs2_glock *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->gl_sbd;
 struct address_space *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_2(&VAR_1->gl_ref, &VAR_0)) {
  FUNC_1(VAR_1);
  FUNC_7(&VAR_0);
  FUNC_6(VAR_1->gl_hash);
  FUNC_4(&VAR_1->gl_list);
  FUNC_8(VAR_1->gl_hash);
  FUNC_0(VAR_1, !FUNC_5(&VAR_1->gl_holders));
  FUNC_0(VAR_1, VAR_3 && VAR_3->nrpages);
  FUNC_10(VAR_1);
  VAR_2->sd_lockstruct.ls_ops->lm_put_lock(VAR_1);
 }
}
