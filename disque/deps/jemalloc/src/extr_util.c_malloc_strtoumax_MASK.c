
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uintmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;

uintmax_t
FUNC_1(const char *restrict VAR_3, char **restrict VAR_4, int VAR_5)
{
 uintmax_t VAR_6, VAR_7;
 unsigned VAR_8;
 bool VAR_9;
 const char *VAR_10, *VAR_11;

 VAR_10 = VAR_3;
 if (VAR_5 < 0 || VAR_5 == 1 || VAR_5 > 36) {
  VAR_11 = VAR_10;
  FUNC_0(VAR_0);
  VAR_6 = VAR_2;
  goto label_return;
 }
 VAR_8 = VAR_5;


 VAR_9 = 0;
 while (1) {
  switch (*VAR_10) {
  case '\t': case '\n': case '\v': case '\f': case '\r': case ' ':
   VAR_10++;
   break;
  case '-':
   VAR_9 = 1;

  case '+':
   VAR_10++;

  default:
   goto label_prefix;
  }
 }


 label_prefix:





 VAR_11 = VAR_10;
 if (*VAR_10 == '0') {
  switch (VAR_10[1]) {
  case '0': case '1': case '2': case '3': case '4': case '5':
  case '6': case '7':
   if (VAR_8 == 0)
    VAR_8 = 8;
   if (VAR_8 == 8)
    VAR_10++;
   break;
  case 'X': case 'x':
   switch (VAR_10[2]) {
   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':
   case 'A': case 'B': case 'C': case 'D': case 'E':
   case 'F':
   case 'a': case 'b': case 'c': case 'd': case 'e':
   case 'f':
    if (VAR_8 == 0)
     VAR_8 = 16;
    if (VAR_8 == 16)
     VAR_10 += 2;
    break;
   default:
    break;
   }
   break;
  default:
   VAR_10++;
   VAR_6 = 0;
   goto label_return;
  }
 }
 if (VAR_8 == 0)
  VAR_8 = 10;


 VAR_6 = 0;
 while ((*VAR_10 >= '0' && *VAR_10 <= '9' && (VAR_7 = *VAR_10 - '0') < VAR_8)
     || (*VAR_10 >= 'A' && *VAR_10 <= 'Z' && (VAR_7 = 10 + *VAR_10 - 'A') < VAR_8)
     || (*VAR_10 >= 'a' && *VAR_10 <= 'z' && (VAR_7 = 10 + *VAR_10 - 'a') < VAR_8)) {
  uintmax_t VAR_12 = VAR_6;
  VAR_6 *= VAR_8;
  VAR_6 += VAR_7;
  if (VAR_6 < VAR_12) {

   FUNC_0(VAR_1);
   VAR_6 = VAR_2;
   goto label_return;
  }
  VAR_10++;
 }
 if (VAR_9)
  VAR_6 = -VAR_6;

 if (VAR_10 == VAR_11) {

  FUNC_0(VAR_0);
  VAR_6 = VAR_2;
  goto label_return;
 }

label_return:
 if (VAR_4 != ((void*)0)) {
  if (VAR_10 == VAR_11) {

   *VAR_4 = (char *)VAR_3;
  } else
   *VAR_4 = (char *)VAR_10;
 }
 return (VAR_6);
}
