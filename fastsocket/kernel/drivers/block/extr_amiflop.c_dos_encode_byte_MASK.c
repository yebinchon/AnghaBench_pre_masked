
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;


 unsigned char* VAR_0 ;

__attribute__((used)) static inline ushort FUNC_0(unsigned char VAR_1)
{
 register unsigned char *VAR_2, VAR_3, VAR_4;
 register ushort VAR_5;

 VAR_2=VAR_0;
 VAR_4=VAR_1;
 VAR_3=VAR_4>>4;
 VAR_4&=15;
 VAR_5=VAR_2[VAR_3] <<8 | VAR_2 [VAR_4];
 return (VAR_5|((VAR_5&(256|64)) ? 0: 128));
}
