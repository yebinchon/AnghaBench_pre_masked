
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 unsigned char* FUNC_3 (unsigned long) ;

void FUNC_4(unsigned char VAR_0, unsigned long VAR_1)
{
        if (FUNC_1(VAR_1))
                *(volatile unsigned char *)VAR_1 = VAR_0;
 else if (VAR_1 <= 0x3F1)
  *(volatile unsigned char *)FUNC_0(VAR_1) = VAR_0;
 else
  *(FUNC_3(VAR_1)) = VAR_0;
 FUNC_2();
}
