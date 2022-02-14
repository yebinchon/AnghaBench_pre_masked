
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct label {int dummy; } ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ port; scalar_t__ privileged; } ;
struct TYPE_7__ {scalar_t__ ith_self; scalar_t__ inspection; scalar_t__ ith_sself; scalar_t__ ith_special_reply_port; TYPE_4__* exc_actions; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 struct label* FUNC_7 () ;
 int FUNC_8 (struct label*) ;
 int FUNC_9 (TYPE_4__*,struct label*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

void
FUNC_13(
 thread_t VAR_8)
{
 ipc_port_t VAR_9, VAR_10;
 ipc_port_t VAR_11;
 ipc_port_t VAR_12[VAR_0];
 boolean_t VAR_13 = VAR_1;
 int VAR_14;





 VAR_10 = FUNC_2();
 if (VAR_10 == VAR_6)
  FUNC_10("ipc_task_reset");

 FUNC_11(VAR_8);

 VAR_9 = VAR_8->ith_self;

 if (VAR_9 == VAR_6 && VAR_8->inspection == VAR_1) {

  FUNC_12(VAR_8);
  FUNC_3(VAR_10);



  return;
 }

 VAR_8->ith_self = VAR_10;
 VAR_11 = VAR_8->ith_sself;
 VAR_8->ith_sself = FUNC_4(VAR_10);
 if (VAR_9 != VAR_6) {
  FUNC_1(VAR_9, VAR_5, VAR_3);
 }
 FUNC_1(VAR_10, (ipc_kobject_t) VAR_8, VAR_4);





 if (VAR_8->exc_actions != ((void*)0)) {
  VAR_13 = VAR_7;
  for (VAR_14 = VAR_2; VAR_14 < VAR_0; VAR_14++) {
   if (VAR_8->exc_actions[VAR_14].privileged) {
    VAR_12[VAR_14] = VAR_6;
   } else {



    VAR_12[VAR_14] = VAR_8->exc_actions[VAR_14].port;
    VAR_8->exc_actions[VAR_14].port = VAR_6;
   }
  }
 }

 FUNC_12(VAR_8);







 if (FUNC_0(VAR_11))
  FUNC_5(VAR_11);

 if (VAR_13) {
  for (VAR_14 = VAR_2; VAR_14 < VAR_0; VAR_14++) {
   FUNC_5(VAR_12[VAR_14]);
  }
 }


 if (VAR_9 != VAR_6) {
  FUNC_3(VAR_9);
 }


 if (FUNC_0(VAR_8->ith_special_reply_port)) {
  FUNC_6(VAR_8, VAR_7);
 }
}
