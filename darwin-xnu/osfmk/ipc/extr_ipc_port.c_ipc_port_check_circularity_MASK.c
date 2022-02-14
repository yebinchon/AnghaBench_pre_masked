
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct turnstile {int dummy; } ;
typedef TYPE_1__* ipc_port_t ;
typedef int boolean_t ;
struct TYPE_16__ {scalar_t__ ip_receiver_name; int ip_messages; struct TYPE_16__* ip_destination; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct turnstile* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 () ;
 int FUNC_16 (uintptr_t,int ,int *) ;
 struct turnstile* FUNC_17 (uintptr_t,int ,struct turnstile*,int ) ;
 int FUNC_18 (struct turnstile*,scalar_t__,int) ;
 int FUNC_19 (struct turnstile*,int ) ;

boolean_t
FUNC_20(
 ipc_port_t VAR_9,
 ipc_port_t VAR_10)
{




 ipc_port_t VAR_11;

 FUNC_0(VAR_9 != VAR_1);
 FUNC_0(VAR_10 != VAR_1);

 if (VAR_9 == VAR_10)
  return VAR_3;
 VAR_11 = VAR_10;


 FUNC_12(VAR_10);





 FUNC_4(VAR_9);
 if (FUNC_5(VAR_10)) {
  if (!FUNC_3(VAR_10) ||
      (VAR_10->ip_receiver_name != VAR_2) ||
      (VAR_10->ip_destination == VAR_1))
   goto not_circular;



  FUNC_7(VAR_10);
 }
 FUNC_7(VAR_9);

 FUNC_9();






 for (;;) {
  FUNC_4(VAR_11);

  if (!FUNC_3(VAR_11) ||
      (VAR_11->ip_receiver_name != VAR_2) ||
      (VAR_11->ip_destination == VAR_1))
   break;

  VAR_11 = VAR_11->ip_destination;
 }



 if (VAR_9 == VAR_11) {


  FUNC_10();



  FUNC_0(FUNC_3(VAR_9));
  FUNC_0(VAR_9->ip_receiver_name == VAR_2);
  FUNC_0(VAR_9->ip_destination == VAR_1);

  VAR_11 = VAR_10;
  while (VAR_11 != VAR_1) {
   ipc_port_t VAR_12;



   FUNC_0(FUNC_3(VAR_11));
   FUNC_0(VAR_11->ip_receiver_name == VAR_2);

   VAR_12 = VAR_11->ip_destination;
   FUNC_7(VAR_11);
   VAR_11 = VAR_12;
  }

  FUNC_11(VAR_10);
  return VAR_3;
 }







 FUNC_4(VAR_9);
 FUNC_10();

not_circular:
 FUNC_1(&VAR_9->ip_messages);



 FUNC_0(FUNC_3(VAR_9));
 FUNC_0(VAR_9->ip_receiver_name == VAR_2);
 FUNC_0(VAR_9->ip_destination == VAR_1);

 FUNC_6(VAR_10);
 VAR_9->ip_destination = VAR_10;


 struct turnstile *VAR_13 = VAR_7;
 if (FUNC_13(VAR_9)) {
  VAR_13 = FUNC_17((uintptr_t)VAR_9,
   FUNC_14(VAR_9),
   VAR_7, VAR_8);

  FUNC_18(VAR_13, FUNC_13(VAR_10),
   (VAR_5 | VAR_4));


 }
 FUNC_2(&VAR_9->ip_messages);



 FUNC_7(VAR_9);

 for (;;) {
  ipc_port_t VAR_14;

  if (VAR_10 == VAR_11)
   break;



  FUNC_0(FUNC_3(VAR_10));
  FUNC_0(VAR_10->ip_receiver_name == VAR_2);
  FUNC_0(VAR_10->ip_destination != VAR_1);

  VAR_14 = VAR_10->ip_destination;
  FUNC_7(VAR_10);
  VAR_10 = VAR_14;
 }


 FUNC_0(!FUNC_3(VAR_11) ||
        (VAR_11->ip_receiver_name != VAR_2) ||
        (VAR_11->ip_destination == VAR_1));

 FUNC_7(VAR_11);


 if (VAR_13) {
  FUNC_19(VAR_13, VAR_6);


  FUNC_1(&VAR_9->ip_messages);
  FUNC_16((uintptr_t)VAR_9, FUNC_14(VAR_9), ((void*)0));
  VAR_13 = VAR_7;
  FUNC_2(&VAR_9->ip_messages);
  FUNC_15();
 }

 return VAR_0;

}
