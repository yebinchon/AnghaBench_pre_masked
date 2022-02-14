
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned short,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_4 ;

int FUNC_3(unsigned int VAR_5)
{
 if (VAR_5 >= VAR_1 && VAR_5 <= VAR_2) {
  unsigned short VAR_6 = 1 << (VAR_5 - VAR_1);
  unsigned int VAR_7,VAR_8;
  FUNC_2(VAR_6, VAR_5, VAR_7, VAR_8);
  if (FUNC_1(VAR_7, VAR_8) == 0)
   return -VAR_0;
  FUNC_0(VAR_7, VAR_8, VAR_3);
  *(volatile unsigned short *)VAR_4 &= ~VAR_6;
 }

 return 0;
}
