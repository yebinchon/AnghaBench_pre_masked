
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct inode {struct adapter* i_private; } ;
struct file {struct seq_file* private_data; } ;
struct adapter {TYPE_1__* l2t; } ;
struct TYPE_2__ {int l2tab; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, &VAR_0);

 if (!VAR_3) {
  struct adapter *VAR_4 = VAR_1->i_private;
  struct seq_file *VAR_5 = VAR_2->private_data;

  VAR_5->private = VAR_4->l2t->l2tab;
 }
 return VAR_3;
}
