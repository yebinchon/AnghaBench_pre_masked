
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned short,unsigned short) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned short,unsigned int,unsigned short,unsigned short) ;
 scalar_t__ VAR_3 ;

void FUNC_2(unsigned int VAR_4)
{
 if (VAR_4 >= VAR_0 && VAR_4 <= VAR_1) {

  unsigned short VAR_5 = 1 << (VAR_4 - VAR_0);
  unsigned short VAR_6,VAR_7;
  *(volatile unsigned short *)VAR_3 &= ~VAR_5;
  *(volatile unsigned short *)VAR_2 &= ~VAR_5;
  FUNC_1(VAR_5, VAR_4, VAR_6, VAR_7);
  FUNC_0(VAR_6, VAR_7);
 }
}
