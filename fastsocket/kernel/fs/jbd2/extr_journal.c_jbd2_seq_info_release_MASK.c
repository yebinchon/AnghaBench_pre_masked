
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct jbd2_stats_proc_session* private; } ;
struct jbd2_stats_proc_session {struct jbd2_stats_proc_session* stats; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct jbd2_stats_proc_session*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = VAR_1->private_data;
 struct jbd2_stats_proc_session *VAR_3 = VAR_2->private;
 FUNC_0(VAR_3->stats);
 FUNC_0(VAR_3);
 return FUNC_1(VAR_0, VAR_1);
}
