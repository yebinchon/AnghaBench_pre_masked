
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char base_reg; char index_reg; char out_disp; char offset; char width; scalar_t__ bitfield; int scale; int index_size; int in_disp; int disp; } ;
struct TYPE_10__ {int disp; } ;
struct TYPE_13__ {int address_mode; size_t reg; TYPE_3__ mem; TYPE_1__ br_disp; int imm; int dimm; int simm; int type; } ;
typedef TYPE_4__ cs_m68k_op ;
struct TYPE_11__ {int fpu_size; int type; } ;
struct TYPE_14__ {TYPE_2__ op_size; } ;
typedef TYPE_5__ cs_m68k ;
typedef int SStream ;
 int VAR_0 ;
 int VAR_1 ;



 char VAR_2 ;
 size_t VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 char FUNC_2 (char) ;
 int FUNC_3 (int *,TYPE_4__ const*) ;
 int FUNC_4 (int *,TYPE_4__ const*) ;
 int * VAR_6 ;
 char VAR_7 ;

__attribute__((used)) static void FUNC_5(SStream* VAR_8, unsigned int VAR_9, const cs_m68k* VAR_10, const cs_m68k_op* VAR_11)
{
 switch (VAR_11->address_mode) {
  case 142:
   switch (VAR_11->type) {
    case 129:
     FUNC_3(VAR_8, VAR_11);
     break;
    case 128:
     FUNC_4(VAR_8, VAR_11);
     break;
    case 130:
     FUNC_0(VAR_8, "%s", VAR_6[VAR_11->reg]);
     break;
    default:
     break;
   }
   break;

  case 131: FUNC_0(VAR_8, "d%d", (VAR_11->reg - VAR_3)); break;
  case 132: FUNC_0(VAR_8, "a%d", (VAR_11->reg - VAR_2)); break;
  case 136: FUNC_0(VAR_8, "(a%d)", (VAR_11->reg - VAR_2)); break;
  case 134: FUNC_0(VAR_8, "(a%d)+", (VAR_11->reg - VAR_2)); break;
  case 133: FUNC_0(VAR_8, "-(a%d)", (VAR_11->reg - VAR_2)); break;
  case 135: FUNC_0(VAR_8, "%s$%x(a%d)", VAR_11->mem.disp < 0 ? "-" : "", FUNC_1(VAR_11->mem.disp), (VAR_11->mem.base_reg - VAR_2)); break;
  case 141: FUNC_0(VAR_8, "$%x(pc)", VAR_9 + 2 + VAR_11->mem.disp); break;
  case 149: FUNC_0(VAR_8, "$%x.w", VAR_11->imm); break;
  case 150: FUNC_0(VAR_8, "$%x.l", VAR_11->imm); break;
  case 145:
    if (VAR_10->op_size.type == VAR_5) {





     if (VAR_10->op_size.fpu_size == VAR_1)
      FUNC_0(VAR_8, "#%f", VAR_11->simm);
     else if (VAR_10->op_size.fpu_size == VAR_0)
      FUNC_0(VAR_8, "#%f", VAR_11->dimm);
     else
      FUNC_0(VAR_8, "#<unsupported>");
     break;

    }
    FUNC_0(VAR_8, "#$%x", VAR_11->imm);
    break;
  case 140:
   FUNC_0(VAR_8, "$%x(pc,%s%s.%c)", VAR_9 + 2 + VAR_11->mem.disp, VAR_7, FUNC_2(VAR_11->mem.index_reg), VAR_11->mem.index_size ? 'l' : 'w');
   break;
  case 148:
   FUNC_0(VAR_8, "%s$%x(%s,%s%s.%c)", VAR_11->mem.disp < 0 ? "-" : "", FUNC_1(VAR_11->mem.disp), FUNC_2(VAR_11->mem.base_reg), VAR_7, FUNC_2(VAR_11->mem.index_reg), VAR_11->mem.index_size ? 'l' : 'w');
   break;
  case 139:
  case 147:

   if (VAR_11->address_mode == 139) {
    FUNC_0(VAR_8, "$%x", VAR_9 + 2 + VAR_11->mem.in_disp);
   } else {
    if (VAR_11->mem.in_disp > 0)
     FUNC_0(VAR_8, "$%x", VAR_11->mem.in_disp);
   }

   FUNC_0(VAR_8, "(");

   if (VAR_11->address_mode == 139) {
       FUNC_0(VAR_8, "pc,%s.%c", FUNC_2(VAR_11->mem.index_reg), VAR_11->mem.index_size ? 'l' : 'w');
   } else {
    if (VAR_11->mem.base_reg != VAR_4)
     FUNC_0(VAR_8, "a%d,%s", VAR_11->mem.base_reg - VAR_2, VAR_7);
    FUNC_0(VAR_8, "%s.%c", FUNC_2(VAR_11->mem.index_reg), VAR_11->mem.index_size ? 'l' : 'w');
   }

   if (VAR_11->mem.scale > 0)
       FUNC_0(VAR_8, "%s*%s%d)", VAR_7, VAR_7, VAR_11->mem.scale);
   else
       FUNC_0(VAR_8, ")");
   break;



  case 138:
  case 137:
  case 143:
  case 144:
   FUNC_0(VAR_8, "([");

   if (VAR_11->address_mode == 138 || VAR_11->address_mode == 137) {
    FUNC_0(VAR_8, "$%x", VAR_9 + 2 + VAR_11->mem.in_disp);
   } else {
    if (VAR_11->mem.in_disp > 0)
     FUNC_0(VAR_8, "$%x", VAR_11->mem.in_disp);
   }

   if (VAR_11->mem.base_reg != VAR_4) {
    if (VAR_11->mem.in_disp > 0)
     FUNC_0(VAR_8, ",%s%s", VAR_7, FUNC_2(VAR_11->mem.base_reg));
    else
     FUNC_0(VAR_8, "%s", FUNC_2(VAR_11->mem.base_reg));
   }

   if (VAR_11->address_mode == 144 || VAR_11->address_mode == 138)
       FUNC_0(VAR_8, "]");

   if (VAR_11->mem.index_reg != VAR_4)
       FUNC_0(VAR_8, ",%s%s.%c", VAR_7, FUNC_2(VAR_11->mem.index_reg), VAR_11->mem.index_size ? 'l' : 'w');

   if (VAR_11->mem.scale > 0)
       FUNC_0(VAR_8, "%s*%s%d", VAR_7, VAR_7, VAR_11->mem.scale);

   if (VAR_11->address_mode == 143 || VAR_11->address_mode == 137)
       FUNC_0(VAR_8, "]");

   if (VAR_11->mem.out_disp > 0)
       FUNC_0(VAR_8, ",%s$%x", VAR_7, VAR_11->mem.out_disp);

   FUNC_0(VAR_8, ")");
   break;
  case 146:
   FUNC_0(VAR_8, "$%x", VAR_9 + 2 + VAR_11->br_disp.disp);
  default:
   break;
 }

 if (VAR_11->mem.bitfield)
  FUNC_0(VAR_8, "{%d:%d}", VAR_11->mem.offset, VAR_11->mem.width);
}
