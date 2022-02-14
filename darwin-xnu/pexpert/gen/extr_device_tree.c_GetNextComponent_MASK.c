
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char const VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(const char *VAR_2, char *VAR_3)
{
 size_t VAR_4 = 0;
 char *VAR_5 = VAR_3;

 while (*VAR_2 != 0) {
  if (*VAR_2 == VAR_1) {
   VAR_2++;
   break;
  }
  if (++VAR_4 > VAR_0) {
   *VAR_5 = '\0';
   return VAR_2;
  }
  *VAR_3++ = *VAR_2++;
 }
 *VAR_3 = 0;
 return VAR_2;
}
