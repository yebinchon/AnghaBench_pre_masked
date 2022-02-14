
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 char* FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, u_char *VAR_2)
{
 static const char VAR_3[] = "0123456789";
 int VAR_4, VAR_5, VAR_6;

 u_char VAR_7[4], *VAR_8;

 VAR_4 = 0;
 VAR_5 = 0;
 *(VAR_8 = VAR_7) = 0;
 while ((VAR_6 = *VAR_1++) != '\0') {
  const char *VAR_9;

  if ((VAR_9 = FUNC_1(VAR_3, VAR_6)) != ((void*)0)) {
   u_int VAR_10 = *VAR_8 * 10 + (VAR_9 - VAR_3);

   if (VAR_4 && *VAR_8 == 0)
    return (0);
   if (VAR_10 > 255)
    return (0);
   *VAR_8 = VAR_10;
   if (!VAR_4) {
    if (++VAR_5 > 4)
     return (0);
    VAR_4 = 1;
   }
  } else if (VAR_6 == '.' && VAR_4) {
   if (VAR_5 == 4)
    return (0);
   *++VAR_8 = 0;
   VAR_4 = 0;
  } else
   return (0);
 }
 if (VAR_5 < 4)
  return (0);
 FUNC_0(VAR_2, VAR_7, 4);
 return (1);
}
