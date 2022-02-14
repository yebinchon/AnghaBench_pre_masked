
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int VAR_0, const void *VAR_1, unsigned long VAR_2)
{
 const unsigned long *VAR_3 = VAR_1;
 unsigned char *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 while (VAR_2--)
  *(volatile unsigned long *)VAR_4 = *VAR_3++;
}
