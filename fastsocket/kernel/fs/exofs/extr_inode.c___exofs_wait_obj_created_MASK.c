
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exofs_i_info {int vfs_inode; int i_wq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct exofs_i_info*) ;
 int FUNC_3 (struct exofs_i_info*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct exofs_i_info *VAR_1)
{
 if (!FUNC_3(VAR_1)) {
  FUNC_0(!FUNC_2(VAR_1));
  FUNC_5(VAR_1->i_wq, FUNC_3(VAR_1));
 }
 return FUNC_4(FUNC_1(&VAR_1->vfs_inode)) ? -VAR_0 : 0;
}
