
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned short FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long,unsigned short*,int,int,int ) ;

unsigned short FUNC_6(unsigned long VAR_4)
{
 if (VAR_4 >= VAR_1 && VAR_4 < VAR_0)
  return FUNC_4(FUNC_1(VAR_4));
 return *(volatile unsigned short *)FUNC_0(VAR_4);
}
