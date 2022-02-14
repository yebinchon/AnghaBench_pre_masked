
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;

void FUNC_1(unsigned long VAR_0, void *VAR_1, unsigned long VAR_2)
{
 volatile unsigned long *VAR_3;
 unsigned int *VAR_4 = VAR_1;

 VAR_3 = (volatile unsigned long *)FUNC_0(VAR_0);

 while (VAR_2--)
  *VAR_4++ = *VAR_3;
}
