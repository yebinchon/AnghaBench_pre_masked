
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4;


 if (!FUNC_2(VAR_0))
  return (FUNC_0(VAR_2) == FUNC_0(VAR_3));

 VAR_4 = (((VAR_2 >> VAR_1) != 0) +
    ((VAR_3 >> VAR_1) != 0));


 if (VAR_4 == 0)
  return (FUNC_0(VAR_2) == FUNC_0(VAR_3));


 if (VAR_4 == 1)
  return 0;


 return (FUNC_1(VAR_2) == FUNC_1(VAR_3));
}
