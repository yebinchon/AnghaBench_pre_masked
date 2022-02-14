
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int * VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int,int ,int ) ;

void FUNC_15(void)
{
 if(FUNC_2(VAR_0))
 {
  if(VAR_1)
  {
   uint VAR_7 = FUNC_8();
   uint VAR_8 = FUNC_4();

   FUNC_13();
   if(FUNC_0(VAR_7))
   {
    FUNC_14(VAR_8, VAR_5, FUNC_6(VAR_4[(VAR_7 >> 12) & 15]));
    return;
   }
   if(FUNC_1(VAR_7))
   {
    VAR_2[(VAR_7 >> 12) & 7] = FUNC_5(FUNC_12(VAR_8, VAR_6));
    if(FUNC_3(VAR_0))
     FUNC_9(2);
    return;
   }

   VAR_3[(VAR_7 >> 12) & 7] = FUNC_7(VAR_3[(VAR_7 >> 12) & 7]) | FUNC_12(VAR_8, VAR_6);
   if(FUNC_3(VAR_0))
    FUNC_9(2);
   return;
  }
  FUNC_11();
  return;
 }
 FUNC_10();
}
