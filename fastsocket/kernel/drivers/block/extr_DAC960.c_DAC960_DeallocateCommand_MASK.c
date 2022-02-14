
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Next; int * Request; TYPE_1__* Controller; } ;
struct TYPE_4__ {TYPE_2__* FreeCommands; } ;
typedef TYPE_1__ DAC960_Controller_T ;
typedef TYPE_2__ DAC960_Command_T ;



__attribute__((used)) static inline void FUNC_0(DAC960_Command_T *VAR_0)
{
  DAC960_Controller_T *VAR_1 = VAR_0->Controller;

  VAR_0->Request = ((void*)0);
  VAR_0->Next = VAR_1->FreeCommands;
  VAR_1->FreeCommands = VAR_0;
}
