
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct afs_cell* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct afs_cell {int dummy; } ;
struct TYPE_2__ {struct afs_cell* data; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct file*,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct afs_cell *VAR_4;
 struct seq_file *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_2)->data;
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, &VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_3->private_data;
 VAR_5->private = VAR_4;
 return 0;
}
