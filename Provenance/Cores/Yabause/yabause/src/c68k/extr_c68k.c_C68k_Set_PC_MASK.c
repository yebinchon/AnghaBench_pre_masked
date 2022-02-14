
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ BasePC; scalar_t__ PC; scalar_t__* Fetch; } ;
typedef TYPE_1__ c68k_struc ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(c68k_struc *VAR_2, u32 VAR_3)
{
    VAR_2->BasePC = VAR_2->Fetch[(VAR_3 >> VAR_1) & VAR_0];
    VAR_2->PC = VAR_3 + VAR_2->BasePC;
}
