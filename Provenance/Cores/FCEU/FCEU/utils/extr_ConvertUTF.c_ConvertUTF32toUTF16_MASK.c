
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UTF32 ;
typedef void* UTF16 ;
typedef int ConversionResult ;
typedef scalar_t__ ConversionFlags ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

ConversionResult FUNC_0 (
 const UTF32** VAR_13, const UTF32* VAR_14,
 UTF16** VAR_15, UTF16* VAR_16, ConversionFlags VAR_17) {
    ConversionResult VAR_18 = VAR_6;
    const UTF32* VAR_19 = *VAR_13;
    UTF16* VAR_20 = *VAR_15;
    while (VAR_19 < VAR_14) {
 UTF32 VAR_21;
 if (VAR_20 >= VAR_16) {
     VAR_18 = VAR_12; break;
 }
 VAR_21 = *VAR_19++;
 if (VAR_21 <= VAR_0) {

     if (VAR_21 >= VAR_3 && VAR_21 <= VAR_4) {
  if (VAR_17 == VAR_11) {
      --VAR_19;
      VAR_18 = VAR_10;
      break;
  } else {
      *VAR_20++ = VAR_2;
  }
     } else {
  *VAR_20++ = (UTF16)VAR_21;
     }
 } else if (VAR_21 > VAR_1) {
     if (VAR_17 == VAR_11) {
  VAR_18 = VAR_10;
     } else {
  *VAR_20++ = VAR_2;
     }
 } else {

     if (VAR_20 + 1 >= VAR_16) {
  --VAR_19;
  VAR_18 = VAR_12; break;
     }
     VAR_21 -= VAR_7;
     *VAR_20++ = (UTF16)((VAR_21 >> VAR_9) + VAR_3);
     *VAR_20++ = (UTF16)((VAR_21 & VAR_8) + VAR_5);
 }
    }
    *VAR_13 = VAR_19;
    *VAR_15 = VAR_20;
    return VAR_18;
}
