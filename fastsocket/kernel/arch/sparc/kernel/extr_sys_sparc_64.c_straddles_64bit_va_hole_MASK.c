
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_1;
 VAR_5 = VAR_0;

 if (FUNC_0(VAR_2 < VAR_4 && VAR_3 < VAR_4))
  return 0;

 if (FUNC_0(VAR_2 >= VAR_5 && VAR_3 >= VAR_5))
  return 0;

 return 1;
}
