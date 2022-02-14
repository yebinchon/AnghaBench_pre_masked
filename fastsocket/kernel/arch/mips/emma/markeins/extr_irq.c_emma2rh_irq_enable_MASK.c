
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_3 -= VAR_2;

 VAR_6 = VAR_0 +
      (VAR_1 - VAR_0) * (VAR_3 / 32);
 VAR_4 = FUNC_0(VAR_6);
 VAR_5 = 0x1 << (VAR_3 % 32);
 FUNC_1(VAR_6, VAR_4 | VAR_5);
}
