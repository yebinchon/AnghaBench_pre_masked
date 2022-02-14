
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct binder_proc* private_data; } ;
struct binder_proc {int pid; int delivered_death; int proc_node; int default_priority; int wait; int todo; TYPE_2__* tsk; } ;
typedef int strbuf ;
struct TYPE_6__ {TYPE_1__* group_leader; int pid; } ;
struct TYPE_5__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__,int ,struct binder_proc*) ;
 TYPE_2__* VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 struct binder_proc* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_10, struct file *VAR_11)
{
 struct binder_proc *VAR_12;

 FUNC_1(VAR_0, "binder_open: %d:%d\n",
       VAR_9->group_leader->pid, VAR_9->pid);

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;
 FUNC_4(VAR_9);
 VAR_12->tsk = VAR_9;
 FUNC_0(&VAR_12->todo);
 FUNC_6(&VAR_12->wait);
 VAR_12->default_priority = FUNC_12(VAR_9);
 FUNC_8(&VAR_5);
 FUNC_2(VAR_1);
 FUNC_5(&VAR_12->proc_node, &VAR_7);
 VAR_12->pid = VAR_9->group_leader->pid;
 FUNC_0(&VAR_12->delivered_death);
 VAR_11->private_data = VAR_12;
 FUNC_9(&VAR_5);

 if (VAR_6) {
  char VAR_13[11];
  FUNC_11(VAR_13, sizeof(VAR_13), "%u", VAR_12->pid);
  FUNC_10(VAR_13, VAR_6);
  FUNC_3(VAR_13, VAR_4,
           VAR_6,
           VAR_8, VAR_12);
 }

 return 0;
}
