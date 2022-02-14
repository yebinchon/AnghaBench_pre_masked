
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_4__ {char* ControllerName; int ControllerNumber; struct proc_dir_entry* ControllerProcEntry; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct proc_dir_entry* FUNC_0 (char*,int ,int *,int *) ;
 struct proc_dir_entry* FUNC_1 (char*,int,struct proc_dir_entry*,int *,TYPE_1__*) ;
 void* FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(DAC960_Controller_T *VAR_7)
{
 struct proc_dir_entry *VAR_8;
 struct proc_dir_entry *VAR_9;
 struct proc_dir_entry *VAR_10;

 if (VAR_0 == ((void*)0)) {
    VAR_0 = FUNC_2("rd", ((void*)0));
    VAR_8 = FUNC_0("status", 0,
        VAR_0,
        &VAR_5);
 }

      FUNC_3(VAR_7->ControllerName, "c%d", VAR_7->ControllerNumber);
      VAR_9 = FUNC_2(VAR_7->ControllerName,
           VAR_0);
      FUNC_1("initial_status", 0, VAR_9, &VAR_4, VAR_7);
      FUNC_1("current_status", 0, VAR_9, &VAR_3, VAR_7);
      VAR_10 = FUNC_1("user_command", VAR_2 | VAR_1, VAR_9, &VAR_6, VAR_7);
      VAR_7->ControllerProcEntry = VAR_9;
}
