
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {int imm; scalar_t__ reg; int address_mode; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_9__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_5)
{
 cs_m68k_op* VAR_6;
 cs_m68k_op* VAR_7;

 cs_m68k* VAR_8 = FUNC_0(VAR_5, VAR_2, 2, 0);

 VAR_6 = &VAR_8->operands[0];
 VAR_7 = &VAR_8->operands[1];

 VAR_6->type = VAR_3;
 VAR_6->address_mode = VAR_0;
 VAR_6->imm = (VAR_5->ir & 0xff);

 VAR_7->address_mode = VAR_1;
 VAR_7->reg = VAR_4 + ((VAR_5->ir >> 9) & 7);
}
