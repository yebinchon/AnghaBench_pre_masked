
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

void FUNC_4(void)
{
 uint VAR_2 = 0;
 uint VAR_3 = FUNC_1();
 uint VAR_4 = FUNC_0();
 uint VAR_5 = 0;

 for(; VAR_2 < 16; VAR_2++)
  if(VAR_3 & (1 << VAR_2))
  {
   FUNC_3(VAR_4, VAR_1[VAR_2]);
   VAR_4 += 4;
   VAR_5++;
  }

 FUNC_2(VAR_5<<VAR_0);
}
