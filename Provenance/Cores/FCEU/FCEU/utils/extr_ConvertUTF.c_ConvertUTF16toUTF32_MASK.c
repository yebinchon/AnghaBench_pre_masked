
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UTF32 ;
typedef scalar_t__ UTF16 ;
typedef scalar_t__ ConversionResult ;
typedef scalar_t__ ConversionFlags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

ConversionResult FUNC_2 (
 const UTF16** VAR_12, const UTF16* VAR_13,
 UTF32** VAR_14, UTF32* VAR_15, ConversionFlags VAR_16) {
    ConversionResult VAR_17 = VAR_4;
    const UTF16* VAR_18 = *VAR_12;
    UTF32* VAR_19 = *VAR_14;
    UTF32 VAR_20, VAR_21;
    while (VAR_18 < VAR_13) {
 const UTF16* VAR_22 = VAR_18;
 VAR_20 = *VAR_18++;

 if (VAR_20 >= VAR_1 && VAR_20 <= VAR_0) {

     if (VAR_18 < VAR_13) {
  VAR_21 = *VAR_18;

  if (VAR_21 >= VAR_3 && VAR_21 <= VAR_2) {
      VAR_20 = ((VAR_20 - VAR_1) << VAR_6)
   + (VAR_21 - VAR_3) + VAR_5;
      ++VAR_18;
  } else if (VAR_16 == VAR_10) {
      --VAR_18;
      VAR_17 = VAR_8;
      break;
  }
     } else {
  --VAR_18;
  VAR_17 = VAR_7;
  break;
     }
 } else if (VAR_16 == VAR_10) {

     if (VAR_20 >= VAR_3 && VAR_20 <= VAR_2) {
  --VAR_18;
  VAR_17 = VAR_8;
  break;
     }
 }
 if (VAR_19 >= VAR_15) {
     VAR_18 = VAR_22;
     VAR_17 = VAR_11; break;
 }
 *VAR_19++ = VAR_20;
    }
    *VAR_12 = VAR_18;
    *VAR_14 = VAR_19;






    return VAR_17;
}
