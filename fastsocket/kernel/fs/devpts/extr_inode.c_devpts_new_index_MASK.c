
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct pts_fs_info {int allocated_ptys; } ;
struct inode {int dummy; } ;


 struct pts_fs_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct super_block* FUNC_6 (struct inode*) ;
 int VAR_5 ;

int FUNC_7(struct inode *VAR_6)
{
 struct super_block *VAR_7 = FUNC_6(VAR_6);
 struct pts_fs_info *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;
 int VAR_10;

retry:
 if (!FUNC_2(&VAR_8->allocated_ptys, VAR_3))
  return -VAR_2;

 FUNC_4(&VAR_4);
 VAR_10 = FUNC_1(&VAR_8->allocated_ptys, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_5(&VAR_4);
  if (VAR_10 == -VAR_0)
   goto retry;
  return -VAR_1;
 }

 if (VAR_9 >= VAR_5) {
  FUNC_3(&VAR_8->allocated_ptys, VAR_9);
  FUNC_5(&VAR_4);
  return -VAR_1;
 }
 FUNC_5(&VAR_4);
 return VAR_9;
}
