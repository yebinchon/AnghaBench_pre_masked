
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;

void FUNC_1( u8 VAR_1[VAR_0], u8 *VAR_2, u8 *VAR_3 )
{
    u32 VAR_4;
    u32 VAR_5;


    VAR_4 = FUNC_0(VAR_1, VAR_0);



 VAR_5 = (u32) ((VAR_4 >> 26) & 0x3f);

 *VAR_2 = (u8) (VAR_5 >> 3);
 *VAR_3 = (u8) ((u8)1 << (VAR_5 % 8));
}
