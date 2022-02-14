
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 do {
  if (++VAR_2 == VAR_1)
   break;
 } while ((VAR_0 = VAR_0 & (VAR_0 - 1)));

 return VAR_2;
}
