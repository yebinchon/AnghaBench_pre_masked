
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct label {int dummy; } ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;
struct TYPE_8__ {scalar_t__ port; int privileged; } ;
struct TYPE_7__ {scalar_t__ itk_self; scalar_t__ itk_sself; int exec_token; scalar_t__ itk_debug_control; TYPE_3__* exc_actions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 struct label* FUNC_11 () ;
 int FUNC_12 (struct label*) ;
 int FUNC_13 (TYPE_3__*,struct label*) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;

void
FUNC_16(
 task_t VAR_7)
{
 ipc_port_t VAR_8, VAR_9;
 ipc_port_t VAR_10;
 ipc_port_t VAR_11[VAR_1];
 int VAR_12;






 VAR_9 = FUNC_5();
 if (VAR_9 == VAR_6)
  FUNC_14("ipc_task_reset");

 FUNC_9(VAR_7);

 VAR_8 = VAR_7->itk_self;

 if (VAR_8 == VAR_6) {

  FUNC_10(VAR_7);
  FUNC_6(VAR_9);



  return;
 }

 VAR_7->itk_self = VAR_9;
 VAR_10 = VAR_7->itk_sself;
 VAR_7->itk_sself = FUNC_7(VAR_9);


 FUNC_1(VAR_8);
 FUNC_4(VAR_8, VAR_5, VAR_3);
 VAR_7->exec_token += 1;
 FUNC_2(VAR_8);

 FUNC_3(VAR_9, (ipc_kobject_t) VAR_7, VAR_4);

 for (VAR_12 = VAR_2; VAR_12 < VAR_1; VAR_12++) {
  VAR_11[VAR_12] = VAR_6;

  if (VAR_12 == VAR_0 && FUNC_15(VAR_7)) {
   continue;
  }

  if (!VAR_7->exc_actions[VAR_12].privileged) {



   VAR_11[VAR_12] = VAR_7->exc_actions[VAR_12].port;
   VAR_7->exc_actions[VAR_12].port = VAR_6;
  }
 }

 if (FUNC_0(VAR_7->itk_debug_control)) {
  FUNC_8(VAR_7->itk_debug_control);
 }
 VAR_7->itk_debug_control = VAR_6;

 FUNC_10(VAR_7);







 if (FUNC_0(VAR_10))
  FUNC_8(VAR_10);

 for (VAR_12 = VAR_2; VAR_12 < VAR_1; VAR_12++) {
  if (FUNC_0(VAR_11[VAR_12])) {
   FUNC_8(VAR_11[VAR_12]);
  }
 }


 FUNC_6(VAR_8);
}
