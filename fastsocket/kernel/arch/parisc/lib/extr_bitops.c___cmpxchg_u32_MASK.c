
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int volatile*,unsigned long) ;
 int FUNC_1 (unsigned int volatile*,unsigned long) ;

unsigned long FUNC_2(volatile unsigned int *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_0(VAR_0, VAR_3);
 if ((VAR_4 = *VAR_0) == VAR_1)
  *VAR_0 = VAR_2;
 FUNC_1(VAR_0, VAR_3);
 return (unsigned long)VAR_4;
}
