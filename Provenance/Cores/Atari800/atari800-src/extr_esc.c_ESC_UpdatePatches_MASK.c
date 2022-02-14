
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int const,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_3(void)
{

 if (VAR_3 != VAR_0 &&
     (VAR_3 != VAR_2 || (VAR_5 & 1) != 0)) {
  int const VAR_6 = VAR_3 == VAR_1 ? 0xd800 : 0xc000;

  if (VAR_6 < 0xd000)
   FUNC_2(VAR_4, VAR_6, 0xd000 - VAR_6);
  FUNC_2(VAR_4 + 0xd800 - VAR_6, 0xd800, 0x2800);

  FUNC_1();
  FUNC_0();
 }
}
