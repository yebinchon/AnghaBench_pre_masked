
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int private; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; struct seq_file* private_data; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;
 struct seq_file *VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_0);
 VAR_4 = VAR_2->private_data;
 VAR_4->private = VAR_2->f_path.dentry->d_inode->i_private;

 return VAR_3;
}
