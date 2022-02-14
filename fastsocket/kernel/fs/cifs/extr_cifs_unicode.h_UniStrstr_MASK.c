
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;



__attribute__((used)) static inline wchar_t *
FUNC_0(const wchar_t *VAR_0, const wchar_t *VAR_1)
{
 const wchar_t *VAR_2 = VAR_0;
 const wchar_t *VAR_3 = VAR_1;

 while (*VAR_0) {
  if (*VAR_0 == *VAR_1) {

   VAR_0++;
   VAR_1++;
  } else {
   if (!*VAR_1)
    return (wchar_t *) VAR_2;
   VAR_0 = ++VAR_2;
   VAR_1 = VAR_3;
  }
 }

 if (!*VAR_1)
  return (wchar_t *) VAR_2;
 return ((void*)0);
}
