
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0)
{
 unsigned long VAR_1 = 100000;
 while (VAR_1--)
  if (FUNC_0(VAR_0 + 3) & 0x80)
   return 0;
 return 1;
}
