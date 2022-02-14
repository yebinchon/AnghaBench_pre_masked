
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct seq_table {scalar_t__ timeout; scalar_t__ retries_left; struct ipmi_recv_msg* recv_msg; int seqid; scalar_t__ broadcast; scalar_t__ inuse; } ;
struct list_head {int dummy; } ;
struct ipmi_smi_msg {int dummy; } ;
struct ipmi_smi_handlers {int (* sender ) (int ,struct ipmi_smi_msg*,int ) ;} ;
struct ipmi_recv_msg {int addr; int link; } ;
typedef TYPE_1__* ipmi_smi_t ;
struct TYPE_5__ {int intf_num; int seq_lock; int send_info; struct ipmi_smi_handlers* handlers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipmi_smi_msg*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct list_head*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipmi_smi_msg* FUNC_4 (TYPE_1__*,struct ipmi_recv_msg*,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,struct ipmi_smi_msg*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(ipmi_smi_t VAR_8, struct seq_table *VAR_9,
         struct list_head *VAR_10, long VAR_11,
         int VAR_12, unsigned long *VAR_13)
{
 struct ipmi_recv_msg *VAR_14;
 struct ipmi_smi_handlers *VAR_15;

 if (VAR_8->intf_num == -1)
  return;

 if (!VAR_9->inuse)
  return;

 VAR_9->timeout -= VAR_11;
 if (VAR_9->timeout > 0)
  return;

 if (VAR_9->retries_left == 0) {

  VAR_9->inuse = 0;
  VAR_14 = VAR_9->recv_msg;
  FUNC_3(&VAR_14->link, VAR_10);
  if (VAR_9->broadcast)
   FUNC_1(VAR_8, VAR_5);
  else if (FUNC_2(&VAR_9->recv_msg->addr))
   FUNC_1(VAR_8, VAR_7);
  else
   FUNC_1(VAR_8, VAR_6);
 } else {
  struct ipmi_smi_msg *VAR_16;






  VAR_9->timeout = VAR_0;
  VAR_9->retries_left--;
  VAR_16 = FUNC_4(VAR_8, VAR_9->recv_msg, VAR_12,
         VAR_9->seqid);
  if (!VAR_16) {
   if (FUNC_2(&VAR_9->recv_msg->addr))
    FUNC_1(VAR_8,
           VAR_2);
   else
    FUNC_1(VAR_8,
           VAR_1);
   return;
  }

  FUNC_6(&VAR_8->seq_lock, *VAR_13);
  VAR_15 = VAR_8->handlers;
  if (VAR_15) {
   if (FUNC_2(&VAR_9->recv_msg->addr))
    FUNC_1(VAR_8,
           VAR_4);
   else
    FUNC_1(VAR_8,
           VAR_3);

   VAR_8->handlers->sender(VAR_8->send_info,
            VAR_16, 0);
  } else
   FUNC_0(VAR_16);

  FUNC_5(&VAR_8->seq_lock, *VAR_13);
 }
}
