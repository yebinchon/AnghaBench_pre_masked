
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mdstat_info* private; } ;
struct mdstat_info {scalar_t__ event; } ;
struct file {struct seq_file* private_data; } ;
typedef int poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_6, poll_table *VAR_7)
{
 struct seq_file *VAR_8 = VAR_6->private_data;
 struct mdstat_info *VAR_9 = VAR_8->private;
 int VAR_10;

 FUNC_1(VAR_6, &VAR_5, VAR_7);


 VAR_10 = VAR_1 | VAR_3;

 if (VAR_9->event != FUNC_0(&VAR_4))
  VAR_10 |= VAR_0 | VAR_2;
 return VAR_10;
}
