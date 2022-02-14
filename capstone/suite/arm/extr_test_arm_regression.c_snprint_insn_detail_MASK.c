
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* detail; } ;
typedef TYPE_4__ cs_insn ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ value; } ;
struct TYPE_9__ {int scale; int disp; scalar_t__ index; scalar_t__ base; } ;
struct TYPE_12__ {TYPE_3__ shift; int imm; TYPE_2__ mem; int fp; scalar_t__ reg; scalar_t__ type; } ;
typedef TYPE_5__ cs_arm_op ;
struct TYPE_13__ {int op_count; scalar_t__ cc; scalar_t__ writeback; scalar_t__ update_flags; TYPE_5__* operands; } ;
typedef TYPE_6__ cs_arm ;
struct TYPE_8__ {TYPE_6__ arm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;






 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(char * VAR_6, size_t * VAR_7, size_t * VAR_8, cs_insn *VAR_9)
{
 size_t VAR_10 = 0;
 cs_arm *VAR_11;
 int VAR_12;


 if (VAR_9->detail == ((void*)0))
  return;

 VAR_11 = &(VAR_9->detail->arm);

 if (VAR_11->op_count)
  { size_t VAR_13 = 0; VAR_13 = snprintf(VAR_6 + *VAR_7, *VAR_8, "\top_count: %u\n", VAR_11->op_count); *VAR_8 -= VAR_13; *VAR_7 += VAR_13; };

 for (VAR_12 = 0; VAR_12 < VAR_11->op_count; VAR_12++) {
  cs_arm_op *VAR_14 = &(VAR_11->operands[VAR_12]);
  switch((int)VAR_14->type) {
   default:
    break;
   case 128:
    { size_t VAR_15 = 0; VAR_15 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\toperands[%u].type: REG = %d\n", VAR_12, FUNC_1(VAR_5, VAR_14->reg)); *VAR_8 -= VAR_15; *VAR_7 += VAR_15; };
    break;
   case 131:
    { size_t VAR_16 = 0; VAR_16 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\toperands[%u].type: IMM = 0x%x\n", VAR_12, VAR_14->imm); *VAR_8 -= VAR_16; *VAR_7 += VAR_16; };
    break;
   case 132:
    { size_t VAR_17 = 0; VAR_17 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\toperands[%u].type: FP = %d\n", VAR_12, VAR_14->fp); *VAR_8 -= VAR_17; *VAR_7 += VAR_17; };
    break;
   case 130:
    { size_t VAR_18 = 0; VAR_18 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\toperands[%u].type: MEM\n", VAR_12); *VAR_8 -= VAR_18; *VAR_7 += VAR_18; };
    if (VAR_14->mem.base != VAR_4)
     { size_t VAR_19 = 0; VAR_19 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\t\toperands[%u].mem.base: REG = %d\n", VAR_12, FUNC_1(VAR_5, VAR_14->mem.base)); *VAR_8 -= VAR_19; *VAR_7 += VAR_19; };

    if (VAR_14->mem.index != VAR_4)
     { size_t VAR_20 = 0; VAR_20 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\t\toperands[%u].mem.index: REG = %d\n", VAR_12, FUNC_1(VAR_5, VAR_14->mem.index)); *VAR_8 -= VAR_20; *VAR_7 += VAR_20; };

    if (VAR_14->mem.scale != 1)
     { size_t VAR_21 = 0; VAR_21 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\t\toperands[%u].mem.scale: %u\n", VAR_12, VAR_14->mem.scale); *VAR_8 -= VAR_21; *VAR_7 += VAR_21; };
    if (VAR_14->mem.disp != 0)
     { size_t VAR_22 = 0; VAR_22 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\t\toperands[%u].mem.disp: 0x%x\n", VAR_12, VAR_14->mem.disp); *VAR_8 -= VAR_22; *VAR_7 += VAR_22; };

    break;
   case 129:
    { size_t VAR_23 = 0; VAR_23 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\toperands[%u].type: P-IMM = %u\n", VAR_12, VAR_14->imm); *VAR_8 -= VAR_23; *VAR_7 += VAR_23; };
    break;
   case 133:
    { size_t VAR_24 = 0; VAR_24 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\toperands[%u].type: C-IMM = %u\n", VAR_12, VAR_14->imm); *VAR_8 -= VAR_24; *VAR_7 += VAR_24; };
    break;
  }

  if (VAR_14->shift.type != VAR_3 && VAR_14->shift.value) {
   if (VAR_14->shift.type < VAR_2) {

    { size_t VAR_25 = 0; VAR_25 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\t\tShift: %ld = %ld\n", VAR_14->shift.type, VAR_14->shift.value); *VAR_8 -= VAR_25; *VAR_7 += VAR_25; };
   } else {

    { size_t VAR_26 = 0; VAR_26 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\t\t\tShift: %ld = %d\n", VAR_14->shift.type, FUNC_1(VAR_5, VAR_14->shift.value)); *VAR_8 -= VAR_26; *VAR_7 += VAR_26; };

   }
  }
 }

 if (VAR_11->cc != VAR_0 && VAR_11->cc != VAR_1) {
  { size_t VAR_27 = 0; VAR_27 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\tCode condition: %ld\n", VAR_11->cc); *VAR_8 -= VAR_27; *VAR_7 += VAR_27; };
 }

 if (VAR_11->update_flags) {
  { size_t VAR_28 = 0; VAR_28 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\tUpdate-flags: True\n"); *VAR_8 -= VAR_28; *VAR_7 += VAR_28; };
 }

 if (VAR_11->writeback) {
  { size_t VAR_29 = 0; VAR_29 = FUNC_0(VAR_6 + *VAR_7, *VAR_8, "\tWrite-back: True\n"); *VAR_8 -= VAR_29; *VAR_7 += VAR_29; };
 }


}
