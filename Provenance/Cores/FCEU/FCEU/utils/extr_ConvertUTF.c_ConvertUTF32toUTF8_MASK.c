
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UTF8 ;
typedef scalar_t__ UTF32 ;
typedef int ConversionResult ;
typedef scalar_t__ ConversionFlags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

ConversionResult FUNC_0 (
 const UTF32** VAR_9, const UTF32* VAR_10,
 UTF8** VAR_11, UTF8* VAR_12, ConversionFlags VAR_13) {
    ConversionResult VAR_14 = VAR_4;
    const UTF32* VAR_15 = *VAR_9;
    UTF8* VAR_16 = *VAR_11;
    while (VAR_15 < VAR_10) {
 UTF32 VAR_17;
 unsigned short VAR_18 = 0;
 const UTF32 VAR_19 = 0xBF;
 const UTF32 VAR_20 = 0x80;
 VAR_17 = *VAR_15++;
 if (VAR_13 == VAR_7 ) {

     if (VAR_17 >= VAR_2 && VAR_17 <= VAR_3) {
  --VAR_15;
  VAR_14 = VAR_6;
  break;
     }
 }




 if (VAR_17 < (UTF32)0x80) { VAR_18 = 1;
 } else if (VAR_17 < (UTF32)0x800) { VAR_18 = 2;
 } else if (VAR_17 < (UTF32)0x10000) { VAR_18 = 3;
 } else if (VAR_17 <= VAR_0) { VAR_18 = 4;
 } else { VAR_18 = 3;
         VAR_17 = VAR_1;
         VAR_14 = VAR_6;
 }

 VAR_16 += VAR_18;
 if (VAR_16 > VAR_12) {
     --VAR_15;
     VAR_16 -= VAR_18; VAR_14 = VAR_8; break;
 }
 switch (VAR_18) {
     case 4: *--VAR_16 = (UTF8)((VAR_17 | VAR_20) & VAR_19); VAR_17 >>= 6;
     case 3: *--VAR_16 = (UTF8)((VAR_17 | VAR_20) & VAR_19); VAR_17 >>= 6;
     case 2: *--VAR_16 = (UTF8)((VAR_17 | VAR_20) & VAR_19); VAR_17 >>= 6;
     case 1: *--VAR_16 = (UTF8) (VAR_17 | VAR_5[VAR_18]);
 }
 VAR_16 += VAR_18;
    }
    *VAR_9 = VAR_15;
    *VAR_11 = VAR_16;
    return VAR_14;
}
