
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned long VAR_2, unsigned int VAR_3)
{
 if (VAR_3 == 0)
  return 0;

 if (VAR_3 > VAR_1)
  return 1;

 if (VAR_2 >> VAR_0 != (VAR_2 + VAR_3 - 1) >> VAR_0)
  return 1;

 return 0;
}
