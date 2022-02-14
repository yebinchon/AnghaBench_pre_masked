
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint ;
struct TYPE_11__ {TYPE_1__* inst; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_12__ {int imm; int type; int address_mode; } ;
typedef TYPE_3__ cs_m68k_op ;
struct TYPE_13__ {TYPE_3__* operands; } ;
typedef TYPE_4__ cs_m68k ;
struct TYPE_10__ {int Opcode; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_4)
{
 uint VAR_5, VAR_6;
 cs_m68k_op* VAR_7;
 cs_m68k* VAR_8;

 FUNC_0(VAR_4, VAR_0);

 VAR_5 = FUNC_2(VAR_4);
 VAR_6 = FUNC_2(VAR_4);

 VAR_8 = FUNC_1(VAR_4, VAR_2, 1, 2);


 VAR_4->inst->Opcode += (VAR_5 & 0x2f);

 VAR_7 = &VAR_8->operands[0];

 VAR_7->address_mode = VAR_1;
 VAR_7->type = VAR_3;
 VAR_7->imm = VAR_6;
}
