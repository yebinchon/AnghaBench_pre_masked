
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
 int FUNC_5 (int,int) ;

void FUNC_6(void)
{
 if(FUNC_0(VAR_0))
 {

  uint VAR_1 = FUNC_2();
  uint VAR_2;

  VAR_1 = (((VAR_1 << 4) & 0x0f00) | (VAR_1 & 0x000f)) + FUNC_3();
  VAR_2 = FUNC_1();
  FUNC_5(VAR_2, (VAR_1 >> 8) & 0xff);
  VAR_2 = FUNC_1();
  FUNC_5(VAR_2, VAR_1 & 0xff);
  return;
 }
 FUNC_4();
}
