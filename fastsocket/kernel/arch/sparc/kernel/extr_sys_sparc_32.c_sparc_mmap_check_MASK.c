
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

int FUNC_0(unsigned long VAR_4, unsigned long VAR_5)
{
 if (VAR_0 &&
     (VAR_5 > 0x20000000 ||
      (VAR_4 < 0xe0000000 && VAR_4 + VAR_5 > 0x20000000)))
  return -VAR_1;


 if (VAR_5 > VAR_3 - VAR_2 || VAR_4 + VAR_5 > VAR_3 - VAR_2)
  return -VAR_1;

 return 0;
}
