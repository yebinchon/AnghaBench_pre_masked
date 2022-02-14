
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef void* mach_msg_return_t ;
typedef int mach_msg_option_t ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef TYPE_3__* ipc_kmsg_t ;
struct TYPE_19__ {int ikm_node; } ;
struct TYPE_18__ {int imq_seqno; int imq_fport; int imq_messages; int imq_receiver_name; } ;
struct TYPE_17__ {void* ith_state; TYPE_3__* ith_kmsg; scalar_t__ ith_seqno; scalar_t__ ith_msize; int ith_receiver_name; int map; } ;
struct TYPE_16__ {int messages_received; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 TYPE_14__* FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(
 ipc_mqueue_t VAR_5,
 ipc_mqueue_t VAR_6,
 mach_msg_option_t VAR_7,
 mach_msg_size_t VAR_8,
 thread_t VAR_9)
{
 ipc_kmsg_t VAR_10;
 mach_msg_return_t VAR_11 = VAR_1;
 mach_msg_size_t VAR_12;





 VAR_10 = FUNC_7(&VAR_5->imq_messages);
 FUNC_3(VAR_10 != VAR_0);







 VAR_12 = FUNC_6(VAR_10, VAR_9->map);
 if (VAR_12 + FUNC_2(FUNC_10(VAR_9), VAR_7) > VAR_8) {
  VAR_11 = VAR_3;
  if (VAR_7 & VAR_2) {
   VAR_9->ith_receiver_name = VAR_5->imq_receiver_name;
   VAR_9->ith_kmsg = VAR_0;
   VAR_9->ith_msize = VAR_12;
   VAR_9->ith_seqno = 0;
   VAR_9->ith_state = VAR_11;
   return;
  }
 }

 FUNC_8(&VAR_5->imq_messages, VAR_10);




 FUNC_9(VAR_5, VAR_6);
 VAR_9->ith_seqno = VAR_5->imq_seqno++;
 VAR_9->ith_kmsg = VAR_10;
 VAR_9->ith_state = VAR_11;

 FUNC_4()->messages_received++;
 return;
}
