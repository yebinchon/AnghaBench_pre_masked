
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * Operands; } ;
typedef int MCOperand ;
typedef TYPE_1__ MCInst ;



void FUNC_0(MCInst *VAR_0, int VAR_1, MCOperand *VAR_2)
{
 int VAR_3;

 for(VAR_3 = VAR_0->size; VAR_3 > VAR_1; VAR_3--)

  VAR_0->Operands[VAR_3] = VAR_0->Operands[VAR_3-1];

 VAR_0->Operands[VAR_1] = *VAR_2;
 VAR_0->size++;
}
