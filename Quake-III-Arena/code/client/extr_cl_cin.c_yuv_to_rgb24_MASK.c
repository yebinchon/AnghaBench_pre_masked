
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (long) ;
 long* VAR_0 ;
 long* VAR_1 ;
 long* VAR_2 ;
 long* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static unsigned int FUNC_1( long VAR_5, long VAR_6, long VAR_7 )
{
 long VAR_8,VAR_9,VAR_10,VAR_11 = (long)(VAR_4[(VAR_5)]);

 VAR_8 = (VAR_11 + VAR_3[VAR_7]) >> 6;
 VAR_9 = (VAR_11 + VAR_1[VAR_6] + VAR_2[VAR_7]) >> 6;
 VAR_10 = (VAR_11 + VAR_0[VAR_6]) >> 6;

 if (VAR_8<0) VAR_8 = 0; if (VAR_9<0) VAR_9 = 0; if (VAR_10<0) VAR_10 = 0;
 if (VAR_8 > 255) VAR_8 = 255; if (VAR_9 > 255) VAR_9 = 255; if (VAR_10 > 255) VAR_10 = 255;

 return FUNC_0 ((VAR_8)|(VAR_9<<8)|(VAR_10<<16)|(255<<24));
}
