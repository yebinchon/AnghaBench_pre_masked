
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ir; int inst; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_9__ {int imm; int address_mode; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_10__ {int op_count; TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_6, int VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_1(VAR_6, VAR_2, 2, 0);

 switch ((VAR_6->ir >> 3) & 3) {

  case 0:
   FUNC_2(VAR_6);
   return;

  case 1:
   FUNC_0(VAR_6->inst, VAR_7 + 0);
   break;

  case 2:
   FUNC_0(VAR_6->inst, VAR_7 + 1);
   break;

  case 3:
   VAR_10->op_count = 1;
   FUNC_0(VAR_6->inst, VAR_7 + 2);
   break;
 }

 VAR_8 = &VAR_10->operands[0];
 VAR_9 = &VAR_10->operands[1];

 VAR_8->address_mode = VAR_0;
 VAR_8->type = VAR_3;
 VAR_8->imm = (VAR_6->ir >> 6) & 3;

 VAR_9->type = VAR_4;
 VAR_9->address_mode = VAR_1;
 VAR_9->imm = VAR_5 + (VAR_6->ir & 7);
}
