
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_rw_mutex; TYPE_1__* i_res; } ;
struct TYPE_2__ {int rs_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct gfs2_inode *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_3->i_rw_mutex);
 if (VAR_3->i_res)
  goto out;

 VAR_3->i_res = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->i_res) {
  VAR_4 = -VAR_0;
  goto out;
 }

 FUNC_2(&VAR_3->i_res->rs_node);
 out:
 FUNC_3(&VAR_3->i_rw_mutex);
 return VAR_4;
}
