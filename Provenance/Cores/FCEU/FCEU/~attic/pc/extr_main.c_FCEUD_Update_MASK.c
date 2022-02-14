
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int int32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_7(uint8 *VAR_5, int32 *VAR_6, int VAR_7)
{




 int VAR_8 = VAR_7;

 VAR_7 = (VAR_7<<8)/VAR_3;
 if(VAR_7)
 {
  int32 VAR_9=FUNC_4();
  static int VAR_10=0;
  int32 VAR_11;


  if(VAR_9 >= FUNC_3() && VAR_3<=256) VAR_10=1;

  if(VAR_9 > VAR_7) VAR_9=VAR_7;
  else VAR_10=0;

  FUNC_6(VAR_6,VAR_9);


  VAR_11 = FUNC_4();

  if(VAR_3>256 || ((VAR_11 < VAR_7*0.90) && !VAR_10))
  {
   if(VAR_5 && (VAR_4&4) && !(VAR_1 & 2))
    FUNC_0(VAR_5);
   VAR_6+=VAR_9;
   VAR_7-=VAR_9;
   if(VAR_7)
   {
    if(VAR_1)
    {
     VAR_9=FUNC_4();
     if(VAR_7>VAR_9) VAR_7=VAR_9;
     FUNC_6(VAR_6,VAR_7);
    }
    else
    {
     while(VAR_7>0)
     {
      FUNC_6(VAR_6,(VAR_7<VAR_8) ? VAR_7 : VAR_8);
      VAR_7 -= VAR_8;
     }
    }
   }
  }
 }
 else
 {
  if(!VAR_1 && (!(VAR_2&VAR_0) || FUNC_2()))
   FUNC_5();
  if(VAR_5 && (VAR_4&4))
  {
   FUNC_0(VAR_5);
  }
 }
 FUNC_1();
}
