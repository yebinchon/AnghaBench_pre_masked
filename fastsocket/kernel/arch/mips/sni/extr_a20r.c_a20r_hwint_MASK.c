
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 u32 VAR_2, VAR_3;
 int VAR_4;

 FUNC_1(VAR_0);
 VAR_3 = FUNC_0();
 VAR_2 = FUNC_5();

 VAR_4 = FUNC_3(((VAR_2 & VAR_3) >> 8) & 0xf8);
 if (FUNC_4(VAR_4 > 0))
  FUNC_2(VAR_1 + VAR_4 - 1);
 FUNC_6(VAR_0);
}
