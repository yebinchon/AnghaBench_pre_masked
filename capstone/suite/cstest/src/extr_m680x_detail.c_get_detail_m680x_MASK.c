
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int csh ;
typedef int cs_mode ;
struct TYPE_12__ {int flags; int offset_bits; int offset; int offset_addr; int inc_dec; int base_reg; int offset_reg; } ;
struct TYPE_11__ {int address; } ;
struct TYPE_10__ {int address; int indirect; } ;
struct TYPE_13__ {scalar_t__ size; size_t access; TYPE_3__ idx; TYPE_2__ rel; TYPE_1__ ext; int direct_addr; int imm; int const_val; int reg; scalar_t__ type; } ;
typedef TYPE_4__ cs_m680x_op ;
struct TYPE_14__ {int op_count; int flags; TYPE_4__* operands; } ;
typedef TYPE_5__ cs_m680x ;
struct TYPE_15__ {TYPE_7__* detail; } ;
typedef TYPE_6__ cs_insn ;
struct TYPE_16__ {TYPE_5__ m680x; } ;
typedef TYPE_7__ cs_detail ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**,char*,...) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int *,TYPE_7__*) ;
 int* VAR_7 ;

char *FUNC_5(csh *VAR_8, cs_mode VAR_9, cs_insn *VAR_10)
{
 cs_detail *VAR_11 = VAR_10->detail;
 cs_m680x *VAR_12 = ((void*)0);
 int VAR_13;
 char *VAR_14;

 VAR_14 = (char *)FUNC_3(sizeof(char));
 VAR_14[0] = '\0';

 if (VAR_11 == ((void*)0))
  return VAR_14;

 VAR_12 = &VAR_11->m680x;

 if (VAR_12->op_count)
  FUNC_1(&VAR_14, " ; op_count: %u", VAR_12->op_count);

 for (VAR_13 = 0; VAR_13 < VAR_12->op_count; VAR_13++) {
  cs_m680x_op *VAR_15 = &(VAR_12->operands[VAR_13]);
  const char *VAR_16;

  switch ((int)VAR_15->type) {
   default:
    break;

   case 129:
    VAR_16 = "";

    if ((VAR_13 == 0 && VAR_12->flags & VAR_1) ||
      (VAR_13 == 1 && VAR_12->flags &
       VAR_6))
     VAR_16 = " (in mnemonic)";

    FUNC_1(&VAR_14, " ; operands[%u].type: REGISTER = %s%s", VAR_13, FUNC_2(*VAR_8, VAR_15->reg), VAR_16);
    break;

   case 134:
    FUNC_1(&VAR_14, " ; operands[%u].type: CONSTANT = %u", VAR_13, VAR_15->const_val);
    break;

   case 131:
    FUNC_1(&VAR_14, " ; operands[%u].type: IMMEDIATE = #%d", VAR_13, VAR_15->imm);
    break;

   case 133:
    FUNC_1(&VAR_14, " ; operands[%u].type: DIRECT = 0x%02X", VAR_13, VAR_15->direct_addr);
    break;

   case 132:
    FUNC_1(&VAR_14, " ; operands[%u].type: EXTENDED %s = 0x%04X", VAR_13, VAR_15->ext.indirect ? "INDIRECT" : "", VAR_15->ext.address);
    break;

   case 128:
    FUNC_1(&VAR_14, " ; operands[%u].type: RELATIVE = 0x%04X", VAR_13, VAR_15->rel.address);
    break;

   case 130:
    FUNC_1(&VAR_14, " ; operands[%u].type: INDEXED%s", VAR_13, (VAR_15->idx.flags & VAR_2) ? " INDIRECT" : "");

    if (VAR_15->idx.base_reg != VAR_4)
     FUNC_1(&VAR_14, " ; base register: %s", FUNC_2(*VAR_8, VAR_15->idx.base_reg));

    if (VAR_15->idx.offset_reg != VAR_4)
     FUNC_1(&VAR_14, " ; offset register: %s", FUNC_2(*VAR_8, VAR_15->idx.offset_reg));

    if ((VAR_15->idx.offset_bits != 0) &&
      (VAR_15->idx.offset_reg == VAR_4) &&
      !VAR_15->idx.inc_dec) {
     FUNC_1(&VAR_14, " ; offset: %d", VAR_15->idx.offset);

     if (VAR_15->idx.base_reg == VAR_5)
      FUNC_1(&VAR_14, " ; offset address: 0x%X", VAR_15->idx.offset_addr);

     FUNC_1(&VAR_14, " ; offset bits: %u", VAR_15->idx.offset_bits);
    }

    if (VAR_15->idx.inc_dec) {
     const char *VAR_17 = VAR_15->idx.flags &
      VAR_3 ? "post" : "pre";
     const char *VAR_18 = (VAR_15->idx.inc_dec > 0) ?
      "increment" : "decrement";

     FUNC_1(&VAR_14, " ; %s %s: %d", VAR_17, VAR_18, FUNC_0(VAR_15->idx.inc_dec));
    }

    break;
  }

  if (VAR_15->size != 0)
   FUNC_1(&VAR_14, " ; size: %u", VAR_15->size);

  if (VAR_15->access != VAR_0)
   FUNC_1(&VAR_14, " ; access: %s", VAR_7[VAR_15->access]);
 }

 FUNC_4(VAR_14, VAR_8, VAR_11);

 return VAR_14;
}
