
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int has_imm; int writeback; char* assembly; scalar_t__ popcode_adjust; scalar_t__ ac_idx; scalar_t__ op1_size; scalar_t__ size; scalar_t__ OpcodePub; scalar_t__ Opcode; TYPE_1__* Operands; } ;
struct TYPE_4__ {int Kind; } ;
typedef TYPE_2__ MCInst ;


 int VAR_0 ;

void FUNC_0(MCInst *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < 48; VAR_2++) {
  VAR_1->Operands[VAR_2].Kind = VAR_0;
 }

 VAR_1->Opcode = 0;
 VAR_1->OpcodePub = 0;
 VAR_1->size = 0;
 VAR_1->has_imm = 0;
 VAR_1->op1_size = 0;
 VAR_1->writeback = 0;
 VAR_1->ac_idx = 0;
 VAR_1->popcode_adjust = 0;
 VAR_1->assembly[0] = '\0';
}
