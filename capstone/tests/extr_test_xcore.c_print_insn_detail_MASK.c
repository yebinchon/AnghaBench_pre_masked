
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int disp; int direct; int index; int base; } ;
struct TYPE_9__ {int imm; TYPE_2__ mem; int reg; scalar_t__ type; } ;
typedef TYPE_3__ cs_xcore_op ;
struct TYPE_10__ {int op_count; TYPE_3__* operands; } ;
typedef TYPE_4__ cs_xcore ;
struct TYPE_11__ {TYPE_1__* detail; } ;
typedef TYPE_5__ cs_insn ;
struct TYPE_7__ {TYPE_4__ xcore; } ;





 int VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(cs_insn *VAR_2)
{
 cs_xcore *VAR_3;
 int VAR_4;


 if (VAR_2->detail == ((void*)0))
  return;

 VAR_3 = &(VAR_2->detail->xcore);
 if (VAR_3->op_count)
  FUNC_1("\top_count: %u\n", VAR_3->op_count);

 for (VAR_4 = 0; VAR_4 < VAR_3->op_count; VAR_4++) {
  cs_xcore_op *VAR_5 = &(VAR_3->operands[VAR_4]);
  switch((int)VAR_5->type) {
   default:
    break;
   case 128:
    FUNC_1("\t\toperands[%u].type: REG = %s\n", VAR_4, FUNC_0(VAR_1, VAR_5->reg));
    break;
   case 130:
    FUNC_1("\t\toperands[%u].type: IMM = 0x%x\n", VAR_4, VAR_5->imm);
    break;
   case 129:
    FUNC_1("\t\toperands[%u].type: MEM\n", VAR_4);
    if (VAR_5->mem.base != VAR_0)
     FUNC_1("\t\t\toperands[%u].mem.base: REG = %s\n",
       VAR_4, FUNC_0(VAR_1, VAR_5->mem.base));
    if (VAR_5->mem.index != VAR_0)
     FUNC_1("\t\t\toperands[%u].mem.index: REG = %s\n",
       VAR_4, FUNC_0(VAR_1, VAR_5->mem.index));
    if (VAR_5->mem.disp != 0)
     FUNC_1("\t\t\toperands[%u].mem.disp: 0x%x\n", VAR_4, VAR_5->mem.disp);
    if (VAR_5->mem.direct != 1)
     FUNC_1("\t\t\toperands[%u].mem.direct: -1\n", VAR_4);


    break;
  }
 }

 FUNC_1("\n");
}
