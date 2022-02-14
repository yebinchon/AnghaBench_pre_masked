
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 unsigned char* FUNC_2 (unsigned long) ;

void FUNC_3(unsigned char VAR_0, unsigned long VAR_1)
{
 if (FUNC_0(VAR_1))
  *(volatile unsigned char *)VAR_1 = VAR_0;
 else
  *(FUNC_2(VAR_1)) = VAR_0;
 FUNC_1();
}
