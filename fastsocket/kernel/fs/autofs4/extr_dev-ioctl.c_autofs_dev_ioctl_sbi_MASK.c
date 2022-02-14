
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct autofs_sb_info {int dummy; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 struct autofs_sb_info* FUNC_0 (int ) ;

__attribute__((used)) static struct autofs_sb_info *FUNC_1(struct file *VAR_0)
{
 struct autofs_sb_info *VAR_1 = ((void*)0);
 struct inode *VAR_2;

 if (VAR_0) {
  VAR_2 = VAR_0->f_path.dentry->d_inode;
  VAR_1 = FUNC_0(VAR_2->i_sb);
 }
 return VAR_1;
}
