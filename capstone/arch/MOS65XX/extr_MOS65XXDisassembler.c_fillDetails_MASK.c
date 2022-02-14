
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t mos65xx_insn ;
typedef int mos65xx_address_mode ;
struct TYPE_13__ {int am; size_t op_count; TYPE_2__* operands; scalar_t__ modifies_flags; } ;
struct TYPE_14__ {scalar_t__* groups; scalar_t__* regs_read; scalar_t__* regs_write; TYPE_4__ mos65xx; scalar_t__ regs_write_count; scalar_t__ regs_read_count; scalar_t__ groups_count; } ;
typedef TYPE_5__ cs_detail ;
struct TYPE_17__ {scalar_t__ group_type; scalar_t__ read; scalar_t__ write; scalar_t__ modifies_status; } ;
struct TYPE_16__ {size_t ins; int am; } ;
struct TYPE_15__ {TYPE_3__* Operands; TYPE_1__* flat_insn; } ;
struct TYPE_12__ {int ImmVal; } ;
struct TYPE_11__ {int mem; int type; void* reg; } ;
struct TYPE_10__ {TYPE_5__* detail; } ;
typedef TYPE_6__ MCInst ;


 TYPE_9__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_8__* VAR_16 ;

__attribute__((used)) static void FUNC_0(MCInst *VAR_17, unsigned char VAR_18)
{
 cs_detail *VAR_19 = VAR_17->flat_insn->detail;
 mos65xx_insn VAR_20 = VAR_16[VAR_18].ins;
 mos65xx_address_mode VAR_21 = VAR_16[VAR_18].am;

 VAR_19->mos65xx.am = VAR_21;
 VAR_19->mos65xx.modifies_flags = VAR_0[VAR_20].modifies_status;
 VAR_19->groups_count = 0;
 VAR_19->regs_read_count = 0;
 VAR_19->regs_write_count = 0;
 VAR_19->mos65xx.op_count = 0;

 if (VAR_0[VAR_20].group_type != VAR_7) {
  VAR_19->groups[0] = VAR_0[VAR_20].group_type;
  VAR_19->groups_count++;
 }

 if (VAR_0[VAR_20].read != VAR_12) {
  VAR_19->regs_read[VAR_19->regs_read_count++] = VAR_0[VAR_20].read;
 } else if (VAR_16[VAR_18].am == 131) {
  VAR_19->regs_read[VAR_19->regs_read_count++] = VAR_11;
 } else if (VAR_16[VAR_18].am == VAR_4 || VAR_16[VAR_18].am == VAR_2 || VAR_16[VAR_18].am == VAR_6) {
  VAR_19->regs_read[VAR_19->regs_read_count++] = VAR_15;
 } else if (VAR_16[VAR_18].am == VAR_3 || VAR_16[VAR_18].am == VAR_1 || VAR_16[VAR_18].am == VAR_5) {
  VAR_19->regs_read[VAR_19->regs_read_count++] = VAR_14;
 }

 if (VAR_0[VAR_20].write != VAR_12) {
  VAR_19->regs_write[VAR_19->regs_write_count++] = VAR_0[VAR_20].write;
 } else if (VAR_16[VAR_18].am == 131) {
  VAR_19->regs_write[VAR_19->regs_write_count++] = VAR_11;
 }

 if (VAR_0[VAR_20].modifies_status) {
  VAR_19->regs_write[VAR_19->regs_write_count++] = VAR_13;
 }

 switch(VAR_21) {
  case 129:
  case 128:
   break;
  case 130:
   VAR_19->mos65xx.operands[VAR_19->mos65xx.op_count].type = VAR_8;
   VAR_19->mos65xx.operands[VAR_19->mos65xx.op_count].mem = VAR_17->Operands[0].ImmVal;
   VAR_19->mos65xx.op_count++;
   break;
  case 131:
   VAR_19->mos65xx.operands[VAR_19->mos65xx.op_count].type = VAR_10;
   VAR_19->mos65xx.operands[VAR_19->mos65xx.op_count].reg = VAR_11;
   VAR_19->mos65xx.op_count++;
   break;
  default:
   VAR_19->mos65xx.operands[VAR_19->mos65xx.op_count].type = VAR_9;
   VAR_19->mos65xx.operands[VAR_19->mos65xx.op_count].mem = VAR_17->Operands[0].ImmVal;
   VAR_19->mos65xx.op_count++;
   break;
 }
}
