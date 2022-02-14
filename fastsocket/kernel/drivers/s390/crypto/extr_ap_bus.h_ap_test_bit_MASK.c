
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(unsigned int *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 > VAR_0)
  return 0;
 return (*VAR_1 & (0x80000000u >> VAR_2)) != 0;
}
