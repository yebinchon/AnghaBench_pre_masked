
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct pts_fs_info {int allocated_ptys; } ;
struct inode {int dummy; } ;


 struct pts_fs_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct super_block* FUNC_4 (struct inode*) ;

void FUNC_5(struct inode *VAR_1, int VAR_2)
{
 struct super_block *VAR_3 = FUNC_4(VAR_1);
 struct pts_fs_info *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_4->allocated_ptys, VAR_2);
 FUNC_3(&VAR_0);
}
