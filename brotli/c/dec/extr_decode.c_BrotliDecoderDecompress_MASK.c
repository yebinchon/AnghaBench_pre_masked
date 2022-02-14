
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int BrotliDecoderState ;
typedef scalar_t__ BrotliDecoderResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t*,int const**,size_t*,int **,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

BrotliDecoderResult FUNC_3(
    size_t VAR_2, const uint8_t* VAR_3, size_t* VAR_4,
    uint8_t* VAR_5) {
  BrotliDecoderState VAR_6;
  BrotliDecoderResult VAR_7;
  size_t VAR_8 = 0;
  size_t VAR_9 = VAR_2;
  const uint8_t* VAR_10 = VAR_3;
  size_t VAR_11 = *VAR_4;
  uint8_t* VAR_12 = VAR_5;
  if (!FUNC_2(&VAR_6, 0, 0, 0)) {
    return VAR_0;
  }
  VAR_7 = FUNC_0(
      &VAR_6, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_8);
  *VAR_4 = VAR_8;
  FUNC_1(&VAR_6);
  if (VAR_7 != VAR_1) {
    VAR_7 = VAR_0;
  }
  return VAR_7;
}
