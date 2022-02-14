
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UTF8 ;
typedef int UTF32 ;
typedef int ConversionResult ;
typedef scalar_t__ ConversionFlags ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t const*,unsigned short) ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned short* VAR_10 ;

ConversionResult FUNC_1 (
 const UTF8** VAR_11, const UTF8* VAR_12,
 UTF32** VAR_13, UTF32* VAR_14, ConversionFlags VAR_15) {
    ConversionResult VAR_16 = VAR_4;
    const UTF8* VAR_17 = *VAR_11;
    UTF32* VAR_18 = *VAR_13;
    while (VAR_17 < VAR_12) {
 UTF32 VAR_19 = 0;
 unsigned short VAR_20 = VAR_10[*VAR_17];
 if (VAR_17 + VAR_20 >= VAR_12) {
     VAR_16 = VAR_6; break;
 }

 if (! FUNC_0(VAR_17, VAR_20+1)) {
     VAR_16 = VAR_7;
     break;
 }



 switch (VAR_20) {
     case 5: VAR_19 += *VAR_17++; VAR_19 <<= 6;
     case 4: VAR_19 += *VAR_17++; VAR_19 <<= 6;
     case 3: VAR_19 += *VAR_17++; VAR_19 <<= 6;
     case 2: VAR_19 += *VAR_17++; VAR_19 <<= 6;
     case 1: VAR_19 += *VAR_17++; VAR_19 <<= 6;
     case 0: VAR_19 += *VAR_17++;
 }
 VAR_19 -= VAR_5[VAR_20];

 if (VAR_18 >= VAR_14) {
     VAR_17 -= (VAR_20+1);
     VAR_16 = VAR_9; break;
 }
 if (VAR_19 <= VAR_0) {




     if (VAR_19 >= VAR_2 && VAR_19 <= VAR_3) {
  if (VAR_15 == VAR_8) {
      VAR_17 -= (VAR_20+1);
      VAR_16 = VAR_7;
      break;
  } else {
      *VAR_18++ = VAR_1;
  }
     } else {
  *VAR_18++ = VAR_19;
     }
 } else {
     VAR_16 = VAR_7;
     *VAR_18++ = VAR_1;
 }
    }
    *VAR_11 = VAR_17;
    *VAR_13 = VAR_18;
    return VAR_16;
}
