
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mdstat_info* private; } ;
struct mdstat_info {int event; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mdstat_info*) ;
 struct mdstat_info* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct file*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;
 struct mdstat_info *VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5, &VAR_3);
 if (VAR_6)
  FUNC_1(VAR_7);
 else {
  struct seq_file *VAR_8 = VAR_5->private_data;
  VAR_8->private = VAR_7;
  VAR_7->event = FUNC_0(&VAR_2);
 }
 return VAR_6;
}
