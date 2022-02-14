
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;



bool FUNC_0(char VAR_0)
{
 UCHAR VAR_1 = (UCHAR)VAR_0;
 if (VAR_1 <= 31)
 {
  return 0;
 }
 if (VAR_1 >= 127)
 {
  return 0;
 }
 return 1;
}
