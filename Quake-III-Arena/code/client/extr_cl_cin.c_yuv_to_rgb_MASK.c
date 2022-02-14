
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long* VAR_0 ;
 long* VAR_1 ;
 long* VAR_2 ;
 long* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static unsigned short FUNC_0( long VAR_5, long VAR_6, long VAR_7 )
{
 long VAR_8,VAR_9,VAR_10,VAR_11 = (long)(VAR_4[(VAR_5)]);

 VAR_8 = (VAR_11 + VAR_3[VAR_7]) >> 9;
 VAR_9 = (VAR_11 + VAR_1[VAR_6] + VAR_2[VAR_7]) >> 8;
 VAR_10 = (VAR_11 + VAR_0[VAR_6]) >> 9;

 if (VAR_8<0) VAR_8 = 0; if (VAR_9<0) VAR_9 = 0; if (VAR_10<0) VAR_10 = 0;
 if (VAR_8 > 31) VAR_8 = 31; if (VAR_9 > 63) VAR_9 = 63; if (VAR_10 > 31) VAR_10 = 31;

 return (unsigned short)((VAR_8<<11)+(VAR_9<<5)+(VAR_10));
}
