
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int ** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 if(FUNC_1()<0)
   return;

 static int VAR_2=0;
 uint32 VAR_3=0;
 int VAR_4;
 int VAR_5;

 VAR_2^=1;

 for(VAR_5=0;VAR_5<4;VAR_5++)
 {
  for(VAR_4=0;VAR_4<8;VAR_4++)
   if(FUNC_0(&VAR_0[VAR_5][VAR_4]))
    VAR_3|=(1<<VAR_4)<<(VAR_5<<3);

  if(VAR_2)
   for(VAR_4=0;VAR_4<2;VAR_4++)
     if(FUNC_0(&VAR_0[VAR_5][8+VAR_4]))
      VAR_3|=(1<<VAR_4)<<(VAR_5<<3);
  }
  VAR_1=VAR_3;
}
