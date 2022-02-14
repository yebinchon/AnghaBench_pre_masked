
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

int FUNC_2(unsigned int VAR_4)
{
 if (VAR_4 < FUNC_0(0) || VAR_4 > FUNC_1(15))
  return -VAR_0;

 if (VAR_4 < FUNC_1(0) && VAR_4 > FUNC_0(7))
  return -VAR_0;

 if (VAR_4 < FUNC_0(4))
  return (VAR_4 - FUNC_0(0)) + VAR_1;

 if (VAR_4 < FUNC_1(0))
  return (VAR_4 - FUNC_0(4)) + VAR_2;

 return (VAR_4 - FUNC_1(0)) + VAR_3;
}
