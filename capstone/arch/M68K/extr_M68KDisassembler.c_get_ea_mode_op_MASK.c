
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int m68k_info ;
typedef void* int16_t ;
struct TYPE_5__ {int base_reg; void* disp; } ;
struct TYPE_6__ {int reg; int imm; void* type; int address_mode; TYPE_1__ mem; } ;
typedef TYPE_2__ cs_m68k_op ;


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
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,TYPE_2__*,int,int,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(m68k_info *VAR_15, cs_m68k_op* VAR_16, uint VAR_17, uint VAR_18)
{


 VAR_16->type = VAR_11;

 switch (VAR_17 & 0x3f) {
  case 0x00: case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x06: case 0x07:

   VAR_16->address_mode = VAR_9;
   VAR_16->reg = VAR_14 + (VAR_17 & 7);
   VAR_16->type = VAR_12;
   break;

  case 0x08: case 0x09: case 0x0a: case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f:

   VAR_16->address_mode = VAR_8;
   VAR_16->reg = VAR_13 + (VAR_17 & 7);
   VAR_16->type = VAR_12;
   break;

  case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17:

   VAR_16->address_mode = VAR_4;
   VAR_16->reg = VAR_13 + (VAR_17 & 7);
   break;

  case 0x18: case 0x19: case 0x1a: case 0x1b: case 0x1c: case 0x1d: case 0x1e: case 0x1f:

   VAR_16->address_mode = VAR_6;
   VAR_16->reg = VAR_13 + (VAR_17 & 7);
   break;

  case 0x20: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25: case 0x26: case 0x27:

   VAR_16->address_mode = VAR_7;
   VAR_16->reg = VAR_13 + (VAR_17 & 7);
   break;

  case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f:

   VAR_16->address_mode = VAR_5;
   VAR_16->mem.base_reg = VAR_13 + (VAR_17 & 7);
   VAR_16->mem.disp = (int16_t)FUNC_1(VAR_15);
   break;

  case 0x30: case 0x31: case 0x32: case 0x33: case 0x34: case 0x35: case 0x36: case 0x37:

   FUNC_0(VAR_15, VAR_16, VAR_17, VAR_18, 0);
   break;

  case 0x38:

   VAR_16->address_mode = VAR_1;
   VAR_16->imm = FUNC_1(VAR_15);
   break;

  case 0x39:

   VAR_16->address_mode = VAR_0;
   VAR_16->imm = FUNC_2(VAR_15);
   break;

  case 0x3a:

   VAR_16->address_mode = VAR_3;
   VAR_16->mem.disp = (int16_t)FUNC_1(VAR_15);
   break;

  case 0x3b:

   FUNC_0(VAR_15, VAR_16, VAR_17, VAR_18, 1);
   break;

  case 0x3c:
   VAR_16->address_mode = VAR_2;
   VAR_16->type = VAR_10;

   if (VAR_18 == 1)
    VAR_16->imm = FUNC_4(VAR_15) & 0xff;
   else if (VAR_18 == 2)
    VAR_16->imm = FUNC_1(VAR_15) & 0xffff;
   else if (VAR_18 == 4)
    VAR_16->imm = FUNC_2(VAR_15);
   else
    VAR_16->imm = FUNC_3(VAR_15);

   break;

  default:
   break;
 }
}
