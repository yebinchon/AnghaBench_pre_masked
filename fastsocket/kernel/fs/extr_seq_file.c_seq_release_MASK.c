
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct seq_file* buf; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct seq_file*) ;

int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = (struct seq_file *)VAR_1->private_data;
 FUNC_0(VAR_2->buf);
 FUNC_0(VAR_2);
 return 0;
}
