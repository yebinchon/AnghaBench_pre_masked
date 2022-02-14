
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_atime; int i_mtime; struct super_block* i_sb; } ;
struct fat_slot_info {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct fat_slot_info*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct inode*,int *,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct fat_slot_info VAR_5;
 int VAR_6;

 FUNC_3(VAR_4);

 VAR_6 = FUNC_5(VAR_1, &VAR_2->d_name, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_2(VAR_1, &VAR_5);
 if (VAR_6)
  goto out;
 FUNC_0(VAR_3);
 VAR_3->i_mtime = VAR_3->i_atime = VAR_0;
 FUNC_1(VAR_3);
out:
 FUNC_4(VAR_4);

 return VAR_6;
}
