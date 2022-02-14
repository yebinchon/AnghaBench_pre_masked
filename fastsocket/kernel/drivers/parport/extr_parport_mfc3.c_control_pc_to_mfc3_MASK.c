
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static unsigned char FUNC_0(unsigned char VAR_4)
{
 unsigned char VAR_5 = 32|64;

 if (VAR_4 & VAR_2)
  VAR_5 &= ~32;
 if (VAR_4 & VAR_1)
  VAR_5 |= 128;
 if (VAR_4 & VAR_0)
  VAR_5 &= ~64;
 if (VAR_4 & VAR_3)
                                    ;
 return VAR_5;
}
