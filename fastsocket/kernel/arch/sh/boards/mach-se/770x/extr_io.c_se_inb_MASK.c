
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;

unsigned char FUNC_2(unsigned long VAR_0)
{
 if (FUNC_1(VAR_0))
  return (*FUNC_0(VAR_0) >> 8);
 else
  return (*FUNC_0(VAR_0))&0xff;
}
