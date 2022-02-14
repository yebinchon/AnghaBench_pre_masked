
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;


 int FUNC_0 (unsigned short const) ;
 int FUNC_1 (unsigned short const,char const*) ;

int FUNC_2(const unsigned short VAR_0[], const char *VAR_1)
{
 u16 VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_0[VAR_2] != 0; VAR_2++) {

  VAR_3 = FUNC_1(VAR_0[VAR_2], VAR_1);

  if (VAR_3 < 0) {
   for ( ; VAR_2 > 0; VAR_2--)
    FUNC_0(VAR_0[VAR_2 - 1]);

   return VAR_3;
  }
 }

 return 0;
}
