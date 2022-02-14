
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ gh_gl; } ;
struct gfs2_trans {scalar_t__ tr_num_buf_new; scalar_t__ tr_num_databuf_new; scalar_t__ tr_num_buf_rm; scalar_t__ tr_num_databuf_rm; scalar_t__ tr_blocks; scalar_t__ tr_num_revoke; scalar_t__ tr_revokes; TYPE_2__ tr_t_gh; int tr_reserved; int tr_touched; } ;
struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
typedef scalar_t__ s64 ;
struct TYPE_7__ {struct gfs2_trans* journal_info; } ;
struct TYPE_5__ {int s_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_1 (struct gfs2_sbd*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct gfs2_sbd*,struct gfs2_trans*) ;
 int FUNC_5 (struct gfs2_sbd*,int *) ;
 int FUNC_6 (struct gfs2_sbd*,int ) ;
 int FUNC_7 (struct gfs2_trans*) ;
 int FUNC_8 (struct gfs2_trans*) ;
 int FUNC_9 (TYPE_1__*) ;

void FUNC_10(struct gfs2_sbd *VAR_2)
{
 struct gfs2_trans *VAR_3 = VAR_1->journal_info;
 s64 VAR_4;
 FUNC_0(!VAR_3);
 VAR_1->journal_info = ((void*)0);

 if (!VAR_3->tr_touched) {
  FUNC_6(VAR_2, VAR_3->tr_reserved);
  if (VAR_3->tr_t_gh.gh_gl) {
   FUNC_2(&VAR_3->tr_t_gh);
   FUNC_3(&VAR_3->tr_t_gh);
   FUNC_8(VAR_3);
  }
  FUNC_9(VAR_2->sd_vfs);
  return;
 }

 VAR_4 = VAR_3->tr_num_buf_new + VAR_3->tr_num_databuf_new;
 VAR_4 -= VAR_3->tr_num_buf_rm;
 VAR_4 -= VAR_3->tr_num_databuf_rm;

 if (FUNC_1(VAR_2, (VAR_4 <= VAR_3->tr_blocks) &&
           (VAR_3->tr_num_revoke <= VAR_3->tr_revokes)))
  FUNC_7(VAR_3);

 FUNC_4(VAR_2, VAR_3);
 if (VAR_3->tr_t_gh.gh_gl) {
  FUNC_2(&VAR_3->tr_t_gh);
  FUNC_3(&VAR_3->tr_t_gh);
  FUNC_8(VAR_3);
 }

 if (VAR_2->sd_vfs->s_flags & VAR_0)
  FUNC_5(VAR_2, ((void*)0));
 FUNC_9(VAR_2->sd_vfs);
}
