
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* U32 ;
typedef int TaskInfo ;
struct TYPE_4__ {char const* sName; unsigned int Prio; unsigned int StackSize; void* StackBase; void* TaskID; } ;
typedef TYPE_1__ SEGGER_SYSVIEW_TASKINFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(U32 VAR_0, const char* VAR_1, unsigned VAR_2, U32 VAR_3, unsigned VAR_4) {
  SEGGER_SYSVIEW_TASKINFO VAR_5;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.TaskID = VAR_0;
  VAR_5.sName = VAR_1;
  VAR_5.Prio = VAR_2;
  VAR_5.StackBase = VAR_3;
  VAR_5.StackSize = VAR_4;
  FUNC_0(&VAR_5);
}
