
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_4)
{
 while (1)
 {
  VAR_0=VAR_3;

  if (VAR_0 >= VAR_2)
  {
   VAR_0 = ((void*)0);
   return;
  }

  VAR_0 += 4;
  VAR_1 = FUNC_0();
  if (VAR_1 < 0)
  {
   VAR_0 = ((void*)0);
   return;
  }
  VAR_0 -= 8;
  VAR_3 = VAR_0 + 8 + ( (VAR_1 + 1) & ~1 );
  if (!FUNC_1((char *)VAR_0, VAR_4, 4))
   return;
 }
}
