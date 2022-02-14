
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef scalar_t__ uint64_t ;
typedef int * turnstile_inheritor_t ;
typedef TYPE_1__* thread_t ;
struct turnstile {int dummy; } ;
typedef scalar_t__ mach_msg_timeout_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_option_t ;
typedef TYPE_2__* ipc_port_t ;
typedef TYPE_3__* ipc_mqueue_t ;
typedef int * ipc_kmsg_queue_t ;
struct TYPE_27__ {int waitq_type; } ;
struct TYPE_26__ {TYPE_5__ imq_wait_queue; int imq_messages; int imq_set_queue; } ;
struct TYPE_25__ {scalar_t__ ip_specialreply; } ;
struct TYPE_24__ {int ith_option; int ith_state; scalar_t__ ith_msize; int ith_rsize; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct turnstile* VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int,int ,TYPE_1__*) ;
 int * FUNC_9 (TYPE_2__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 struct turnstile* FUNC_13 (uintptr_t,int ,struct turnstile*,int ) ;
 int FUNC_14 (struct turnstile*,int *,int) ;
 int FUNC_15 (struct turnstile*,int ) ;
 scalar_t__ FUNC_16 (TYPE_5__*,int ,int,int ,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_17 (int *,TYPE_3__**,int ) ;

wait_result_t
FUNC_18(
 ipc_mqueue_t VAR_21,
 mach_msg_option_t VAR_22,
 mach_msg_size_t VAR_23,
 mach_msg_timeout_t VAR_24,
 int VAR_25,
 thread_t VAR_26)
{
 wait_result_t VAR_27;
 uint64_t VAR_28;
 struct turnstile *VAR_29 = VAR_17;
 turnstile_inheritor_t VAR_30 = ((void*)0);





 if (!FUNC_4(VAR_21)) {

  FUNC_3(VAR_21);





  return VAR_11;
 }

 if (FUNC_2(VAR_21)) {
  ipc_mqueue_t VAR_31 = VAR_1;

  (void)FUNC_17(&VAR_21->imq_set_queue,
       &VAR_31,
                   VAR_20);

  if (VAR_31 != VAR_1) {
   FUNC_3(VAR_21);





   if (VAR_22 & VAR_4)
    FUNC_7(VAR_31, VAR_22, VAR_26);
   else
    FUNC_8(VAR_31, VAR_21, VAR_22,
           VAR_23, VAR_26);

   FUNC_3(VAR_31);
   return VAR_10;
  }
 } else if (FUNC_1(VAR_21)) {
  ipc_kmsg_queue_t VAR_32;




  VAR_32 = &VAR_21->imq_messages;
  if (FUNC_6(VAR_32) != VAR_0) {
   if (VAR_22 & VAR_4)
    FUNC_7(VAR_21, VAR_22, VAR_26);
   else
    FUNC_8(VAR_21, VAR_1, VAR_22,
           VAR_23, VAR_26);
   FUNC_3(VAR_21);
   return VAR_10;
  }
 } else {
  FUNC_10("Unknown mqueue type 0x%x: likely memory corruption!\n",
        VAR_21->imq_wait_queue.waitq_type);
 }






 if (VAR_22 & VAR_7) {
  if (VAR_24 == 0) {
   FUNC_3(VAR_21);
   VAR_26->ith_state = VAR_6;
   return VAR_10;
  }
 }

 VAR_26->ith_option = VAR_22;
 VAR_26->ith_rsize = VAR_23;
 VAR_26->ith_msize = 0;

 if (VAR_22 & VAR_4)
  VAR_26->ith_state = VAR_3;
 else
  VAR_26->ith_state = VAR_5;

 if (VAR_22 & VAR_7)
  FUNC_0(VAR_24, 1000*VAR_8, &VAR_28);
 else
  VAR_28 = 0;
 if (FUNC_1(VAR_21)) {
  ipc_port_t VAR_33 = FUNC_5(VAR_21);
  VAR_29 = FUNC_13((uintptr_t)VAR_33,
   FUNC_11(VAR_33),
   VAR_17, VAR_18);

  if (VAR_33->ip_specialreply) {
   VAR_30 = FUNC_9(VAR_33);
  }

  FUNC_14(VAR_29, VAR_30,
   (VAR_15 | VAR_14));
 }

 FUNC_12(VAR_26, VAR_19);
 VAR_27 = FUNC_16(&VAR_21->imq_wait_queue,
          VAR_2,
          VAR_25,
          VAR_13,
          VAR_28,
          VAR_12,
          VAR_26);

 if (VAR_27 == VAR_9)
  FUNC_10("ipc_mqueue_receive_on_thread: sleep walking");

 FUNC_3(VAR_21);


 if (VAR_29 != VAR_17) {
  FUNC_15(VAR_29, VAR_16);
 }


 return VAR_27;
}
