
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __be32 ;


 int FUNC_0 (int) ;

void
FUNC_1(u8 VAR_0, u8 *VAR_1)
{
 u8 VAR_2;
 __be32 *VAR_3 = (__be32 *) VAR_1;
 u32 VAR_4;





 VAR_2 = VAR_0 >> 5;
 VAR_4 = 1 << (VAR_0 % 32);
 VAR_3[VAR_2] = FUNC_0(VAR_4);

}
