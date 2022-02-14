
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 if(FUNC_0(VAR_0))
 {
  if(VAR_2)
  {
   uint VAR_13 = FUNC_2();

   FUNC_5();
   switch (VAR_13 & 0xfff)
   {
   case 0x000:
    VAR_5[(VAR_13 >> 12) & 15] = VAR_9;
    return;
   case 0x001:
    VAR_5[(VAR_13 >> 12) & 15] = VAR_6;
    return;
   case 0x002:
    if(FUNC_1(VAR_0))
    {
     VAR_5[(VAR_13 >> 12) & 15] = VAR_4;
     return;
    }
    return;
   case 0x800:
    VAR_5[(VAR_13 >> 12) & 15] = VAR_11;
    return;
   case 0x801:
    VAR_5[(VAR_13 >> 12) & 15] = VAR_12;
    return;
   case 0x802:
    if(FUNC_1(VAR_0))
    {
     VAR_5[(VAR_13 >> 12) & 15] = VAR_3;
     return;
    }
    FUNC_3();
    break;
   case 0x803:
    if(FUNC_1(VAR_0))
    {
     VAR_5[(VAR_13 >> 12) & 15] = VAR_1 ? VAR_10 : VAR_8;
     return;
    }
    FUNC_3();
    return;
   case 0x804:
    if(FUNC_1(VAR_0))
    {
     VAR_5[(VAR_13 >> 12) & 15] = VAR_1 ? VAR_7 : VAR_10;
     return;
    }
    FUNC_3();
    return;
   default:
    FUNC_3();
    return;
   }
  }
  FUNC_4();
  return;
 }
 FUNC_3();
}
