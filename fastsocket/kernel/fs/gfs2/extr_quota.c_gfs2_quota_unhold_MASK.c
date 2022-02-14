
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {TYPE_1__* i_res; int i_flags; int i_inode; } ;
struct TYPE_2__ {unsigned int rs_qa_qd_num; int ** rs_qa_qd; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_sbd*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct gfs2_inode *VAR_1)
{
 struct gfs2_sbd *VAR_2 = FUNC_0(&VAR_1->i_inode);
 unsigned int VAR_3;

 if (VAR_1->i_res == ((void*)0))
  return;
 FUNC_1(VAR_2, !FUNC_3(VAR_0, &VAR_1->i_flags));

 for (VAR_3 = 0; VAR_3 < VAR_1->i_res->rs_qa_qd_num; VAR_3++) {
  FUNC_2(VAR_1->i_res->rs_qa_qd[VAR_3]);
  VAR_1->i_res->rs_qa_qd[VAR_3] = ((void*)0);
 }
 VAR_1->i_res->rs_qa_qd_num = 0;
}
