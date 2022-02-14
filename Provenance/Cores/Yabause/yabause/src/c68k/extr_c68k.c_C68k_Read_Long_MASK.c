
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* Read_Word ) (int) ;} ;
typedef TYPE_1__ c68k_struc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

u32 FUNC_4(c68k_struc *VAR_0, u32 VAR_1)
{



    return (VAR_0->Read_Word(VAR_1) << 16) | (VAR_0->Read_Word(VAR_1 + 2) & 0xFFFF);

}
