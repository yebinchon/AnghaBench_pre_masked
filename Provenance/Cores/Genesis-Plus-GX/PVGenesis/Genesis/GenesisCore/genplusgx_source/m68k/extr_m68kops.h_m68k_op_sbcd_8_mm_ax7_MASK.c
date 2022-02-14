
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(void)
{
  uint VAR_8 = FUNC_4();
  uint VAR_9 = FUNC_0();
  uint VAR_10 = FUNC_6(VAR_9);
  uint VAR_11 = FUNC_2(VAR_10) - FUNC_2(VAR_8) - FUNC_5();


  VAR_3 = VAR_7;

  if(VAR_11 > 9)
    VAR_11 -= 6;
  VAR_11 += FUNC_1(VAR_10) - FUNC_1(VAR_8);
  if(VAR_11 > 0x99)
  {
    VAR_11 += 0xa0;
    VAR_4 = VAR_1 = VAR_0;
    VAR_2 = VAR_6;
  }
  else
    VAR_2 = VAR_4 = VAR_1 = 0;

  VAR_11 = FUNC_3(VAR_11);



  VAR_5 |= VAR_11;

  FUNC_7(VAR_9, VAR_11);
}
