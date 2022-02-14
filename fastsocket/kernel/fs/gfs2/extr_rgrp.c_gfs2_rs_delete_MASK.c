
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_writecount; } ;
struct gfs2_inode {int i_rw_mutex; TYPE_1__* i_res; struct inode i_inode; } ;
struct TYPE_3__ {int rs_free; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct gfs2_inode *VAR_1)
{
 struct inode *VAR_2 = &VAR_1->i_inode;

 FUNC_2(&VAR_1->i_rw_mutex);
 if (VAR_1->i_res && FUNC_1(&VAR_2->i_writecount) <= 1) {
  FUNC_3(VAR_1->i_res);
  FUNC_0(VAR_1->i_res->rs_free);
  FUNC_4(VAR_0, VAR_1->i_res);
  VAR_1->i_res = ((void*)0);
 }
 FUNC_5(&VAR_1->i_rw_mutex);
}
