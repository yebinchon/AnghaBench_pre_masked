
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int pointer ;
struct TYPE_3__ {int* Fetch; } ;
typedef TYPE_1__ c68k_struc ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(c68k_struc *VAR_2, u32 VAR_3, u32 VAR_4, pointer VAR_5)
{
    u32 VAR_6, VAR_7;

    VAR_6 = (VAR_3 >> VAR_1) & VAR_0;
    VAR_7 = (VAR_4 >> VAR_1) & VAR_0;
    VAR_5 -= VAR_6 << VAR_1;
    while (VAR_6 <= VAR_7) VAR_2->Fetch[VAR_6++] = VAR_5;
}
