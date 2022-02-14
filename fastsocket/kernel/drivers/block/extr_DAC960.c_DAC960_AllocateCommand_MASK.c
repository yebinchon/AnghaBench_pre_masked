
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Next; } ;
struct TYPE_5__ {TYPE_2__* FreeCommands; } ;
typedef TYPE_1__ DAC960_Controller_T ;
typedef TYPE_2__ DAC960_Command_T ;



__attribute__((used)) static inline DAC960_Command_T *FUNC_0(DAC960_Controller_T
             *VAR_0)
{
  DAC960_Command_T *VAR_1 = VAR_0->FreeCommands;
  if (VAR_1 == ((void*)0)) return ((void*)0);
  VAR_0->FreeCommands = VAR_1->Next;
  VAR_1->Next = ((void*)0);
  return VAR_1;
}
