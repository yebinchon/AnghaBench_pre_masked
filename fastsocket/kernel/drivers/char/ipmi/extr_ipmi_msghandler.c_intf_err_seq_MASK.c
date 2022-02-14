
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_table {unsigned long seqid; struct ipmi_recv_msg* recv_msg; scalar_t__ inuse; } ;
struct ipmi_recv_msg {int dummy; } ;
typedef TYPE_1__* ipmi_smi_t ;
struct TYPE_3__ {int seq_lock; struct seq_table* seq_table; } ;


 int VAR_0 ;
 int FUNC_0 (long,unsigned char,unsigned long) ;
 int FUNC_1 (struct ipmi_recv_msg*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(ipmi_smi_t VAR_1,
   long VAR_2,
   unsigned int VAR_3)
{
 int VAR_4 = -VAR_0;
 unsigned long VAR_5;
 unsigned char VAR_6;
 unsigned long VAR_7;
 struct ipmi_recv_msg *VAR_8 = ((void*)0);


 FUNC_0(VAR_2, VAR_6, VAR_7);

 FUNC_2(&(VAR_1->seq_lock), VAR_5);




 if ((VAR_1->seq_table[VAR_6].inuse)
    && (VAR_1->seq_table[VAR_6].seqid == VAR_7)) {
  struct seq_table *VAR_9 = &(VAR_1->seq_table[VAR_6]);

  VAR_9->inuse = 0;
  VAR_8 = VAR_9->recv_msg;
  VAR_4 = 0;
 }
 FUNC_3(&(VAR_1->seq_lock), VAR_5);

 if (VAR_8)
  FUNC_1(VAR_8, VAR_3);

 return VAR_4;
}
