
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char FUNC_0(char VAR_0)
{
 if (VAR_0 >= 'A' && VAR_0 <= 'Z')
 {
  return VAR_0 - 'A';
 }
 if (VAR_0 >= 'a' && VAR_0 <= 'z')
 {
  return VAR_0 - 'a' + 0x1a;
 }
 if (VAR_0 >= '0' && VAR_0 <= '9')
 {
  return VAR_0 - '0' + 0x34;
 }
 if (VAR_0 == '+')
 {
  return 0x3e;
 }
 if (VAR_0 == '/')
 {
  return 0x3f;
 }
 if (VAR_0 == '=')
 {
  return -1;
 }
 return 0;
}
