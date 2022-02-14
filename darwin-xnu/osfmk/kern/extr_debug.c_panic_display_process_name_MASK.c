
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* task_t ;
typedef int proc_name ;
typedef int cbsd_info ;
struct TYPE_4__ {int task; } ;
struct TYPE_3__ {int bsd_info; } ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (void*) ;

__attribute__((used)) static void
FUNC_4(void) {

 char VAR_0[17] = "Unknown";
 task_t VAR_1 = 0;
 void *VAR_2 = 0;

 if (FUNC_1((vm_offset_t)&FUNC_0()->task, (vm_offset_t) &VAR_1, sizeof(task_t)) == sizeof(task_t))
  if(FUNC_1((vm_offset_t)&VAR_1->bsd_info, (vm_offset_t)&VAR_2, sizeof(VAR_2)) == sizeof(VAR_2))
   if (VAR_2 && (FUNC_1((vm_offset_t) FUNC_3(VAR_2), (vm_offset_t) &VAR_0, sizeof(VAR_0)) > 0))
    VAR_0[sizeof(VAR_0) - 1] = '\0';
 FUNC_2("\nBSD process name corresponding to current thread: %s\n", VAR_0);
}
