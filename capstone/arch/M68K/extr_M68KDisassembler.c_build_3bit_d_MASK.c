
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {scalar_t__ reg; int address_mode; int imm; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_9__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int,int,int) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_5, int VAR_6, int VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_0(VAR_5, VAR_6, 2, VAR_7);

 VAR_8 = &VAR_10->operands[0];
 VAR_9 = &VAR_10->operands[1];

 VAR_8->type = VAR_2;
 VAR_8->address_mode = VAR_0;
 VAR_8->imm = VAR_4[(VAR_5->ir >> 9) & 7];

 VAR_9->address_mode = VAR_1;
 VAR_9->reg = VAR_3 + (VAR_5->ir & 7);
}
