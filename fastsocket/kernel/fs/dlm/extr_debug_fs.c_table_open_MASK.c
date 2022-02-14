
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct inode {int i_private; } ;
struct file {struct seq_file* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_6, struct file *VAR_7)
{
 struct seq_file *VAR_8;
 int VAR_9 = -1;

 if (VAR_7->f_op == &VAR_0)
  VAR_9 = FUNC_0(VAR_7, &VAR_1);
 else if (VAR_7->f_op == &VAR_2)
  VAR_9 = FUNC_0(VAR_7, &VAR_3);
 else if (VAR_7->f_op == &VAR_4)
  VAR_9 = FUNC_0(VAR_7, &VAR_5);

 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7->private_data;
 VAR_8->private = VAR_6->i_private;
 return 0;
}
