
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
  uint* VAR_10 = &VAR_1;
  uint VAR_11 = VAR_2;
  uint VAR_12 = *VAR_10;
  uint VAR_13 = FUNC_1(VAR_12) - FUNC_1(VAR_11) - FUNC_4();


  VAR_5 = VAR_9;

  if(VAR_13 > 9)
    VAR_13 -= 6;
  VAR_13 += FUNC_0(VAR_12) - FUNC_0(VAR_11);
  if(VAR_13 > 0x99)
  {
    VAR_13 += 0xa0;
    VAR_6 = VAR_3 = VAR_0;
    VAR_4 = VAR_8;
  }
  else
    VAR_4 = VAR_6 = VAR_3 = 0;

  VAR_13 = FUNC_2(VAR_13);



  VAR_7 |= VAR_13;

  *VAR_10 = FUNC_3(*VAR_10) | VAR_13;
}
