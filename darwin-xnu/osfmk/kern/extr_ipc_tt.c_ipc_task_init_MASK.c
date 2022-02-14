
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_2__* ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_16__ {int privileged; int behavior; int flavor; void* port; } ;
struct TYPE_15__ {TYPE_1__* is_task; } ;
struct TYPE_14__ {scalar_t__ itk_self; void* itk_task_access; void* itk_gssd; void* itk_seatbelt; void* itk_bootstrap; void* itk_host; TYPE_4__* exc_actions; void** itk_registered; TYPE_2__* itk_space; scalar_t__ itk_debug_control; scalar_t__ itk_sself; scalar_t__ itk_resume; scalar_t__ itk_nself; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__**) ;
 int * VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;

void
FUNC_15(
 task_t VAR_7,
 task_t VAR_8)
{
 ipc_space_t VAR_9;
 ipc_port_t VAR_10;
 ipc_port_t VAR_11;
 kern_return_t VAR_12;
 int VAR_13;


 VAR_12 = FUNC_6(&VAR_6[0], &VAR_9);
 if (VAR_12 != VAR_3)
  FUNC_13("ipc_task_init");

 VAR_9->is_task = VAR_7;

 VAR_10 = FUNC_3();
 if (VAR_10 == VAR_2)
  FUNC_13("ipc_task_init");

 VAR_11 = FUNC_3();
 if (VAR_11 == VAR_2)
  FUNC_13("ipc_task_init");

 FUNC_8(VAR_7);
 VAR_7->itk_self = VAR_10;
 VAR_7->itk_nself = VAR_11;
 VAR_7->itk_resume = VAR_2;
 if (FUNC_14(VAR_7)) {




  VAR_7->itk_sself = VAR_2;
 } else {
  VAR_7->itk_sself = FUNC_5(VAR_10);
 }
 VAR_7->itk_debug_control = VAR_2;
 VAR_7->itk_space = VAR_9;







 if (VAR_8 == VAR_4) {
  ipc_port_t VAR_14;

  for (VAR_13 = VAR_1; VAR_13 < VAR_0; VAR_13++) {
   VAR_7->exc_actions[VAR_13].port = VAR_2;
  }

  VAR_12 = FUNC_1(FUNC_2(), &VAR_14);
  FUNC_0(VAR_12 == VAR_3);
  VAR_7->itk_host = VAR_14;

  VAR_7->itk_bootstrap = VAR_2;
  VAR_7->itk_seatbelt = VAR_2;
  VAR_7->itk_gssd = VAR_2;
  VAR_7->itk_task_access = VAR_2;

  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
   VAR_7->itk_registered[VAR_13] = VAR_2;
 } else {
  FUNC_7(VAR_8);
  FUNC_0(VAR_8->itk_self != VAR_2);



  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
   VAR_7->itk_registered[VAR_13] =
    FUNC_4(VAR_8->itk_registered[VAR_13]);



  for (VAR_13 = VAR_1; VAR_13 < VAR_0; VAR_13++) {
      VAR_7->exc_actions[VAR_13].port =
      FUNC_4(VAR_8->exc_actions[VAR_13].port);
      VAR_7->exc_actions[VAR_13].flavor =
    VAR_8->exc_actions[VAR_13].flavor;
      VAR_7->exc_actions[VAR_13].behavior =
    VAR_8->exc_actions[VAR_13].behavior;
      VAR_7->exc_actions[VAR_13].privileged =
    VAR_8->exc_actions[VAR_13].privileged;



  }
  VAR_7->itk_host =
   FUNC_4(VAR_8->itk_host);

  VAR_7->itk_bootstrap =
   FUNC_4(VAR_8->itk_bootstrap);

  VAR_7->itk_seatbelt =
   FUNC_4(VAR_8->itk_seatbelt);

  VAR_7->itk_gssd =
   FUNC_4(VAR_8->itk_gssd);

  VAR_7->itk_task_access =
   FUNC_4(VAR_8->itk_task_access);

  FUNC_9(VAR_8);
 }
}
