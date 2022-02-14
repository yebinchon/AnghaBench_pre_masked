
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct gfs2_quota_data {scalar_t__ qd_id; int qd_flags; } ;
struct gfs2_inode {int i_diskflags; TYPE_1__* i_res; int i_inode; } ;
typedef int s64 ;
struct TYPE_2__ {unsigned int rs_qa_qd_num; struct gfs2_quota_data** rs_qa_qd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct gfs2_quota_data*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct gfs2_inode *VAR_2, s64 VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 struct gfs2_quota_data *VAR_6;
 unsigned int VAR_7;

 if (FUNC_2(FUNC_0(&VAR_2->i_inode), VAR_3))
  return;
 if (VAR_2->i_diskflags & VAR_0)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_2->i_res->rs_qa_qd_num; VAR_7++) {
  VAR_6 = VAR_2->i_res->rs_qa_qd[VAR_7];

  if ((VAR_6->qd_id == VAR_4 && FUNC_3(VAR_1, &VAR_6->qd_flags)) ||
      (VAR_6->qd_id == VAR_5 && !FUNC_3(VAR_1, &VAR_6->qd_flags))) {
   FUNC_1(VAR_6, VAR_3);
  }
 }
}
