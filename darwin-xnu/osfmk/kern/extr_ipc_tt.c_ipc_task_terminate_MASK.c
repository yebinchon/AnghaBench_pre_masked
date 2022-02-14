
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_8__ {int port; } ;
struct TYPE_7__ {scalar_t__ itk_self; scalar_t__ itk_nself; scalar_t__ itk_resume; int * itk_registered; int itk_debug_control; int itk_task_access; int itk_gssd; int itk_seatbelt; int itk_bootstrap; int itk_host; TYPE_2__* exc_actions; int itk_sself; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(
 task_t VAR_4)
{
 ipc_port_t VAR_5;
 ipc_port_t VAR_6;
 ipc_port_t VAR_7;
 int VAR_8;

 FUNC_4(VAR_4);
 VAR_5 = VAR_4->itk_self;

 if (VAR_5 == VAR_2) {

  FUNC_6(VAR_4);
  return;
 }
 VAR_4->itk_self = VAR_2;

 VAR_6 = VAR_4->itk_nself;
 FUNC_1(VAR_6 != VAR_2);
 VAR_4->itk_nself = VAR_2;

 VAR_7 = VAR_4->itk_resume;
 VAR_4->itk_resume = VAR_2;

 FUNC_6(VAR_4);



 if (FUNC_0(VAR_4->itk_sself))
  FUNC_3(VAR_4->itk_sself);

 for (VAR_8 = VAR_1; VAR_8 < VAR_0; VAR_8++) {
  if (FUNC_0(VAR_4->exc_actions[VAR_8].port)) {
   FUNC_3(VAR_4->exc_actions[VAR_8].port);
  }



 }

 if (FUNC_0(VAR_4->itk_host))
  FUNC_3(VAR_4->itk_host);

 if (FUNC_0(VAR_4->itk_bootstrap))
  FUNC_3(VAR_4->itk_bootstrap);

 if (FUNC_0(VAR_4->itk_seatbelt))
  FUNC_3(VAR_4->itk_seatbelt);

 if (FUNC_0(VAR_4->itk_gssd))
  FUNC_3(VAR_4->itk_gssd);

 if (FUNC_0(VAR_4->itk_task_access))
  FUNC_3(VAR_4->itk_task_access);

 if (FUNC_0(VAR_4->itk_debug_control))
  FUNC_3(VAR_4->itk_debug_control);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  if (FUNC_0(VAR_4->itk_registered[VAR_8]))
   FUNC_3(VAR_4->itk_registered[VAR_8]);


 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 if (VAR_7 != VAR_2)
  FUNC_2(VAR_7);

 FUNC_5(VAR_4);
}
