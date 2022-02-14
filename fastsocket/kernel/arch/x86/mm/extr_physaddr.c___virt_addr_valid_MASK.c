
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (unsigned long) ;

bool FUNC_2(unsigned long VAR_4)
{
 if (VAR_4 < VAR_1)
  return 0;
 if (VAR_3 && FUNC_0((void *) VAR_4))
  return 0;
 if (VAR_4 >= VAR_0)
  return 0;
 return FUNC_1((VAR_4 - VAR_1) >> VAR_2);
}
