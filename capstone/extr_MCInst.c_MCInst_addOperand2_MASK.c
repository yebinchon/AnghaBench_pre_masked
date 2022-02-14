
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int * Operands; } ;
typedef int MCOperand ;
typedef TYPE_1__ MCInst ;



void FUNC_0(MCInst *VAR_0, MCOperand *VAR_1)
{
 VAR_0->Operands[VAR_0->size] = *VAR_1;

 VAR_0->size++;
}
