
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UTF8 ;
typedef scalar_t__ UTF32 ;
typedef scalar_t__ UTF16 ;
typedef int ConversionResult ;
typedef scalar_t__ ConversionFlags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

ConversionResult FUNC_0 (
 const UTF16** VAR_13, const UTF16* VAR_14,
 UTF8** VAR_15, UTF8* VAR_16, ConversionFlags VAR_17) {
    ConversionResult VAR_18 = VAR_5;
    const UTF16* VAR_19 = *VAR_13;
    UTF8* VAR_20 = *VAR_15;
    while (VAR_19 < VAR_14) {
 UTF32 VAR_21;
 unsigned short VAR_22 = 0;
 const UTF32 VAR_23 = 0xBF;
 const UTF32 VAR_24 = 0x80;
 const UTF16* VAR_25 = VAR_19;
 VAR_21 = *VAR_19++;

 if (VAR_21 >= VAR_2 && VAR_21 <= VAR_1) {

     if (VAR_19 < VAR_14) {
  UTF32 VAR_26 = *VAR_19;

  if (VAR_26 >= VAR_4 && VAR_26 <= VAR_3) {
      VAR_21 = ((VAR_21 - VAR_2) << VAR_8)
   + (VAR_26 - VAR_4) + VAR_7;
      ++VAR_19;
  } else if (VAR_17 == VAR_11) {
      --VAR_19;
      VAR_18 = VAR_10;
      break;
  }
     } else {
  --VAR_19;
  VAR_18 = VAR_9;
  break;
     }
 } else if (VAR_17 == VAR_11) {

     if (VAR_21 >= VAR_4 && VAR_21 <= VAR_3) {
  --VAR_19;
  VAR_18 = VAR_10;
  break;
     }
 }

 if (VAR_21 < (UTF32)0x80) { VAR_22 = 1;
 } else if (VAR_21 < (UTF32)0x800) { VAR_22 = 2;
 } else if (VAR_21 < (UTF32)0x10000) { VAR_22 = 3;
 } else if (VAR_21 < (UTF32)0x110000) { VAR_22 = 4;
 } else { VAR_22 = 3;
         VAR_21 = VAR_0;
 }

 VAR_20 += VAR_22;
 if (VAR_20 > VAR_16) {
     VAR_19 = VAR_25;
     VAR_20 -= VAR_22; VAR_18 = VAR_12; break;
 }
 switch (VAR_22) {
     case 4: *--VAR_20 = (UTF8)((VAR_21 | VAR_24) & VAR_23); VAR_21 >>= 6;
     case 3: *--VAR_20 = (UTF8)((VAR_21 | VAR_24) & VAR_23); VAR_21 >>= 6;
     case 2: *--VAR_20 = (UTF8)((VAR_21 | VAR_24) & VAR_23); VAR_21 >>= 6;
     case 1: *--VAR_20 = (UTF8)(VAR_21 | VAR_6[VAR_22]);
 }
 VAR_20 += VAR_22;
    }
    *VAR_13 = VAR_19;
    *VAR_15 = VAR_20;
    return VAR_18;
}
