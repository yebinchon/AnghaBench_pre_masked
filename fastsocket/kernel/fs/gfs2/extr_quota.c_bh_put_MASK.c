
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_mutex; } ;
struct gfs2_quota_data {int * qd_bh_qc; int * qd_bh; int qd_bh_count; TYPE_1__* qd_gl; } ;
struct TYPE_2__ {struct gfs2_sbd* gl_sbd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gfs2_quota_data *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->qd_gl->gl_sbd;

 FUNC_2(&VAR_1->sd_quota_mutex);
 FUNC_1(VAR_1, VAR_0->qd_bh_count);
 if (!--VAR_0->qd_bh_count) {
  FUNC_0(VAR_0->qd_bh);
  VAR_0->qd_bh = ((void*)0);
  VAR_0->qd_bh_qc = ((void*)0);
 }
 FUNC_3(&VAR_1->sd_quota_mutex);
}
