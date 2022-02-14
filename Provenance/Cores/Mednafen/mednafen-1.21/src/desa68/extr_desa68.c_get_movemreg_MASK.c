
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, u32 VAR_1)
{
  s32 VAR_2,VAR_3,VAR_4=0;
  for(VAR_2=0 ; VAR_2<16; VAR_2++)
    {
      for(; VAR_2<16 && (VAR_0&(1<<(VAR_2^VAR_1)))==0; VAR_2++);
      if(VAR_2==16) break;
      VAR_3 = VAR_2;
      for(; VAR_2<16 && (VAR_0&(1<<(VAR_2^VAR_1))); VAR_2++);
      if(VAR_4) FUNC_0('/');
      FUNC_1(VAR_3,(VAR_2-1));
      VAR_4 = 1;
    }
}
