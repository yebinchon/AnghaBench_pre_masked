
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {int * operands; } ;
typedef TYPE_2__ cs_m68k ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_1)
{
 cs_m68k* VAR_2 = FUNC_0(VAR_1, VAR_0[(VAR_1->ir >> 8) & 0xf], 1, 1);
 FUNC_1(VAR_1, &VAR_2->operands[0], VAR_1->ir, 1);
}
