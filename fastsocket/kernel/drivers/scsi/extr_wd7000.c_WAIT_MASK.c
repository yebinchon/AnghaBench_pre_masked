
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static inline short FUNC_2(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;
 unsigned long VAR_7 = VAR_1 + VAR_0;

 while (FUNC_1(VAR_1, VAR_7)) {
  VAR_6 = FUNC_0(VAR_2) & VAR_3;

  if (((VAR_6 & VAR_4) == VAR_4) && ((VAR_6 & VAR_5) == 0))
   return (0);
 }

 return (1);
}
