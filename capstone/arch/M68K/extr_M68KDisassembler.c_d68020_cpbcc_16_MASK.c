
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int ir; TYPE_1__* inst; } ;
typedef TYPE_2__ m68k_info ;
typedef int cs_m68k_op ;
struct TYPE_12__ {int * operands; } ;
typedef TYPE_3__ cs_m68k ;
struct TYPE_10__ {int Opcode; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(m68k_info *VAR_5)
{
 cs_m68k_op* VAR_6;
 cs_m68k* VAR_7;
 FUNC_0(VAR_5, VAR_0);


 VAR_5->inst->Opcode += (VAR_5->ir & 0x2f);

 VAR_7 = FUNC_1(VAR_5, VAR_3, 1, 2);
 VAR_6 = &VAR_7->operands[0];

 FUNC_2(VAR_6, VAR_4, FUNC_3(FUNC_4(VAR_5)));

 FUNC_5(VAR_5, VAR_2);
 FUNC_5(VAR_5, VAR_1);
}
