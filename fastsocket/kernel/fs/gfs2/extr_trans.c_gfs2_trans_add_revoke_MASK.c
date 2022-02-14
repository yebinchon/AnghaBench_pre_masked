
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_trans {int tr_touched; int tr_num_revoke; } ;
struct gfs2_sbd {int sd_log_le_revoke; int sd_log_num_revoke; } ;
struct gfs2_glock {int gl_flags; int gl_revokes; } ;
struct gfs2_bufdata {int bd_list; int * bd_ops; int bd_ail_gl_list; int bd_ail_st_list; struct gfs2_glock* bd_gl; } ;
struct TYPE_2__ {struct gfs2_trans* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct gfs2_sbd *VAR_3, struct gfs2_bufdata *VAR_4)
{
 struct gfs2_glock *VAR_5 = VAR_4->bd_gl;
 struct gfs2_trans *VAR_6 = VAR_1->journal_info;

 FUNC_0(!FUNC_3(&VAR_4->bd_list));
 FUNC_0(!FUNC_3(&VAR_4->bd_ail_st_list));
 FUNC_0(!FUNC_3(&VAR_4->bd_ail_gl_list));
 VAR_4->bd_ops = &VAR_2;
 VAR_6->tr_touched = 1;
 VAR_6->tr_num_revoke++;
 VAR_3->sd_log_num_revoke++;
 FUNC_1(&VAR_5->gl_revokes);
 FUNC_4(VAR_0, &VAR_5->gl_flags);
 FUNC_2(&VAR_4->bd_list, &VAR_3->sd_log_le_revoke);
}
