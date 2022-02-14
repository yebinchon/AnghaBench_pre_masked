
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct TYPE_2__ {int data; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct seq_file *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_2->private_data;
 VAR_3->private = FUNC_0(VAR_1)->data;

 return 0;
}
