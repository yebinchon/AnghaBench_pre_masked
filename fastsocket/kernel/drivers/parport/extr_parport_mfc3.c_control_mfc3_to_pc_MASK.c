
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
 unsigned char VAR_5 = VAR_3
     | VAR_0 | VAR_2;

 if (VAR_4 & 128)
  VAR_5 |= VAR_1;
 if (VAR_4 & 64)
  VAR_5 &= ~VAR_0;
 if (VAR_4 & 32)
  VAR_5 &= ~VAR_2;
 return VAR_5;
}
