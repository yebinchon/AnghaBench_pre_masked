
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef int mach_port_name_t ;
typedef int ipc_port_t ;
struct TYPE_9__ {TYPE_1__* task; } ;
struct TYPE_8__ {int itk_space; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;

thread_t
FUNC_7(mach_port_name_t VAR_3)
{
 thread_t VAR_4 = VAR_2;
 thread_t VAR_5 = FUNC_1();




 if (VAR_3 != VAR_1) {
  ipc_port_t VAR_6;

  if (FUNC_5(VAR_5->task->itk_space,
                              VAR_3, &VAR_6) == VAR_0) {
   FUNC_2(VAR_6);
   FUNC_4(VAR_6);

   VAR_4 = FUNC_0(VAR_6);
   FUNC_3(VAR_6);

   if (VAR_4 == VAR_2) {
    return VAR_4;
   }

   if ((VAR_4 == VAR_5) || (VAR_4->task != VAR_5->task)) {
    FUNC_6(VAR_4);
    VAR_4 = VAR_2;
   }
  }
 }

 return VAR_4;
}
