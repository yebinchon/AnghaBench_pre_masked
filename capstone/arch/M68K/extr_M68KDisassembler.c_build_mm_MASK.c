
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {int imm; void* address_mode; int type; void* reg; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_9__ {int op_count; TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_4, int VAR_5, uint8_t VAR_6, int VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k_op* VAR_10;
 cs_m68k* VAR_11 = FUNC_0(VAR_4, VAR_5, 2, VAR_6);

 VAR_8 = &VAR_11->operands[0];
 VAR_9 = &VAR_11->operands[1];
 VAR_10 = &VAR_11->operands[2];

 VAR_8->address_mode = VAR_1;
 VAR_8->reg = VAR_3 + (VAR_4->ir & 7);

 VAR_9->address_mode = VAR_1;
 VAR_9->reg = VAR_3 + ((VAR_4->ir >> 9) & 7);

 if (VAR_7 > 0) {
  VAR_11->op_count = 3;
  VAR_10->type = VAR_2;
  VAR_10->address_mode = VAR_0;
  VAR_10->imm = VAR_7;
 }
}
