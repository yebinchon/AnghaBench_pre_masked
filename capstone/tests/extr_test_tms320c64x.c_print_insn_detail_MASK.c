
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ base; int disp; int unit; int scaled; int modify; int direction; int disptype; } ;
struct TYPE_13__ {scalar_t__ reg; int imm; TYPE_2__ mem; scalar_t__ type; } ;
typedef TYPE_5__ cs_tms320c64x_op ;
struct TYPE_12__ {scalar_t__ reg; int zero; } ;
struct TYPE_11__ {int unit; int side; int crosspath; } ;
struct TYPE_14__ {int op_count; int parallel; TYPE_4__ condition; TYPE_3__ funit; TYPE_5__* operands; } ;
typedef TYPE_6__ cs_tms320c64x ;
struct TYPE_15__ {TYPE_1__* detail; } ;
typedef TYPE_7__ cs_insn ;
struct TYPE_9__ {TYPE_6__ tms320c64x; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 scalar_t__ VAR_10 ;
 char* FUNC_0 (int ,scalar_t__) ;
 int VAR_11 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(cs_insn *VAR_12)
{
 cs_tms320c64x *VAR_13;
 int VAR_14;


 if (VAR_12->detail == ((void*)0))
  return;

 VAR_13 = &(VAR_12->detail->tms320c64x);
 if (VAR_13->op_count)
  FUNC_1("\top_count: %u\n", VAR_13->op_count);

 for (VAR_14 = 0; VAR_14 < VAR_13->op_count; VAR_14++) {
  cs_tms320c64x_op *VAR_15 = &(VAR_13->operands[VAR_14]);
  switch((int)VAR_15->type) {
   default:
    break;
   case 129:
    FUNC_1("\t\toperands[%u].type: REG = %s\n", VAR_14, FUNC_0(VAR_11, VAR_15->reg));
    break;
   case 131:
    FUNC_1("\t\toperands[%u].type: IMM = 0x%x\n", VAR_14, VAR_15->imm);
    break;
   case 130:
    FUNC_1("\t\toperands[%u].type: MEM\n", VAR_14);
    if (VAR_15->mem.base != VAR_10)
     FUNC_1("\t\t\toperands[%u].mem.base: REG = %s\n",
       VAR_14, FUNC_0(VAR_11, VAR_15->mem.base));
    FUNC_1("\t\t\toperands[%u].mem.disptype: ", VAR_14);
    if(VAR_15->mem.disptype == VAR_4) {
     FUNC_1("Invalid\n");
     FUNC_1("\t\t\toperands[%u].mem.disp: %u\n", VAR_14, VAR_15->mem.disp);
    }
    if(VAR_15->mem.disptype == VAR_3) {
     FUNC_1("Constant\n");
     FUNC_1("\t\t\toperands[%u].mem.disp: %u\n", VAR_14, VAR_15->mem.disp);
    }
    if(VAR_15->mem.disptype == VAR_5) {
     FUNC_1("Register\n");
     FUNC_1("\t\t\toperands[%u].mem.disp: %s\n", VAR_14, FUNC_0(VAR_11, VAR_15->mem.disp));
    }
    FUNC_1("\t\t\toperands[%u].mem.unit: %u\n", VAR_14, VAR_15->mem.unit);
    FUNC_1("\t\t\toperands[%u].mem.direction: ", VAR_14);
    if(VAR_15->mem.direction == VAR_2)
     FUNC_1("Invalid\n");
    if(VAR_15->mem.direction == VAR_1)
     FUNC_1("Forward\n");
    if(VAR_15->mem.direction == VAR_0)
     FUNC_1("Backward\n");
    FUNC_1("\t\t\toperands[%u].mem.modify: ", VAR_14);
    if(VAR_15->mem.modify == VAR_6)
     FUNC_1("Invalid\n");
    if(VAR_15->mem.modify == VAR_7)
     FUNC_1("No\n");
    if(VAR_15->mem.modify == VAR_9)
     FUNC_1("Pre\n");
    if(VAR_15->mem.modify == VAR_8)
     FUNC_1("Post\n");
    FUNC_1("\t\t\toperands[%u].mem.scaled: %u\n", VAR_14, VAR_15->mem.scaled);


    break;
   case 128:
    FUNC_1("\t\toperands[%u].type: REGPAIR = %s:%s\n", VAR_14, FUNC_0(VAR_11, VAR_15->reg + 1), FUNC_0(VAR_11, VAR_15->reg));
    break;
  }
 }

 FUNC_1("\tFunctional unit: ");
 switch(VAR_13->funit.unit) {
  case 136:
   FUNC_1("D%u\n", VAR_13->funit.side);
   break;
  case 135:
   FUNC_1("L%u\n", VAR_13->funit.side);
   break;
  case 134:
   FUNC_1("M%u\n", VAR_13->funit.side);
   break;
  case 132:
   FUNC_1("S%u\n", VAR_13->funit.side);
   break;
  case 133:
   FUNC_1("No Functional Unit\n");
   break;
  default:
   FUNC_1("Unknown (Unit %u, Side %u)\n", VAR_13->funit.unit, VAR_13->funit.side);
   break;
 }
 if(VAR_13->funit.crosspath == 1)
  FUNC_1("\tCrosspath: 1\n");

 if(VAR_13->condition.reg != VAR_10)
  FUNC_1("\tCondition: [%c%s]\n", (VAR_13->condition.zero == 1) ? '!' : ' ', FUNC_0(VAR_11, VAR_13->condition.reg));
 FUNC_1("\tParallel: %s\n", (VAR_13->parallel == 1) ? "true" : "false");

 FUNC_1("\n");
}
