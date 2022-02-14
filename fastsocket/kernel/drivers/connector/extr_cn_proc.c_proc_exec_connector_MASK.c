
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct task_struct {int tgid; int pid; } ;
struct TYPE_3__ {int process_tgid; int process_pid; } ;
struct TYPE_4__ {TYPE_1__ exec; } ;
struct proc_event {TYPE_2__ event_data; int what; int timestamp_ns; int cpu; } ;
struct cn_msg {int len; scalar_t__ ack; int id; int seq; scalar_t__ data; } ;
typedef int __u8 ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cn_msg*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct timespec*) ;

void FUNC_7(struct task_struct *VAR_6)
{
 struct cn_msg *VAR_7;
 struct proc_event *VAR_8;
 struct timespec VAR_9;
 __u8 VAR_10[VAR_1];

 if (FUNC_0(&VAR_5) < 1)
  return;

 VAR_7 = (struct cn_msg*)VAR_10;
 VAR_8 = (struct proc_event*)VAR_7->data;
 FUNC_2(&VAR_7->seq, &VAR_8->cpu);
 FUNC_3(&VAR_9);
 FUNC_5(FUNC_6(&VAR_9), (__u64 *)&VAR_8->timestamp_ns);
 VAR_8->what = VAR_3;
 VAR_8->event_data.exec.process_pid = VAR_6->pid;
 VAR_8->event_data.exec.process_tgid = VAR_6->tgid;

 FUNC_4(&VAR_7->id, &VAR_4, sizeof(VAR_7->id));
 VAR_7->ack = 0;
 VAR_7->len = sizeof(*VAR_8);
 FUNC_1(VAR_7, VAR_0, VAR_2);
}
