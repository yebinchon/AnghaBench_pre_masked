
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int ir; TYPE_1__* inst; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_12__ {int * operands; } ;
typedef TYPE_3__ cs_m68k ;
struct TYPE_10__ {int Opcode; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(m68k_info *VAR_2)
{
 cs_m68k* VAR_3;

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_1(VAR_2, VAR_1, 1, 1);


 VAR_2->inst->Opcode += (FUNC_3(VAR_2) & 0x2f);

 FUNC_2(VAR_2, &VAR_3->operands[0], VAR_2->ir, 1);
}
