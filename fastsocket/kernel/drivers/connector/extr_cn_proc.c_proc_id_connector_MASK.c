
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct task_struct {int tgid; int pid; } ;
struct TYPE_6__ {int egid; int euid; } ;
struct TYPE_5__ {int rgid; int ruid; } ;
struct TYPE_7__ {TYPE_2__ e; TYPE_1__ r; int process_tgid; int process_pid; } ;
struct TYPE_8__ {TYPE_3__ id; } ;
struct proc_event {int what; int timestamp_ns; int cpu; TYPE_4__ event_data; } ;
struct cred {int egid; int gid; int euid; int uid; } ;
struct cn_msg {int len; scalar_t__ ack; int id; int seq; scalar_t__ data; } ;
typedef int __u8 ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cn_msg*,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct timespec*) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_6 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct timespec*) ;

void FUNC_10(struct task_struct *VAR_7, int VAR_8)
{
 struct cn_msg *VAR_9;
 struct proc_event *VAR_10;
 __u8 VAR_11[VAR_1];
 struct timespec VAR_12;
 const struct cred *VAR_13;

 if (FUNC_1(&VAR_6) < 1)
  return;

 VAR_9 = (struct cn_msg*)VAR_11;
 VAR_10 = (struct proc_event*)VAR_9->data;
 VAR_10->what = VAR_8;
 VAR_10->event_data.id.process_pid = VAR_7->pid;
 VAR_10->event_data.id.process_tgid = VAR_7->tgid;
 FUNC_7();
 VAR_13 = FUNC_0(VAR_7);
 if (VAR_8 == VAR_4) {
  VAR_10->event_data.id.r.ruid = VAR_13->uid;
  VAR_10->event_data.id.e.euid = VAR_13->euid;
 } else if (VAR_8 == VAR_3) {
  VAR_10->event_data.id.r.rgid = VAR_13->gid;
  VAR_10->event_data.id.e.egid = VAR_13->egid;
 } else {
  FUNC_8();
       return;
 }
 FUNC_8();
 FUNC_3(&VAR_9->seq, &VAR_10->cpu);
 FUNC_4(&VAR_12);
 FUNC_6(FUNC_9(&VAR_12), (__u64 *)&VAR_10->timestamp_ns);

 FUNC_5(&VAR_9->id, &VAR_5, sizeof(VAR_9->id));
 VAR_9->ack = 0;
 VAR_9->len = sizeof(*VAR_10);
 FUNC_2(VAR_9, VAR_0, VAR_2);
}
