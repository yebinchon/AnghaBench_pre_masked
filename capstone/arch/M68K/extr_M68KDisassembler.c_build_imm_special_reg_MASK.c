
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int m68k_reg ;
typedef int m68k_info ;
struct TYPE_4__ {int imm; int reg; int address_mode; int type; } ;
typedef TYPE_1__ cs_m68k_op ;
struct TYPE_5__ {TYPE_1__* operands; } ;
typedef TYPE_2__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_3, int VAR_4, int VAR_5, int VAR_6, m68k_reg VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_0(VAR_3, VAR_4, 2, VAR_6);

 VAR_8 = &VAR_10->operands[0];
 VAR_9 = &VAR_10->operands[1];

 VAR_8->type = VAR_2;
 VAR_8->address_mode = VAR_0;
 VAR_8->imm = VAR_5;

 VAR_9->address_mode = VAR_1;
 VAR_9->reg = VAR_7;
}
