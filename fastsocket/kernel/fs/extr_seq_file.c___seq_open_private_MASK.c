
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {void* private; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct file*,struct seq_operations const*) ;

void *FUNC_3(struct file *VAR_1, const struct seq_operations *VAR_2,
  int VAR_3)
{
 int VAR_4;
 void *VAR_5;
 struct seq_file *VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 < 0)
  goto out_free;

 VAR_6 = VAR_1->private_data;
 VAR_6->private = VAR_5;
 return VAR_5;

out_free:
 FUNC_0(VAR_5);
out:
 return ((void*)0);
}
