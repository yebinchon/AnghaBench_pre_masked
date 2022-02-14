
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_quota_data {int dummy; } ;
struct gfs2_inode {TYPE_1__* i_res; int i_flags; } ;
struct TYPE_2__ {unsigned int rs_qa_qd_num; int * rs_qa_qd_ghs; struct gfs2_quota_data** rs_qa_qd; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct gfs2_quota_data**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_quota_data*) ;
 scalar_t__ FUNC_4 (struct gfs2_quota_data*) ;
 int FUNC_5 (struct gfs2_quota_data*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct gfs2_inode *VAR_1)
{
 struct gfs2_quota_data *VAR_2[4];
 unsigned int VAR_3 = 0;
 unsigned int VAR_4;

 if (!FUNC_6(VAR_0, &VAR_1->i_flags))
  goto out;

 for (VAR_4 = 0; VAR_4 < VAR_1->i_res->rs_qa_qd_num; VAR_4++) {
  struct gfs2_quota_data *VAR_5;
  int VAR_6;

  VAR_5 = VAR_1->i_res->rs_qa_qd[VAR_4];
  VAR_6 = FUNC_3(VAR_5);

  FUNC_1(&VAR_1->i_res->rs_qa_qd_ghs[VAR_4]);

  if (VAR_6 && FUNC_4(VAR_5))
   VAR_2[VAR_3++] = VAR_5;
 }

 if (VAR_3) {
  FUNC_0(VAR_3, VAR_2);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_5(VAR_2[VAR_4]);
 }

out:
 FUNC_2(VAR_1);
}
