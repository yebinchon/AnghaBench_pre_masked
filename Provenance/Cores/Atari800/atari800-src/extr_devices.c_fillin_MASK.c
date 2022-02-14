
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, char *VAR_1)
{
 const char *VAR_2 = VAR_1 + FUNC_0(VAR_1);
 for (;;) {
  switch (*VAR_0) {
  case '\0':
   *VAR_1 = '\0';
   return;
  case '?':
   VAR_0++;
   if (VAR_1 < VAR_2)
    VAR_1++;
   break;
  case '*':
   if (VAR_1 >= VAR_2 || *VAR_1 == VAR_0[1])
    VAR_0++;
   else
    VAR_1++;
   break;
  default:
   *VAR_1++ = *VAR_0++;
   break;
  }
 }
}
