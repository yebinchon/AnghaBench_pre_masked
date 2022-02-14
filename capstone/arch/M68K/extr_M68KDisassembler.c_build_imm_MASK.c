
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int inst; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {int imm; int address_mode; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_9__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_2, int VAR_3, int VAR_4)
{
 cs_m68k_op* VAR_5;
 cs_m68k* VAR_6 = FUNC_1(VAR_2, VAR_3, 1, 0);

 FUNC_0(VAR_2->inst, VAR_3);

 VAR_5 = &VAR_6->operands[0];

 VAR_5->type = VAR_1;
 VAR_5->address_mode = VAR_0;
 VAR_5->imm = VAR_4;
}
