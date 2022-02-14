
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int,int) ;

void FUNC_12(void)
{
 if(FUNC_2(VAR_0))
 {
  uint VAR_7 = FUNC_5();
  uint* VAR_8 = &VAR_5[(VAR_7 >> 16) & 7];
  uint VAR_9 = VAR_6[(VAR_7 >> 28) & 15];
  uint VAR_10 = FUNC_9(VAR_9);
  uint VAR_11 = VAR_10 - *VAR_8;
  uint* VAR_12 = &VAR_5[VAR_7 & 7];
  uint VAR_13 = VAR_6[(VAR_7 >> 12) & 15];
  uint VAR_14 = FUNC_9(VAR_13);
  uint VAR_15;

  FUNC_10();
  VAR_2 = FUNC_4(VAR_11);
  VAR_4 = FUNC_3(VAR_11);
  VAR_3 = FUNC_7(*VAR_8, VAR_10, VAR_11);
  VAR_1 = FUNC_0(*VAR_8, VAR_10, VAR_11);

  if(FUNC_1())
  {
   VAR_15 = VAR_14 - *VAR_12;

   VAR_2 = FUNC_4(VAR_15);
   VAR_4 = FUNC_3(VAR_15);
   VAR_3 = FUNC_7(*VAR_12, VAR_14, VAR_15);
   VAR_1 = FUNC_0(*VAR_12, VAR_14, VAR_15);

   if(FUNC_1())
   {
    FUNC_6(3);
    FUNC_11(VAR_9, VAR_5[(VAR_7 >> 22) & 7]);
    FUNC_11(VAR_13, VAR_5[(VAR_7 >> 6) & 7]);
    return;
   }
  }
  *VAR_8 = VAR_10;
  *VAR_12 = VAR_14;
  return;
 }
 FUNC_8();
}
