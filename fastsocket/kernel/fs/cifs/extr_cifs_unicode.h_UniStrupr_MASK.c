
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline wchar_t *
FUNC_1(register wchar_t *VAR_0)
{
 register wchar_t *VAR_1;

 VAR_1 = VAR_0;
 while (*VAR_1) {
  *VAR_1 = FUNC_0(*VAR_1);
  VAR_1++;
 }
 return VAR_0;
}
