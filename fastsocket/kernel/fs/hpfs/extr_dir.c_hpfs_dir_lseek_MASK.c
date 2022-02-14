
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct inode {int i_mutex; struct super_block* i_sb; } ;
struct hpfs_inode_info {int i_dno; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 struct hpfs_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct inode*,int*,struct quad_buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static loff_t FUNC_8(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4 = VAR_2 + (VAR_3 == 1 ? VAR_1->f_pos : 0);
 loff_t VAR_5;
 struct quad_buffer_head VAR_6;
 struct inode *VAR_7 = VAR_1->f_path.dentry->d_inode;
 struct hpfs_inode_info *VAR_8 = FUNC_2(VAR_7);
 struct super_block *VAR_9 = VAR_7->i_sb;

 FUNC_3();


 if (VAR_4 == 0 || VAR_4 == 1 || VAR_4 == 11 || VAR_4 == 12 || VAR_4 == 13) goto ok;
 FUNC_5(&VAR_7->i_mutex);
 VAR_5 = ((loff_t) FUNC_1(VAR_9, VAR_8->i_dno) << 4) + 1;
 while (VAR_5 != VAR_4) {
  if (FUNC_4(VAR_7, &VAR_5, &VAR_6)) FUNC_0(&VAR_6);
  else goto fail;
  if (VAR_5 == 12) goto fail;
 }
 FUNC_6(&VAR_7->i_mutex);
ok:
 FUNC_7();
 return VAR_1->f_pos = VAR_4;
fail:
 FUNC_6(&VAR_7->i_mutex);

 FUNC_7();
 return -VAR_0;
}
