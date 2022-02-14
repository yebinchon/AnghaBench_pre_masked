
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



bool FUNC_0(wchar_t VAR_0)
{
 if (VAR_0 >= L'a' && VAR_0 <= 'z')
 {
  return 1;
 }
 if (VAR_0 >= L'A' && VAR_0 <= 'Z')
 {
  return 1;
 }
 if (VAR_0 >= L'0' && VAR_0 <= '9')
 {
  return 1;
 }
 if (VAR_0 == L'_')
 {
  return 1;
 }
 if (VAR_0 == L'.')
 {
  return 1;
 }
 if (VAR_0 == L'\"')
 {
  return 1;
 }
 if (VAR_0 == L'\'')
 {
  return 1;
 }
 if (VAR_0 == L',')
 {
  return 1;
 }
 if (VAR_0 == L')')
 {
  return 1;
 }
 if (VAR_0 == L']')
 {
  return 1;
 }

 return 0;
}
