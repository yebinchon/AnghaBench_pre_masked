
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {struct seq_operations const* op; int lock; } ;
struct file {int f_mode; scalar_t__ f_version; struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct seq_file* FUNC_0 (int,int ) ;
 int FUNC_1 (struct seq_file*,int ,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct file *VAR_3, const struct seq_operations *VAR_4)
{
 struct seq_file *VAR_5 = VAR_3->private_data;

 if (!VAR_5) {
  VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_2);
  if (!VAR_5)
   return -VAR_0;
  VAR_3->private_data = VAR_5;
 }
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 FUNC_2(&VAR_5->lock);
 VAR_5->op = VAR_4;






 VAR_3->f_version = 0;
 VAR_3->f_mode &= ~VAR_1;
 return 0;
}
