
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; } ;
struct msdos_dir_entry {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_op; int d_inode; struct super_block* d_sb; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int d_op; } ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,struct msdos_dir_entry*,int ) ;
 int FUNC_5 (int ,struct buffer_head**,struct msdos_dir_entry**,int *) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;

__attribute__((used)) static struct dentry *FUNC_8(struct dentry *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->d_sb;
 struct buffer_head *VAR_2;
 struct msdos_dir_entry *VAR_3;
 loff_t VAR_4;
 struct dentry *VAR_5;
 struct inode *VAR_6;
 int VAR_7;

 FUNC_6(VAR_1);

 VAR_7 = FUNC_5(VAR_0->d_inode, &VAR_2, &VAR_3, &VAR_4);
 if (VAR_7) {
  VAR_5 = FUNC_0(VAR_7);
  goto out;
 }
 VAR_6 = FUNC_4(VAR_1, VAR_3, VAR_4);
 FUNC_2(VAR_2);

 VAR_5 = FUNC_3(VAR_6);
 if (!FUNC_1(VAR_5))
  VAR_5->d_op = VAR_1->s_root->d_op;
out:
 FUNC_7(VAR_1);

 return VAR_5;
}
