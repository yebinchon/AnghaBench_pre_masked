
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int* FUNC_1 (unsigned long) ;

unsigned char FUNC_2(unsigned long VAR_0)
{
 if (FUNC_0(VAR_0))
  return *(volatile unsigned char *)VAR_0;
 else
  return (*FUNC_1(VAR_0)) & 0xff;
}
