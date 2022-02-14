
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {int err; } ;
struct TYPE_4__ {TYPE_1__ ack; } ;
struct proc_event {int cpu; TYPE_2__ event_data; int what; int timestamp_ns; } ;
struct cn_msg {int seq; int ack; int len; int id; scalar_t__ data; } ;
typedef int __u8 ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cn_msg*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct timespec*) ;

__attribute__((used)) static void FUNC_6(int VAR_6, int VAR_7, int VAR_8)
{
 struct cn_msg *VAR_9;
 struct proc_event *VAR_10;
 __u8 VAR_11[VAR_1];
 struct timespec VAR_12;

 if (FUNC_0(&VAR_5) < 1)
  return;

 VAR_9 = (struct cn_msg*)VAR_11;
 VAR_10 = (struct proc_event*)VAR_9->data;
 VAR_9->seq = VAR_7;
 FUNC_2(&VAR_12);
 FUNC_4(FUNC_5(&VAR_12), (__u64 *)&VAR_10->timestamp_ns);
 VAR_10->cpu = -1;
 VAR_10->what = VAR_3;
 VAR_10->event_data.ack.err = VAR_6;
 FUNC_3(&VAR_9->id, &VAR_4, sizeof(VAR_9->id));
 VAR_9->ack = VAR_8 + 1;
 VAR_9->len = sizeof(*VAR_10);
 FUNC_1(VAR_9, VAR_0, VAR_2);
}
