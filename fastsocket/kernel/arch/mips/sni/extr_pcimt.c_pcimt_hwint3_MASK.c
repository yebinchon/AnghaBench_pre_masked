
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 u8 VAR_7 = *(volatile char *)VAR_5;
 int VAR_8;

 VAR_7 &= (VAR_1 | VAR_2 | VAR_3 | VAR_4);
 VAR_7 ^= (VAR_1 | VAR_2 | VAR_3 | VAR_4);
 FUNC_0(VAR_0);
 VAR_8 = VAR_6 + FUNC_2(VAR_7) - 1;
 FUNC_1(VAR_8);
 FUNC_3(VAR_0);
}
