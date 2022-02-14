
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

unsigned char FUNC_3(unsigned long VAR_0)
{
 if (VAR_0 >= 0x300 && VAR_0 < 0x320 && VAR_0 & 0x01)
  return FUNC_1(VAR_0 - 1) >> 8;

 return FUNC_0(FUNC_2(VAR_0));
}
