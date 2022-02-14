
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_0(FUNC_2(&VAR_1));
 unsigned long VAR_5 = FUNC_0(FUNC_2(&VAR_2));


 if (VAR_3 <= VAR_0)
  return 0;
 if (VAR_3 >= VAR_4 && VAR_3 < VAR_5)
  return 1;

 if (FUNC_3(FUNC_1(VAR_3)))
  return 1;
 return 0;
}
