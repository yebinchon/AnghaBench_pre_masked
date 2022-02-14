
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
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int,unsigned long,unsigned char*,int,int,int ) ;

unsigned char FUNC_4(unsigned long VAR_4)
{
 if (VAR_4 >= 0x300 && VAR_4 < 0x320)
  return FUNC_2(FUNC_1(VAR_4));
 else
 return *(volatile unsigned char *)FUNC_0(VAR_4);
}
