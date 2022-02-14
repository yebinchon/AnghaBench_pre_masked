
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_0();
 unsigned long VAR_3;

 VAR_2 &= ~VAR_0;
 VAR_2 += VAR_1;
 FUNC_1(VAR_2);

 VAR_3 = FUNC_0() & ~VAR_0;

 return ((long)(VAR_3 - VAR_2)) > 0L;
}
