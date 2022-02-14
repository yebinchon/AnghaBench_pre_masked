
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int,unsigned long,unsigned char*,int,int,int ) ;

void FUNC_4(unsigned char VAR_4, unsigned long VAR_5)
{
 if (VAR_5 >= 0x300 && VAR_5 < 0x320)
  FUNC_2(VAR_4, FUNC_1(VAR_5));
 else







  *(volatile unsigned char *)FUNC_0(VAR_5) = VAR_4;
}
