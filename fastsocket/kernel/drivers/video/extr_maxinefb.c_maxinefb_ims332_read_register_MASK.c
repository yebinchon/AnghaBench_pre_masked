
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

unsigned int FUNC_0(int VAR_1)
{
 register unsigned char *VAR_2 = (char *) VAR_0;
 unsigned char *VAR_3;
 register unsigned int VAR_4, VAR_5;

 VAR_3 = VAR_2 + 0x80000 + (VAR_1 << 4);
 VAR_4 = *((volatile unsigned short *) VAR_3);
 VAR_5 = *((volatile unsigned short *) VAR_2);

 return (VAR_4 & 0xffff) | ((VAR_5 & 0xff00) << 8);
}
