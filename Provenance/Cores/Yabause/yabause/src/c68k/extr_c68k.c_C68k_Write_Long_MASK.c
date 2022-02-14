
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* Write_Word ) (int,int) ;} ;
typedef TYPE_1__ c68k_struc ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(c68k_struc *VAR_0, u32 VAR_1, u32 VAR_2)
{




    VAR_0->Write_Word(VAR_1, VAR_2 >> 16);
    VAR_0->Write_Word(VAR_1 + 2, VAR_2 & 0xFFFF);

}
