
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(void)
{
 uint VAR_2 = 0;
 uint VAR_3 = FUNC_2();
 uint VAR_4 = FUNC_0();
 uint VAR_5 = 0;

 for(; VAR_2 < 16; VAR_2++)
  if(VAR_3 & (1 << VAR_2))
  {
   FUNC_4(VAR_4, FUNC_1(VAR_1[VAR_2]));
   VAR_4 += 2;
   VAR_5++;
  }

 FUNC_3(VAR_5<<VAR_0);
}
