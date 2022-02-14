
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
struct TYPE_12__ {int flags; int offset_bits; int offset; int offset_addr; int inc_dec; int base_reg; int offset_reg; } ;
struct TYPE_11__ {int address; } ;
struct TYPE_10__ {int address; int indirect; } ;
struct TYPE_13__ {int const_val; int imm; int direct_addr; scalar_t__ size; size_t access; TYPE_3__ idx; TYPE_2__ rel; TYPE_1__ ext; int reg; scalar_t__ type; } ;
typedef TYPE_4__ cs_m680x_op ;
struct TYPE_14__ {int op_count; int flags; TYPE_4__* operands; } ;
typedef TYPE_5__ cs_m680x ;
struct TYPE_15__ {TYPE_7__* detail; } ;
typedef TYPE_6__ cs_insn ;
struct TYPE_16__ {int groups_count; TYPE_5__ m680x; } ;
typedef TYPE_7__ cs_detail ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int FUNC_3 (char*,...) ;
 char** VAR_7 ;

__attribute__((used)) static void FUNC_4(csh VAR_8, cs_insn *VAR_9)
{
 cs_detail *VAR_10 = VAR_9->detail;
 cs_m680x *VAR_11 = ((void*)0);
 int VAR_12;


 if (VAR_10 == ((void*)0))
  return;

 VAR_11 = &VAR_10->m680x;

 if (VAR_11->op_count)
  FUNC_3("\top_count: %u\n", VAR_11->op_count);

 for (VAR_12 = 0; VAR_12 < VAR_11->op_count; VAR_12++) {
  cs_m680x_op *VAR_13 = &(VAR_11->operands[VAR_12]);
  const char *VAR_14;

  switch ((int)VAR_13->type) {
  default:
   break;

  case 129:
   VAR_14 = "";

   if ((VAR_12 == 0 && (VAR_11->flags &
      VAR_1)) ||
    ((VAR_12 == 1 && (VAR_11->flags &
       VAR_6))))
    VAR_14 = " (in mnemonic)";

   FUNC_3("\t\toperands[%u].type: REGISTER = %s%s\n", VAR_12,
    FUNC_1(VAR_8, VAR_13->reg), VAR_14);
   break;

  case 134:
   FUNC_3("\t\toperands[%u].type: CONSTANT = %u\n", VAR_12,
    VAR_13->const_val);
   break;

  case 131:
   FUNC_3("\t\toperands[%u].type: IMMEDIATE = #%d\n", VAR_12,
    VAR_13->imm);
   break;

  case 133:
   FUNC_3("\t\toperands[%u].type: DIRECT = 0x%02X\n", VAR_12,
    VAR_13->direct_addr);
   break;

  case 132:
   FUNC_3("\t\toperands[%u].type: EXTENDED %s = 0x%04X\n",
    VAR_12, VAR_13->ext.indirect ? "INDIRECT" : "",
    VAR_13->ext.address);
   break;

  case 128:
   FUNC_3("\t\toperands[%u].type: RELATIVE = 0x%04X\n", VAR_12,
    VAR_13->rel.address);
   break;

  case 130:
   FUNC_3("\t\toperands[%u].type: INDEXED%s\n", VAR_12,
    (VAR_13->idx.flags & VAR_2) ?
    " INDIRECT" : "");

   if (VAR_13->idx.base_reg != VAR_4)
    FUNC_3("\t\t\tbase register: %s\n",
     FUNC_1(VAR_8, VAR_13->idx.base_reg));

   if (VAR_13->idx.offset_reg != VAR_4)
    FUNC_3("\t\t\toffset register: %s\n",
     FUNC_1(VAR_8, VAR_13->idx.offset_reg));

   if ((VAR_13->idx.offset_bits != 0) &&
    (VAR_13->idx.offset_reg == VAR_4) &&
    !VAR_13->idx.inc_dec) {
    FUNC_3("\t\t\toffset: %d\n", VAR_13->idx.offset);

    if (VAR_13->idx.base_reg == VAR_5)
     FUNC_3("\t\t\toffset address: 0x%X\n",
      VAR_13->idx.offset_addr);

    FUNC_3("\t\t\toffset bits: %u\n",
     VAR_13->idx.offset_bits);
   }

   if (VAR_13->idx.inc_dec) {
    const char *VAR_15 = VAR_13->idx.flags &
     VAR_3 ? "post" : "pre";
    const char *VAR_16 = (VAR_13->idx.inc_dec > 0) ?
     "increment" : "decrement";

    FUNC_3("\t\t\t%s %s: %d\n", VAR_15, VAR_16,
     FUNC_0(VAR_13->idx.inc_dec));
   }

   break;
  }

  if (VAR_13->size != 0)
   FUNC_3("\t\t\tsize: %u\n", VAR_13->size);

  if (VAR_13->access != VAR_0)
   FUNC_3("\t\t\taccess: %s\n", VAR_7[VAR_13->access]);

 }

 FUNC_2(VAR_8, VAR_10);

 if (VAR_10->groups_count) {
  FUNC_3("\tgroups_count: %u\n", VAR_10->groups_count);
 }

 FUNC_3("\n");
}
