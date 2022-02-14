
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int* FUNC_2 (unsigned long) ;

unsigned char FUNC_3(unsigned long VAR_0)
{
 unsigned char VAR_1;

        if (FUNC_0(VAR_0))
                VAR_1 = *(volatile unsigned char *)VAR_0;
 else
  VAR_1 = (*FUNC_2(VAR_0)) & 0xff;
 FUNC_1();
 return VAR_1;
}
