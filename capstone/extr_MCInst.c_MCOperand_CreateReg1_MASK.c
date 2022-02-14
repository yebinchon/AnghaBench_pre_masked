
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Operands; } ;
struct TYPE_5__ {unsigned int RegVal; int Kind; } ;
typedef TYPE_1__ MCOperand ;
typedef TYPE_2__ MCInst ;


 size_t VAR_0 ;
 int VAR_1 ;

MCOperand *FUNC_0(MCInst *VAR_2, unsigned VAR_3)
{
 MCOperand *VAR_4 = &(VAR_2->Operands[VAR_0]);

 VAR_4->Kind = VAR_1;
 VAR_4->RegVal = VAR_3;

 return VAR_4;
}
