
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned char* FUNC_1 (unsigned long) ;

void FUNC_2(unsigned char VAR_0, unsigned long VAR_1)
{

        if (FUNC_0(VAR_1))
                *(volatile unsigned char *)VAR_1 = VAR_0;
 else
  *(FUNC_1(VAR_1)) = VAR_0;
}
