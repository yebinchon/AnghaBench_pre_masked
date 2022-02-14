
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_importance_task_t ;
struct TYPE_5__ {scalar_t__ iit_filelocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

kern_return_t
FUNC_4(ipc_importance_task_t VAR_2, uint32_t VAR_3)
{
 kern_return_t VAR_4 = VAR_1;

 if (FUNC_2(VAR_2)) {
  FUNC_0();
  if (VAR_3 <= VAR_2->iit_filelocks) {
   VAR_2->iit_filelocks -= VAR_3;
   VAR_4 = FUNC_1(VAR_2, VAR_3);
  } else {
   VAR_4 = VAR_0;
  }
  FUNC_3();
 }
 return VAR_4;
}
