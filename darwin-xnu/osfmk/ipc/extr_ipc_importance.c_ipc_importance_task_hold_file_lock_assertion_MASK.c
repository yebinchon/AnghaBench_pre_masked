
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* ipc_importance_task_t ;
struct TYPE_5__ {int iit_filelocks; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

kern_return_t
FUNC_4(ipc_importance_task_t VAR_1, uint32_t VAR_2)
{
 kern_return_t VAR_3 = VAR_0;

 if (FUNC_2(VAR_1)) {
  FUNC_0();
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_0 == VAR_3) {
   VAR_1->iit_filelocks += VAR_2;
  }
  FUNC_3();
 }
 return VAR_3;
}
