
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_mutex; int sd_qc_inode; } ;
struct gfs2_quota_data {int qd_flags; scalar_t__ qd_change; int qd_id; int qd_bh; struct gfs2_quota_change* qd_bh_qc; TYPE_1__* qd_gl; } ;
struct gfs2_quota_change {void* qc_id; void* qc_flags; scalar_t__ qc_change; } ;
struct gfs2_inode {int i_gl; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct gfs2_sbd* gl_sbd; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct gfs2_sbd*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct gfs2_quota_data*) ;
 int VAR_3 ;
 int FUNC_10 (struct gfs2_quota_data*) ;
 int FUNC_11 (struct gfs2_quota_data*) ;
 int FUNC_12 (struct gfs2_quota_data*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct gfs2_quota_data *VAR_4, s64 VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_4->qd_gl->gl_sbd;
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6->sd_qc_inode);
 struct gfs2_quota_change *VAR_8 = VAR_4->qd_bh_qc;
 s64 VAR_9;

 FUNC_7(&VAR_6->sd_quota_mutex);
 FUNC_6(VAR_7->i_gl, VAR_4->qd_bh);

 if (!FUNC_16(VAR_1, &VAR_4->qd_flags)) {
  VAR_8->qc_change = 0;
  VAR_8->qc_flags = 0;
  if (FUNC_16(VAR_2, &VAR_4->qd_flags))
   VAR_8->qc_flags = FUNC_3(VAR_0);
  VAR_8->qc_id = FUNC_3(VAR_4->qd_id);
 }

 VAR_9 = FUNC_1(VAR_8->qc_change) + VAR_5;
 VAR_8->qc_change = FUNC_4(VAR_9);

 FUNC_13(&VAR_3);
 VAR_4->qd_change = VAR_9;
 FUNC_14(&VAR_3);

 if (!VAR_9) {
  FUNC_5(VAR_6, FUNC_16(VAR_1, &VAR_4->qd_flags));
  FUNC_2(VAR_1, &VAR_4->qd_flags);
  VAR_8->qc_flags = 0;
  VAR_8->qc_id = 0;
  FUNC_12(VAR_4);
  FUNC_10(VAR_4);
 } else if (!FUNC_15(VAR_1, &VAR_4->qd_flags)) {
  FUNC_9(VAR_4);
  FUNC_11(VAR_4);
 }

 FUNC_8(&VAR_6->sd_quota_mutex);
}
