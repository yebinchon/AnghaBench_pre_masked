
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_list; TYPE_2__* sd_vfs; } ;
struct gfs2_quota_data {int qd_flags; int qd_change_sync; int qd_slot_count; int qd_change; int qd_count; int qd_list; TYPE_1__* qd_gl; } ;
struct TYPE_4__ {int s_flags; } ;
struct TYPE_3__ {struct gfs2_sbd* gl_sbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct gfs2_quota_data*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct gfs2_sbd*,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (struct gfs2_quota_data*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct gfs2_quota_data*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct gfs2_quota_data *VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_4->qd_gl->gl_sbd;

 if (VAR_5->sd_vfs->s_flags & VAR_0)
  return 0;

 FUNC_9(&VAR_3);

 if (FUNC_11(VAR_2, &VAR_4->qd_flags) ||
     !FUNC_11(VAR_1, &VAR_4->qd_flags)) {
  FUNC_10(&VAR_3);
  return 0;
 }

 FUNC_5(&VAR_4->qd_list, &VAR_5->sd_quota_list);

 FUNC_7(VAR_2, &VAR_4->qd_flags);
 FUNC_4(VAR_5, FUNC_1(&VAR_4->qd_count));
 FUNC_0(&VAR_4->qd_count);
 VAR_4->qd_change_sync = VAR_4->qd_change;
 FUNC_4(VAR_5, VAR_4->qd_slot_count);
 VAR_4->qd_slot_count++;

 FUNC_10(&VAR_3);

 FUNC_4(VAR_5, VAR_4->qd_change_sync);
 if (FUNC_2(VAR_4)) {
  FUNC_3(VAR_2, &VAR_4->qd_flags);
  FUNC_8(VAR_4);
  FUNC_6(VAR_4);
  return 0;
 }

 return 1;
}
