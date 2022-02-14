
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,char,int) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_3, u_char *VAR_4)
{
 static const char VAR_5[] = "0123456789abcdef",
     VAR_6[] = "0123456789ABCDEF";


 u_char VAR_7[16], *VAR_8, *VAR_9, *VAR_10;
 const char *VAR_11, *VAR_12;
 int VAR_13, VAR_14;
 u_int VAR_15;

 FUNC_2((VAR_8 = VAR_7), '\0', 16);
 VAR_9 = VAR_8 + 16;
 VAR_10 = ((void*)0);

 if (*VAR_3 == ':')
  if (*++VAR_3 != ':')
   return (0);
 VAR_12 = VAR_3;
 VAR_14 = 0;
 VAR_15 = 0;
 while ((VAR_13 = *VAR_3++) != '\0') {
  const char *VAR_16;

  if ((VAR_16 = FUNC_3((VAR_11 = VAR_5), VAR_13)) == ((void*)0))
   VAR_16 = FUNC_3((VAR_11 = VAR_6), VAR_13);
  if (VAR_16 != ((void*)0)) {
   VAR_15 <<= 4;
   VAR_15 |= (VAR_16 - VAR_11);
   if (++VAR_14 > 4)
    return (0);
   continue;
  }
  if (VAR_13 == ':') {
   VAR_12 = VAR_3;
   if (!VAR_14) {
    if (VAR_10)
     return (0);
    VAR_10 = VAR_8;
    continue;
   } else if (*VAR_3 == '\0') {
    return (0);
   }
   if (VAR_8 + 2 > VAR_9)
    return (0);
   *VAR_8++ = (u_char) (VAR_15 >> 8) & 0xff;
   *VAR_8++ = (u_char) VAR_15 & 0xff;
   VAR_14 = 0;
   VAR_15 = 0;
   continue;
  }
  if (VAR_13 == '.' && ((VAR_8 + VAR_1) <= VAR_9) &&
      FUNC_0(VAR_12, VAR_8) > 0) {
   VAR_8 += VAR_1;
   VAR_14 = 0;
   break;
  }
  return (0);
 }
 if (VAR_14) {
  if (VAR_8 + 2 > VAR_9)
   return (0);
  *VAR_8++ = (u_char) (VAR_15 >> 8) & 0xff;
  *VAR_8++ = (u_char) VAR_15 & 0xff;
 }
 if (VAR_10 != ((void*)0)) {




  const int VAR_17 = VAR_8 - VAR_10;
  int VAR_18;

  if (VAR_8 == VAR_9)
   return (0);
  for (VAR_18 = 1; VAR_18 <= VAR_17; VAR_18++) {
   VAR_9[- VAR_18] = VAR_10[VAR_17 - VAR_18];
   VAR_10[VAR_17 - VAR_18] = 0;
  }
  VAR_8 = VAR_9;
 }
 if (VAR_8 != VAR_9)
  return (0);
 FUNC_1(VAR_4, VAR_7, 16);
 return (1);
}
