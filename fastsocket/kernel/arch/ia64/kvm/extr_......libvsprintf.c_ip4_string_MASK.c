
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 char* FUNC_0 (char*,int const) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, const u8 *VAR_1, bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  char VAR_4[3];
  int VAR_5 = FUNC_0(VAR_4, VAR_1[VAR_3]) - VAR_4;
  if (VAR_2) {
   if (VAR_5 < 3)
    *VAR_0++ = '0';
   if (VAR_5 < 2)
    *VAR_0++ = '0';
  }

  while (VAR_5--)
   *VAR_0++ = VAR_4[VAR_5];
  if (VAR_3 < 3)
   *VAR_0++ = '.';
 }

 *VAR_0 = '\0';
 return VAR_0;
}
