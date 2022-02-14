
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int disp; int scale; int index_size; int index_reg; int base_reg; } ;
struct TYPE_9__ {size_t address_mode; double simm; int register_bits; int dimm; TYPE_1__ mem; scalar_t__ imm; int reg; scalar_t__ type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_10__ {int op_count; TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;
struct TYPE_11__ {TYPE_5__* detail; } ;
typedef TYPE_4__ cs_insn ;
struct TYPE_12__ {int groups_count; TYPE_3__ m68k; } ;
typedef TYPE_5__ cs_detail ;
 int VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,...) ;
 char** VAR_2 ;

__attribute__((used)) static void FUNC_3(cs_insn *VAR_3)
{
 cs_m68k* VAR_4;
 cs_detail* VAR_5;
 int VAR_6;


 if (VAR_3->detail == ((void*)0))
  return;

 VAR_5 = VAR_3->detail;
 VAR_4 = &VAR_5->m68k;
 if (VAR_4->op_count)
  FUNC_2("\top_count: %u\n", VAR_4->op_count);

 FUNC_1(VAR_5);

 FUNC_2("\tgroups_count: %u\n", VAR_5->groups_count);

 for (VAR_6 = 0; VAR_6 < VAR_4->op_count; VAR_6++) {
  cs_m68k_op* VAR_7 = &(VAR_4->operands[VAR_6]);

  switch((int)VAR_7->type) {
   default:
    break;
   case 129:
    FUNC_2("\t\toperands[%u].type: REG = %s\n", VAR_6, FUNC_0(VAR_1, VAR_7->reg));
    break;
   case 131:
    FUNC_2("\t\toperands[%u].type: IMM = 0x%x\n", VAR_6, (int)VAR_7->imm);
    break;
   case 130:
    FUNC_2("\t\toperands[%u].type: MEM\n", VAR_6);
    if (VAR_7->mem.base_reg != VAR_0)
     FUNC_2("\t\t\toperands[%u].mem.base: REG = %s\n",
       VAR_6, FUNC_0(VAR_1, VAR_7->mem.base_reg));
    if (VAR_7->mem.index_reg != VAR_0) {
     FUNC_2("\t\t\toperands[%u].mem.index: REG = %s\n",
       VAR_6, FUNC_0(VAR_1, VAR_7->mem.index_reg));
     FUNC_2("\t\t\toperands[%u].mem.index: size = %c\n",
       VAR_6, VAR_7->mem.index_size ? 'l' : 'w');
    }
    if (VAR_7->mem.disp != 0)
     FUNC_2("\t\t\toperands[%u].mem.disp: 0x%x\n", VAR_6, VAR_7->mem.disp);
    if (VAR_7->mem.scale != 0)
     FUNC_2("\t\t\toperands[%u].mem.scale: %d\n", VAR_6, VAR_7->mem.scale);

    FUNC_2("\t\taddress mode: %s\n", VAR_2[VAR_7->address_mode]);
    break;
   case 132:
    FUNC_2("\t\toperands[%u].type: FP_SINGLE\n", VAR_6);
    FUNC_2("\t\t\toperands[%u].simm: %f\n", VAR_6, VAR_7->simm);
    break;
   case 133:
    FUNC_2("\t\toperands[%u].type: FP_DOUBLE\n", VAR_6);
    FUNC_2("\t\t\toperands[%u].dimm: %lf\n", VAR_6, VAR_7->dimm);
    break;
   case 128:
    FUNC_2("\t\toperands[%u].type: REG_BITS = $%x\n", VAR_6, VAR_7->register_bits);

  }
 }

 FUNC_2("\n");
}
