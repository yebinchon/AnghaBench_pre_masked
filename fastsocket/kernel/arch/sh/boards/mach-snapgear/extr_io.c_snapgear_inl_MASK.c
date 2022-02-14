
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned int* FUNC_2 (unsigned long) ;

unsigned int FUNC_3(unsigned long VAR_0)
{
 if (FUNC_0(VAR_0))
  return *(volatile unsigned long *)VAR_0;
 else if (VAR_0 >= 0x2000)
  return *FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);
 return 0;
}
