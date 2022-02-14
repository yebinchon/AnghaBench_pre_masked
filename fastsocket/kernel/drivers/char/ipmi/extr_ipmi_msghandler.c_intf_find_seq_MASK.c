
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {short channel; } ;
struct TYPE_6__ {unsigned char cmd; unsigned char netfn; } ;
struct ipmi_recv_msg {TYPE_4__ addr; TYPE_1__ msg; } ;
struct ipmi_addr {int dummy; } ;
typedef TYPE_3__* ipmi_smi_t ;
struct TYPE_8__ {int seq_lock; TYPE_2__* seq_table; } ;
struct TYPE_7__ {scalar_t__ inuse; struct ipmi_recv_msg* recv_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (struct ipmi_addr*,TYPE_4__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(ipmi_smi_t VAR_3,
    unsigned char VAR_4,
    short VAR_5,
    unsigned char VAR_6,
    unsigned char VAR_7,
    struct ipmi_addr *VAR_8,
    struct ipmi_recv_msg **VAR_9)
{
 int VAR_10 = -VAR_1;
 unsigned long VAR_11;

 if (VAR_4 >= VAR_2)
  return -VAR_0;

 FUNC_1(&(VAR_3->seq_lock), VAR_11);
 if (VAR_3->seq_table[VAR_4].inuse) {
  struct ipmi_recv_msg *VAR_12 = VAR_3->seq_table[VAR_4].recv_msg;

  if ((VAR_12->addr.channel == VAR_5) && (VAR_12->msg.cmd == VAR_6)
    && (VAR_12->msg.netfn == VAR_7)
    && (FUNC_0(VAR_8, &(VAR_12->addr)))) {
   *VAR_9 = VAR_12;
   VAR_3->seq_table[VAR_4].inuse = 0;
   VAR_10 = 0;
  }
 }
 FUNC_2(&(VAR_3->seq_lock), VAR_11);

 return VAR_10;
}
