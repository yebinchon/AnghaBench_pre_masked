
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int* FUNC_3 (unsigned long) ;

unsigned char FUNC_4(unsigned long VAR_0)
{
 unsigned char VAR_1;

        if (FUNC_1(VAR_0))
                VAR_1 = *(volatile unsigned char *)VAR_0;
 else if (VAR_0 <= 0x3F1)
  VAR_1 = *(volatile unsigned char *)FUNC_0(VAR_0);
 else
  VAR_1 = (*FUNC_3(VAR_0))&0xff;
 FUNC_2();
 return VAR_1;
}
