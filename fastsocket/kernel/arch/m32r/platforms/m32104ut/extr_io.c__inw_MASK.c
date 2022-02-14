
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned short FUNC_2 (int ) ;

unsigned short FUNC_3(unsigned long VAR_2)
{
 if (VAR_2 >= VAR_1 && VAR_2 < VAR_0)
  return FUNC_2(FUNC_1(VAR_2));

 return *(volatile unsigned short *)FUNC_0(VAR_2);
}
