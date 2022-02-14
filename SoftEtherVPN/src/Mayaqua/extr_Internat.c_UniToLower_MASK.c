
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



wchar_t FUNC_0(wchar_t VAR_0)
{
 if (VAR_0 >= L'A' && VAR_0 <= L'Z')
 {
  VAR_0 += L'a' - L'A';
 }

 return VAR_0;
}
