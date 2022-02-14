
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int BrotliDecoderState ;
typedef scalar_t__ BrotliDecoderResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,size_t*,int const**,size_t*,int**,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int const) ;

int FUNC_5(const uint8_t* VAR_2, size_t VAR_3) {
  size_t VAR_4 = 0;
  if (VAR_3 > 0)
    VAR_4 = VAR_2[VAR_3 - 1] & 7;
  const uint8_t* VAR_5 = VAR_2;

  const int VAR_6 = 1024;
  uint8_t* VAR_7 = (uint8_t*) FUNC_4(VAR_6);
  if (!VAR_7) {

    return 0;
  }


  const size_t VAR_8 = (VAR_4 == 0) ? (1 << 26) : (1 << 24);
  size_t VAR_9 = 0;

  BrotliDecoderState* VAR_10 = FUNC_0(0, 0, 0);

  if (VAR_4 == 0)
    VAR_4 = VAR_3;

  for (size_t VAR_11 = 0; VAR_11 < VAR_3;) {
    size_t VAR_12 = VAR_11 + VAR_4;
    if (VAR_12 > VAR_3)
      VAR_12 = VAR_3;
    size_t VAR_13 = VAR_12 - VAR_11;
    VAR_11 = VAR_12;
    BrotliDecoderResult VAR_14 = VAR_1;
    while (VAR_14 == VAR_1) {
      size_t VAR_15 = VAR_6;
      uint8_t* VAR_16 = VAR_7;
      VAR_14 = FUNC_1(
          VAR_10, &VAR_13, &VAR_5, &VAR_15, &VAR_16, &VAR_9);
      if (VAR_9 > VAR_8)
        break;
    }
    if (VAR_9 > VAR_8)
      break;
    if (VAR_14 != VAR_0)
      break;
  }

  FUNC_2(VAR_10);
  FUNC_3(VAR_7);
  return 0;
}
