
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_10__ {int imm; int address_mode; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_11__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_2, int VAR_3, uint8_t VAR_4, int VAR_5)
{
 cs_m68k_op* VAR_6;
 cs_m68k_op* VAR_7;
 cs_m68k* VAR_8 = FUNC_0(VAR_2, VAR_3, 2, VAR_4);

 VAR_6 = &VAR_8->operands[0];
 VAR_7 = &VAR_8->operands[1];

 VAR_6->type = VAR_1;
 VAR_6->address_mode = VAR_0;
 VAR_6->imm = VAR_5;

 FUNC_1(VAR_2, VAR_7, VAR_2->ir, VAR_4);
}
