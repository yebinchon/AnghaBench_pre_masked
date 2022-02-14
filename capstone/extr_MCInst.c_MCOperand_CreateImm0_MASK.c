
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {size_t size; TYPE_1__* Operands; } ;
struct TYPE_4__ {int ImmVal; int Kind; } ;
typedef TYPE_1__ MCOperand ;
typedef TYPE_2__ MCInst ;


 int VAR_0 ;

void FUNC_0(MCInst *VAR_1, int64_t VAR_2)
{
 MCOperand *VAR_3 = &(VAR_1->Operands[VAR_1->size]);
 VAR_1->size++;

 VAR_3->Kind = VAR_0;
 VAR_3->ImmVal = VAR_2;
}
