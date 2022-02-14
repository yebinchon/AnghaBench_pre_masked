
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;



char FUNC_0(UINT VAR_0)
{
 VAR_0 = VAR_0 % 16;

 if (VAR_0 <= 9)
 {
  return '0' + VAR_0;
 }
 else
 {
  return 'a' + (VAR_0 - 10);
 }
}
