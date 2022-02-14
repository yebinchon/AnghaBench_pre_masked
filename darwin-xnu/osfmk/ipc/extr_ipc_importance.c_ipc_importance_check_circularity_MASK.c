
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct turnstile {int dummy; } ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
typedef scalar_t__ ipc_importance_task_t ;
typedef int boolean_t ;
struct TYPE_20__ {scalar_t__ ip_impdonation; int ip_impcount; scalar_t__ ip_receiver_name; scalar_t__ ip_tempowner; scalar_t__ ip_imp_task; int ip_messages; TYPE_1__* ip_receiver; struct TYPE_20__* ip_destination; } ;
struct TYPE_19__ {TYPE_16__* is_task; } ;
struct TYPE_18__ {scalar_t__ task_imp_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_16__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct turnstile* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,int,TYPE_2__*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 () ;
 int FUNC_24 (uintptr_t,int ,int *) ;
 struct turnstile* FUNC_25 (uintptr_t,int ,struct turnstile*,int ) ;
 int FUNC_26 (struct turnstile*,scalar_t__,int) ;
 int FUNC_27 (struct turnstile*,int ) ;

boolean_t
FUNC_28(
 ipc_port_t VAR_11,
 ipc_port_t VAR_12)
{
 ipc_importance_task_t VAR_13 = VAR_1;
 ipc_importance_task_t VAR_14 = VAR_1;
 boolean_t VAR_15 = VAR_0;
 int VAR_16 = 0;
 ipc_port_t VAR_17;
 struct turnstile *VAR_18 = VAR_9;

 FUNC_0(VAR_11 != VAR_2);
 FUNC_0(VAR_12 != VAR_2);

 if (VAR_11 == VAR_12)
  return VAR_5;
 VAR_17 = VAR_12;


 FUNC_20(VAR_12);


 if (VAR_11->ip_impdonation != 0) {
  VAR_15 = VAR_5;
  FUNC_8();
 }





 FUNC_4(VAR_11);





 if (VAR_11->ip_impcount > 0 && !VAR_15) {
  if (!FUNC_9()) {
   FUNC_7(VAR_11);
   FUNC_8();
   FUNC_4(VAR_11);
  }
  VAR_15 = VAR_5;
 }

 if (FUNC_5(VAR_12)) {
  if (!FUNC_3(VAR_12) ||
      (VAR_12->ip_receiver_name != VAR_3) ||
      (VAR_12->ip_destination == VAR_2))
   goto not_circular;



  FUNC_7(VAR_12);
 }
 FUNC_7(VAR_11);





 if (!VAR_15) {
  FUNC_8();
  VAR_15 = VAR_5;
 }

 FUNC_17();






 for (;;) {
  FUNC_4(VAR_17);

  if (!FUNC_3(VAR_17) ||
      (VAR_17->ip_receiver_name != VAR_3) ||
      (VAR_17->ip_destination == VAR_2))
   break;

  VAR_17 = VAR_17->ip_destination;
 }



 if (VAR_11 == VAR_17) {


  FUNC_18();



  FUNC_0(FUNC_3(VAR_11));
  FUNC_0(VAR_11->ip_receiver_name == VAR_3);
  FUNC_0(VAR_11->ip_destination == VAR_2);

  VAR_17 = VAR_12;
  while (VAR_17 != VAR_2) {
   ipc_port_t VAR_19;



   FUNC_0(FUNC_3(VAR_17));
   FUNC_0(VAR_17->ip_receiver_name == VAR_3);

   VAR_19 = VAR_17->ip_destination;
   FUNC_7(VAR_17);
   VAR_17 = VAR_19;
  }

  if (VAR_15)
   FUNC_15();

  FUNC_19(VAR_12);
  return VAR_5;
 }







 FUNC_4(VAR_11);
 FUNC_18();

not_circular:

 FUNC_1(&VAR_11->ip_messages);

 FUNC_0(FUNC_3(VAR_11));
 FUNC_0(VAR_11->ip_receiver_name == VAR_3);
 FUNC_0(VAR_11->ip_destination == VAR_2);

 FUNC_6(VAR_12);
 VAR_11->ip_destination = VAR_12;


 FUNC_0(VAR_11->ip_tempowner != 0);






 VAR_14 = VAR_11->ip_imp_task;
 if (VAR_1 != VAR_14) {
  VAR_11->ip_imp_task = VAR_1;
 }
 VAR_16 = VAR_11->ip_impcount;


 VAR_11->ip_tempowner = 0;






 if (FUNC_21(VAR_11)) {
  VAR_18 = FUNC_25((uintptr_t)VAR_11,
   FUNC_22(VAR_11),
   VAR_9, VAR_10);

  FUNC_26(VAR_18, FUNC_21(VAR_12),
   (VAR_7 | VAR_6));


 }
 FUNC_2(&VAR_11->ip_messages);



 FUNC_7(VAR_11);

 for (;;) {

  ipc_port_t VAR_20;

  FUNC_16(VAR_12, VAR_16, VAR_17);

  if (VAR_12 == VAR_17)
   break;



  FUNC_0(FUNC_3(VAR_12));
  FUNC_0(VAR_12->ip_receiver_name == VAR_3);
  FUNC_0(VAR_12->ip_destination != VAR_2);
  FUNC_0(VAR_12->ip_tempowner == 0);

  VAR_20 = VAR_12->ip_destination;
  FUNC_7(VAR_12);
  VAR_12 = VAR_20;
 }


 FUNC_0(!FUNC_3(VAR_17) ||
        (VAR_17->ip_receiver_name != VAR_3) ||
        (VAR_17->ip_destination == VAR_2));







 if (FUNC_3(VAR_17) && (VAR_16 > 0)) {
  FUNC_0(VAR_15);
  if (VAR_17->ip_tempowner != 0) {
   if (VAR_1 != VAR_17->ip_imp_task) {

    VAR_13 = VAR_17->ip_imp_task;
    FUNC_0(FUNC_12(VAR_13));
   }


  } else if (VAR_17->ip_receiver_name != VAR_3) {
   ipc_space_t VAR_21 = VAR_17->ip_receiver;


   if (VAR_21->is_task != VAR_4 &&
       FUNC_12(VAR_21->is_task->task_imp_base))
    VAR_13 = VAR_21->is_task->task_imp_base;
  }


  if (VAR_13 != VAR_1) {
   FUNC_13(VAR_13);
  }
 }

 FUNC_7(VAR_17);
 boolean_t VAR_22 = (VAR_13 != VAR_14);

 if (VAR_13 != VAR_1) {
  FUNC_0(VAR_15);
  if (VAR_22)
   FUNC_11(VAR_13, VAR_16);
 }

 if (VAR_14 != VAR_1) {
  FUNC_0(VAR_15);
  if (VAR_22)
   FUNC_10(VAR_14, VAR_16);
 }

 if (VAR_15)
  FUNC_15();


 if (VAR_18) {
  FUNC_27(VAR_18, VAR_8);


  FUNC_1(&VAR_11->ip_messages);
  FUNC_24((uintptr_t)VAR_11, FUNC_22(VAR_11), ((void*)0));
  VAR_18 = VAR_9;
  FUNC_2(&VAR_11->ip_messages);
  FUNC_23();
 }

 if (VAR_13 != VAR_1)
  FUNC_14(VAR_13);

 if (VAR_14 != VAR_1)
  FUNC_14(VAR_14);

 return VAR_0;
}
