
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transaction_stats_s {int dummy; } ;
struct seq_file {struct jbd2_stats_proc_session* private; } ;
struct jbd2_stats_proc_session {struct jbd2_stats_proc_session* stats; TYPE_1__* journal; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct TYPE_3__ {int j_history_lock; int j_stats; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_4__ {TYPE_1__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct jbd2_stats_proc_session*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct jbd2_stats_proc_session*,int *,int) ;
 int FUNC_4 (struct file*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 journal_t *VAR_5 = FUNC_0(VAR_3)->data;
 struct jbd2_stats_proc_session *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_8 = sizeof(struct transaction_stats_s);
 VAR_6->stats = FUNC_2(VAR_8, VAR_1);
 if (VAR_6->stats == ((void*)0)) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 FUNC_5(&VAR_5->j_history_lock);
 FUNC_3(VAR_6->stats, &VAR_5->j_stats, VAR_8);
 VAR_6->journal = VAR_5;
 FUNC_6(&VAR_5->j_history_lock);

 VAR_7 = FUNC_4(VAR_4, &VAR_2);
 if (VAR_7 == 0) {
  struct seq_file *VAR_9 = VAR_4->private_data;
  VAR_9->private = VAR_6;
 } else {
  FUNC_1(VAR_6->stats);
  FUNC_1(VAR_6);
 }
 return VAR_7;

}
