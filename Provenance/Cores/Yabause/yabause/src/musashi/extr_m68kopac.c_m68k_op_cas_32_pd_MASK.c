
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int* VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int) ;

void FUNC_13(void)
{
 if(FUNC_2(VAR_0))
 {
  uint VAR_6 = FUNC_6();
  uint VAR_7 = FUNC_3();
  uint VAR_8 = FUNC_10(VAR_7);
  uint* VAR_9 = &VAR_5[VAR_6 & 7];
  uint VAR_10 = VAR_8 - *VAR_9;

  FUNC_11();
  VAR_2 = FUNC_5(VAR_10);
  VAR_4 = FUNC_4(VAR_10);
  VAR_3 = FUNC_8(*VAR_9, VAR_8, VAR_10);
  VAR_1 = FUNC_0(*VAR_9, VAR_8, VAR_10);

  if(FUNC_1())
   *VAR_9 = VAR_8;
  else
  {
   FUNC_7(3);
   FUNC_12(VAR_7, VAR_5[(VAR_6 >> 6) & 7]);
  }
  return;
 }
 FUNC_9();
}
