
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int pc; unsigned int type; int address_mask; scalar_t__ ir; int * inst; } ;
typedef TYPE_1__ m68k_info ;
typedef int MCInst ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(m68k_info* VAR_5, MCInst* VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 VAR_5->inst = VAR_6;
 VAR_5->pc = VAR_7;
 VAR_5->ir = 0;
 VAR_5->type = VAR_8;
 VAR_5->address_mask = 0xffffffff;

 switch(VAR_5->type) {
  case 133:
   VAR_5->type = VAR_0;
   VAR_5->address_mask = 0x00ffffff;
   break;
  case 132:
   VAR_5->type = VAR_1;
   VAR_5->address_mask = 0x00ffffff;
   break;
  case 128:
   VAR_5->type = VAR_2;
   VAR_5->address_mask = 0x00ffffff;
   break;
  case 131:
   VAR_5->type = VAR_2;
   VAR_5->address_mask = 0xffffffff;
   break;
  case 130:
   VAR_5->type = VAR_3;
   VAR_5->address_mask = 0xffffffff;
   break;
  case 129:
   VAR_5->type = VAR_4;
   VAR_5->address_mask = 0xffffffff;
   break;
  default:
   VAR_5->address_mask = 0;
   return;
 }
}
