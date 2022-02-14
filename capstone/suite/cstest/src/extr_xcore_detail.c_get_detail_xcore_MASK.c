
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int csh ;
struct TYPE_8__ {int direct; int disp; int index; int base; } ;
struct TYPE_9__ {TYPE_2__ mem; int imm; int reg; scalar_t__ type; } ;
typedef TYPE_3__ cs_xcore_op ;
struct TYPE_10__ {int op_count; TYPE_3__* operands; } ;
typedef TYPE_4__ cs_xcore ;
typedef int cs_mode ;
struct TYPE_11__ {TYPE_1__* detail; } ;
typedef TYPE_5__ cs_insn ;
struct TYPE_7__ {TYPE_4__ xcore; } ;





 int VAR_0 ;
 int FUNC_0 (char**,char*,int,...) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

char *FUNC_3(csh *VAR_1, cs_mode VAR_2, cs_insn *VAR_3)
{
 cs_xcore *VAR_4;
 int VAR_5;
 char *VAR_6;

 VAR_6 = (char *)FUNC_2(sizeof(char));
 VAR_6[0] = '\0';

 if (VAR_3->detail == ((void*)0))
  return VAR_6;

 VAR_4 = &(VAR_3->detail->xcore);
 if (VAR_4->op_count)
  FUNC_0(&VAR_6, " ; op_count: %u", VAR_4->op_count);

 for (VAR_5 = 0; VAR_5 < VAR_4->op_count; VAR_5++) {
  cs_xcore_op *VAR_7 = &(VAR_4->operands[VAR_5]);
  switch((int)VAR_7->type) {
   default:
    break;
   case 128:
    FUNC_0(&VAR_6, " ; operands[%u].type: REG = %s", VAR_5, FUNC_1(*VAR_1, VAR_7->reg));
    break;
   case 130:
    FUNC_0(&VAR_6, " ; operands[%u].type: IMM = 0x%x", VAR_5, VAR_7->imm);
    break;
   case 129:
    FUNC_0(&VAR_6, " ; operands[%u].type: MEM", VAR_5);
    if (VAR_7->mem.base != VAR_0)
     FUNC_0(&VAR_6, " ; operands[%u].mem.base: REG = %s", VAR_5, FUNC_1(*VAR_1, VAR_7->mem.base));
    if (VAR_7->mem.index != VAR_0)
     FUNC_0(&VAR_6, " ; operands[%u].mem.index: REG = %s", VAR_5, FUNC_1(*VAR_1, VAR_7->mem.index));
    if (VAR_7->mem.disp != 0)
     FUNC_0(&VAR_6, " ; operands[%u].mem.disp: 0x%x", VAR_5, VAR_7->mem.disp);
    if (VAR_7->mem.direct != 1)
     FUNC_0(&VAR_6, " ; operands[%u].mem.direct: -1", VAR_5);


    break;
  }
 }

 return VAR_6;
}
