
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(void)
{
 if(FUNC_0(VAR_0))
 {

  uint VAR_1 = FUNC_1();
  uint VAR_2 = FUNC_5(VAR_1);
  VAR_1 = FUNC_1();
  VAR_2 = ((VAR_2 << 8) | FUNC_5(VAR_1)) + FUNC_3();

  FUNC_6(FUNC_2(), ((VAR_2 >> 4) & 0x00f0) | (VAR_2 & 0x000f));
  return;
 }
 FUNC_4();
}
