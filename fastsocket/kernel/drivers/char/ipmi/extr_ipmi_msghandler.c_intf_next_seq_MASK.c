
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipmi_recv_msg {int dummy; } ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_5__ {unsigned int curr_seq; TYPE_1__* seq_table; } ;
struct TYPE_4__ {int inuse; unsigned long orig_timeout; int retries_left; int broadcast; long seqid; int timeout; struct ipmi_recv_msg* recv_msg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (long) ;

__attribute__((used)) static int FUNC_1(ipmi_smi_t VAR_3,
    struct ipmi_recv_msg *VAR_4,
    unsigned long VAR_5,
    int VAR_6,
    int VAR_7,
    unsigned char *VAR_8,
    long *VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11;

 for (VAR_11 = VAR_3->curr_seq; (VAR_11+1)%VAR_1 != VAR_3->curr_seq;
     VAR_11 = (VAR_11+1)%VAR_1) {
  if (!VAR_3->seq_table[VAR_11].inuse)
   break;
 }

 if (!VAR_3->seq_table[VAR_11].inuse) {
  VAR_3->seq_table[VAR_11].recv_msg = VAR_4;





  VAR_3->seq_table[VAR_11].timeout = VAR_2;
  VAR_3->seq_table[VAR_11].orig_timeout = VAR_5;
  VAR_3->seq_table[VAR_11].retries_left = VAR_6;
  VAR_3->seq_table[VAR_11].broadcast = VAR_7;
  VAR_3->seq_table[VAR_11].inuse = 1;
  VAR_3->seq_table[VAR_11].seqid = FUNC_0(VAR_3->seq_table[VAR_11].seqid);
  *VAR_8 = VAR_11;
  *VAR_9 = VAR_3->seq_table[VAR_11].seqid;
  VAR_3->curr_seq = (VAR_11+1)%VAR_1;
 } else {
  VAR_10 = -VAR_0;
 }

 return VAR_10;
}
