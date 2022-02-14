
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint ;
struct TYPE_9__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_10__ {int reg; int register_bits; void* type; void* address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_11__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_4, uint VAR_5)
{
 cs_m68k_op* VAR_6;
 cs_m68k_op* VAR_7;
 int VAR_8 = (VAR_5 >> 13) & 0x1;
 int VAR_9 = (VAR_5 >> 11) & 0x3;
 uint VAR_10 = VAR_5 & 0xff;
 cs_m68k* VAR_11 = FUNC_0(VAR_4, VAR_1, 2, 0);

 VAR_6 = &VAR_11->operands[0];
 VAR_7 = &VAR_11->operands[1];



 if (!VAR_8) {
  cs_m68k_op* VAR_12 = VAR_6;
  VAR_6 = VAR_7;
  VAR_7 = VAR_12;
 }

 FUNC_1(VAR_4, VAR_7, VAR_4->ir, 0);

 switch (VAR_9) {
  case 1 :
   VAR_6->reg = VAR_3 + ((VAR_10 >> 4) & 7);
   break;

  case 0 :
   VAR_6->address_mode = VAR_0;
   VAR_6->type = VAR_2;
   VAR_6->register_bits = VAR_10 << 16;
   break;

  case 2 :
   VAR_6->address_mode = VAR_0;
   VAR_6->type = VAR_2;
   VAR_6->register_bits = ((uint32_t)FUNC_2(VAR_10)) << 16;
   break;
 }
}
