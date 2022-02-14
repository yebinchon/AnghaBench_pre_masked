
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
 uint VAR_3 = 0;
 uint VAR_4 = FUNC_2();
 uint VAR_5 = VAR_0;
 uint VAR_6 = 0;

 for(; VAR_3 < 16; VAR_3++)
  if(VAR_4 & (1 << VAR_3))
  {
   VAR_2[VAR_3] = FUNC_0(FUNC_1(FUNC_4(VAR_5)));
   VAR_5 += 2;
   VAR_6++;
  }
 VAR_0 = VAR_5;

 FUNC_3(VAR_6<<VAR_1);
}
