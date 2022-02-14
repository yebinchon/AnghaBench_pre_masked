
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2)
{
 if ((FUNC_1() || FUNC_0()) && VAR_2 >= 32)
  *VAR_1 &= ~(1 << (VAR_2 - 32));
 else
  *VAR_0 &= ~(1 << VAR_2);
}
