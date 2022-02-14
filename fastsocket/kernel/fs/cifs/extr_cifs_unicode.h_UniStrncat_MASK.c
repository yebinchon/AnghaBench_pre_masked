
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;



__attribute__((used)) static inline wchar_t *
FUNC_0(wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 wchar_t *VAR_3 = VAR_0;

 while (*VAR_0++) ;
 VAR_0--;
 while (VAR_2-- && (*VAR_0 = *VAR_1)) {
  VAR_0++;
  VAR_1++;
 }
 *VAR_0 = 0;
 return (VAR_3);
}
