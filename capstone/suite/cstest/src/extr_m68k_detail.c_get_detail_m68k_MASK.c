
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int csh ;
typedef int cs_mode ;
struct TYPE_8__ {char disp; char scale; int index_size; int index_reg; int base_reg; } ;
struct TYPE_9__ {size_t address_mode; char simm; char dimm; TYPE_1__ mem; scalar_t__ imm; int reg; scalar_t__ type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_10__ {int op_count; TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;
struct TYPE_11__ {TYPE_5__* detail; } ;
typedef TYPE_4__ cs_insn ;
struct TYPE_12__ {int groups_count; TYPE_3__ m68k; } ;
typedef TYPE_5__ cs_detail ;







 int VAR_0 ;
 int FUNC_0 (char**,char*,int,...) ;
 char FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,TYPE_5__*,int *) ;
 int * VAR_1 ;

char *FUNC_4(csh *VAR_2, cs_mode VAR_3, cs_insn *VAR_4)
{
 cs_m68k* VAR_5;
 cs_detail* VAR_6;
 int VAR_7;
 char *VAR_8;

 VAR_8 = (char *)FUNC_2(sizeof(char));
 VAR_8[0] = '\0';

 if (VAR_4->detail == ((void*)0))
  return VAR_8;


 VAR_6 = VAR_4->detail;
 VAR_5 = &VAR_6->m68k;
 if (VAR_5->op_count)
  FUNC_0(&VAR_8, " ; op_count: %u", VAR_5->op_count);

 FUNC_3(VAR_8, VAR_6, VAR_2);

 FUNC_0(&VAR_8, " ; groups_count: %u", VAR_6->groups_count);

 for (VAR_7 = 0; VAR_7 < VAR_5->op_count; VAR_7++) {
  cs_m68k_op* VAR_9 = &(VAR_5->operands[VAR_7]);

  switch((int)VAR_9->type) {
   default:
    break;
   case 128:
    FUNC_0(&VAR_8, " ; operands[%u].type: REG = %s", VAR_7, FUNC_1(*VAR_2, VAR_9->reg));
    break;
   case 130:
    FUNC_0(&VAR_8, " ; operands[%u].type: IMM = 0x%x", VAR_7, (int)VAR_9->imm);
    break;
   case 129:
    FUNC_0(&VAR_8, " ; operands[%u].type: MEM", VAR_7);
    if (VAR_9->mem.base_reg != VAR_0)
     FUNC_0(&VAR_8, " ; operands[%u].mem.base: REG = %s", VAR_7, FUNC_1(*VAR_2, VAR_9->mem.base_reg));
    if (VAR_9->mem.index_reg != VAR_0) {
     FUNC_0(&VAR_8, " ; operands[%u].mem.index: REG = %s", VAR_7, FUNC_1(*VAR_2, VAR_9->mem.index_reg));
     FUNC_0(&VAR_8, " ; operands[%u].mem.index: size = %c", VAR_7, VAR_9->mem.index_size ? 'l' : 'w');
    }
    if (VAR_9->mem.disp != 0)
     FUNC_0(&VAR_8, " ; operands[%u].mem.disp: 0x%x", VAR_7, VAR_9->mem.disp);
    if (VAR_9->mem.scale != 0)
     FUNC_0(&VAR_8, " ; operands[%u].mem.scale: %d", VAR_7, VAR_9->mem.scale);

    FUNC_0(&VAR_8, " ; address mode: %s", VAR_1[VAR_9->address_mode]);
    break;
   case 131:
    FUNC_0(&VAR_8, " ; operands[%u].type: FP_SINGLE", VAR_7);
    FUNC_0(&VAR_8, " ; operands[%u].simm: %f", VAR_7, VAR_9->simm);
    break;
   case 132:
    FUNC_0(&VAR_8, " ; operands[%u].type: FP_DOUBLE", VAR_7);
    FUNC_0(&VAR_8, " ; operands[%u].dimm: %lf", VAR_7, VAR_9->dimm);
    break;
  }
 }

 return VAR_8;
}
