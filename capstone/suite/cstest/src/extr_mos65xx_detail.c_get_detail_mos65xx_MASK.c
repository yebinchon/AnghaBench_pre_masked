
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int csh ;
struct TYPE_7__ {int mem; int imm; int reg; scalar_t__ type; } ;
typedef TYPE_2__ cs_mos65xx_op ;
struct TYPE_8__ {int op_count; TYPE_2__* operands; scalar_t__ modifies_flags; int am; } ;
typedef TYPE_3__ cs_mos65xx ;
typedef int cs_mode ;
struct TYPE_9__ {TYPE_1__* detail; } ;
typedef TYPE_4__ cs_insn ;
struct TYPE_6__ {TYPE_3__ mos65xx; } ;





 int FUNC_0 (char**,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

char *FUNC_4(csh *VAR_0, cs_mode VAR_1, cs_insn *VAR_2)
{
 int VAR_3;
 cs_mos65xx *VAR_4;
 char *VAR_5;

 VAR_5 = (char *)FUNC_3(sizeof(char));
 VAR_5[0] = '\0';

 if (VAR_2->detail == ((void*)0))
  return VAR_5;

 VAR_4 = &(VAR_2->detail->mos65xx);
 FUNC_0(&VAR_5, " ; address mode: %s", FUNC_2(VAR_4->am));
 FUNC_0(&VAR_5, " ; modifies flags: %s", VAR_4->modifies_flags ? "true": "false");

 if (VAR_4->op_count)
  FUNC_0(&VAR_5, " ; op_count: %u", VAR_4->op_count);

 for (VAR_3 = 0; VAR_3 < VAR_4->op_count; VAR_3++) {
  cs_mos65xx_op *VAR_6 = &(VAR_4->operands[VAR_3]);
  switch((int)VAR_6->type) {
   default:
    break;
   case 128:
    FUNC_0(&VAR_5, " ; operands[%u].type: REG = %s", VAR_3, FUNC_1(*VAR_0, VAR_6->reg));
    break;
   case 130:
    FUNC_0(&VAR_5, " ; operands[%u].type: IMM = 0x%x", VAR_3, VAR_6->imm);
    break;
   case 129:
    FUNC_0(&VAR_5, " ; operands[%u].type: MEM = 0x%x", VAR_3, VAR_6->mem);
    break;
  }
 }
 return VAR_5;
}
