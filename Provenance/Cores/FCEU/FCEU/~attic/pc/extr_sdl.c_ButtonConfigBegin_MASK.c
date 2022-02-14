
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_Surface ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int,int,int,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_10(void)
{
 SDL_Surface *VAR_3;
 FUNC_6(VAR_0);
 VAR_2=FUNC_3();
 VAR_1=FUNC_2();

 if(!(FUNC_9(VAR_0)&VAR_0))
  if(FUNC_5(VAR_0)==-1)
  {
   FUNC_0(FUNC_4());
   return(0);
  }

 VAR_3 = FUNC_7(300, 1, 8, 0);
 FUNC_8("Button Config",0);
 FUNC_1();

 return(1);
}
