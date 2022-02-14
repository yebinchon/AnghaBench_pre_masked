
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ControllerName; int * ControllerProcEntry; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int * VAR_0 ;
 int FUNC_0 (char*,int *) ;

__attribute__((used)) static void FUNC_1(DAC960_Controller_T *VAR_1)
{
      if (VAR_1->ControllerProcEntry == ((void*)0))
       return;
      FUNC_0("initial_status", VAR_1->ControllerProcEntry);
      FUNC_0("current_status", VAR_1->ControllerProcEntry);
      FUNC_0("user_command", VAR_1->ControllerProcEntry);
      FUNC_0(VAR_1->ControllerName, VAR_0);
      VAR_1->ControllerProcEntry = ((void*)0);
}
