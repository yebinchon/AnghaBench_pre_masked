
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,int,char*,int const) ;

void FUNC_1(char *VAR_0, size_t VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 char *VAR_4 = VAR_0 + VAR_1;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_0 + 4 >= VAR_4)
   break;

  switch (VAR_2[VAR_5]) {
  case '\"':
   *VAR_0++ = '\\';
   *VAR_0++ = '\"';
   break;
  case '\\':
   *VAR_0++ = '\\';
   *VAR_0++ = '\\';
   break;
  case '\033':
   *VAR_0++ = '\\';
   *VAR_0++ = 'e';
   break;
  case '\n':
   *VAR_0++ = '\\';
   *VAR_0++ = 'n';
   break;
  case '\r':
   *VAR_0++ = '\\';
   *VAR_0++ = 'r';
   break;
  case '\t':
   *VAR_0++ = '\\';
   *VAR_0++ = 't';
   break;
  default:
   if (VAR_2[VAR_5] >= 32 && VAR_2[VAR_5] <= 127) {
    *VAR_0++ = VAR_2[VAR_5];
   } else {
    VAR_0 += FUNC_0(VAR_0, VAR_4 - VAR_0, "\\x%02x",
         VAR_2[VAR_5]);
   }
   break;
  }
 }

 *VAR_0 = '\0';
}
