
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(void)
{
  uint VAR_6 = FUNC_0();
  uint VAR_7 = FUNC_3(VAR_6);
  uint VAR_8 = VAR_7 >> 1;

  if(FUNC_1(VAR_7))
    VAR_8 |= 0x8000;

  FUNC_4(VAR_6, VAR_8);

  VAR_1 = FUNC_2(VAR_8);
  VAR_4 = VAR_8;
  VAR_2 = VAR_5;
  VAR_0 = VAR_3 = VAR_7 << 8;
}
