
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint VAR_10 = FUNC_0();
  uint VAR_11 = FUNC_4(VAR_10);
  uint VAR_12 = FUNC_1(0x9a - VAR_11 - FUNC_3());

  if(VAR_12 != 0x9a)
  {
    VAR_4 = ~VAR_12;

    if((VAR_12 & 0x0f) == 0xa)
      VAR_12 = (VAR_12 & 0xf0) + 0x10;

    VAR_12 = FUNC_1(VAR_12);

    VAR_4 &= VAR_12;

    FUNC_5(VAR_10, FUNC_1(VAR_12));

    VAR_6 |= VAR_12;
    VAR_2 = VAR_1;
    VAR_5 = VAR_9;
  }
  else
  {
    VAR_4 = VAR_7;
    VAR_2 = VAR_0;
    VAR_5 = VAR_8;
  }
  VAR_3 = FUNC_2(VAR_12);
}
