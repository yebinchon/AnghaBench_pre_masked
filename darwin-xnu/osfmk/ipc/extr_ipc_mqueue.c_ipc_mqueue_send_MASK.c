
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int turnstile_inheritor_t ;
typedef int thread_t ;
struct turnstile {int ts_waitq; } ;
typedef scalar_t__ mach_msg_timeout_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_option_t ;
typedef TYPE_2__* ipc_port_t ;
typedef TYPE_3__* ipc_mqueue_t ;
typedef TYPE_4__* ipc_kmsg_t ;
struct TYPE_21__ {TYPE_1__* ikm_header; } ;
struct TYPE_20__ {scalar_t__ imq_msgcount; int imq_fullwaiters; } ;
struct TYPE_19__ {scalar_t__ ip_receiver_name; int * ip_destination; } ;
struct TYPE_18__ {int msgh_bits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct turnstile* VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int) ;
 int VAR_23 ;
 int FUNC_2 (scalar_t__,int,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_24 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (uintptr_t,int ,int *) ;
 struct turnstile* FUNC_20 (uintptr_t,int ,struct turnstile*,int ) ;
 int FUNC_21 (struct turnstile*,int ,int) ;
 int FUNC_22 (struct turnstile*,int ) ;
 int FUNC_23 (int *,int ,int ,int ,scalar_t__,int ) ;

mach_msg_return_t
FUNC_24(
 ipc_mqueue_t VAR_25,
 ipc_kmsg_t VAR_26,
 mach_msg_option_t VAR_27,
 mach_msg_timeout_t VAR_28)
{
 int VAR_29;







 if (!FUNC_5(VAR_25) ||
     (!FUNC_6(VAR_25) &&
      ((VAR_27 & VAR_4) ||
       (FUNC_0(VAR_26->ikm_header->msgh_bits) ==
        VAR_2)))) {
  VAR_25->imq_msgcount++;
  FUNC_1(VAR_25->imq_msgcount > 0);
  FUNC_8(VAR_25);
 } else {
  thread_t VAR_30 = FUNC_4();
  ipc_port_t VAR_31 = FUNC_10(VAR_25);
  struct turnstile *VAR_32 = VAR_21;
  turnstile_inheritor_t VAR_33 = VAR_18;
  uint64_t VAR_34;




  if ((VAR_27 & VAR_9) && (VAR_28 == 0)) {
   FUNC_8(VAR_25);
   return VAR_8;
  }
  if (FUNC_6(VAR_25)) {
   FUNC_8(VAR_25);
   return VAR_7;
  }
  VAR_25->imq_fullwaiters = VAR_16;

  if (VAR_27 & VAR_9)
   FUNC_2(VAR_28, 1000*VAR_10, &VAR_34);
  else
   VAR_34 = 0;

  FUNC_17(VAR_30, VAR_24);

  VAR_32 = FUNC_20((uintptr_t)VAR_31,
   FUNC_15(VAR_31),
   VAR_21, VAR_22);


  if (FUNC_9(VAR_31) &&
      VAR_31->ip_receiver_name == VAR_3 &&
      VAR_31->ip_destination != ((void*)0)) {
   VAR_33 = FUNC_14(VAR_31->ip_destination);
  } else {
   VAR_33 = FUNC_12(VAR_31);
  }

  FUNC_21(VAR_32, VAR_33,
    VAR_17 | VAR_19);

  VAR_29 = FUNC_23(
     &VAR_32->ts_waitq,
     VAR_0,
     VAR_11,
     VAR_15,
     VAR_34,
     VAR_14);

  FUNC_8(VAR_25);
  FUNC_22(VAR_32,
    VAR_20);

  if (VAR_29 == VAR_13) {
   VAR_29 = FUNC_16(VAR_12);
   FUNC_3(VAR_23++);
  }


  FUNC_7(VAR_25);
  FUNC_19((uintptr_t)VAR_31, FUNC_15(VAR_31), ((void*)0));
  FUNC_8(VAR_25);


  FUNC_18();

  switch (VAR_29) {

  case 131:





   break;

  case 128:
   FUNC_1(VAR_27 & VAR_9);
   return VAR_8;

  case 130:
   return VAR_5;

  case 129:

   return VAR_6;
  default:
   FUNC_13("ipc_mqueue_send");
  }
 }

 FUNC_11(VAR_25, VAR_26, VAR_27);
 return VAR_1;
}
