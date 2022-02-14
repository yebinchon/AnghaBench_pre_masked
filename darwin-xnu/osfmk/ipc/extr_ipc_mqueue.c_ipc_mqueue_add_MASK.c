
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef int mach_node_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef TYPE_3__* ipc_kmsg_t ;
typedef int * ipc_kmsg_queue_t ;
struct TYPE_24__ {int ikm_node; } ;
struct TYPE_23__ {int imq_fport; int imq_seqno; int imq_receiver_name; int imq_messages; struct waitq_set imq_set_queue; struct waitq imq_wait_queue; } ;
struct TYPE_22__ {scalar_t__ ith_state; int ith_option; scalar_t__ ith_rsize; scalar_t__ ith_seqno; TYPE_3__* ith_kmsg; int ith_receiver_name; scalar_t__ ith_msize; int map; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (struct waitq*,struct waitq_set*,int ,scalar_t__*) ;
 TYPE_1__* FUNC_17 (struct waitq*,int ,int ,int *,scalar_t__*,int ,int ) ;
 int FUNC_18 (struct waitq_set*) ;

kern_return_t
FUNC_19(
 ipc_mqueue_t VAR_15,
 ipc_mqueue_t VAR_16,
 uint64_t *VAR_17,
 uint64_t *VAR_18)
{
 struct waitq *VAR_19 = &VAR_15->imq_wait_queue;
 struct waitq_set *VAR_20 = &VAR_16->imq_set_queue;
 ipc_kmsg_queue_t VAR_21;
 ipc_kmsg_t VAR_22, VAR_23;
 kern_return_t VAR_24;

 FUNC_3(VAR_17 && *VAR_17 != 0);
 FUNC_3(FUNC_18(VAR_20));

 FUNC_5(VAR_15);





 VAR_24 = FUNC_16(VAR_19, VAR_20, VAR_13, VAR_17);
 if (VAR_24 != VAR_3) {
  FUNC_6(VAR_15);
  return VAR_24;
 }






 VAR_21 = &VAR_15->imq_messages;
 for (VAR_22 = FUNC_8(VAR_21);
      VAR_22 != VAR_0;
      VAR_22 = VAR_23) {
  VAR_23 = FUNC_9(VAR_21, VAR_22);

  for (;;) {
   thread_t VAR_25;
   mach_msg_size_t VAR_26;
   spl_t VAR_27;

   VAR_25 = FUNC_17(
      VAR_19,
      VAR_2,
      VAR_9, &VAR_27,
      VAR_18, VAR_12,
      VAR_14);


   if (VAR_25 == VAR_10)
    goto leave;







   if (VAR_25->ith_state != VAR_6) {
    if (VAR_25->ith_state == VAR_5) {






     FUNC_11(VAR_15,
          VAR_25->ith_option,
          VAR_25);
    }
    FUNC_15(VAR_25);
    FUNC_13(VAR_27);
    continue;
   }
   VAR_26 = FUNC_7(VAR_22, VAR_25->map);
   if (VAR_25->ith_rsize <
     (VAR_26 + FUNC_2(FUNC_14(VAR_25), VAR_25->ith_option))) {
    VAR_25->ith_state = VAR_8;
    VAR_25->ith_msize = VAR_26;
    if (VAR_25->ith_option & VAR_7) {



     VAR_25->ith_receiver_name = VAR_15->imq_receiver_name;
     VAR_25->ith_kmsg = VAR_0;
     VAR_25->ith_seqno = 0;
     FUNC_15(VAR_25);
     FUNC_13(VAR_27);
     continue;
    }
   } else {
    VAR_25->ith_state = VAR_4;
   }





   FUNC_10(VAR_21, VAR_22);



   FUNC_12(VAR_15, VAR_1);

   VAR_25->ith_kmsg = VAR_22;
   VAR_25->ith_seqno = VAR_15->imq_seqno++;
   FUNC_15(VAR_25);
   FUNC_13(VAR_27);




   break;
  }
 }
 leave:
 FUNC_6(VAR_15);
 return VAR_3;
}
