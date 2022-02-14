
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__ const,size_t,size_t*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (size_t,size_t*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__ const*,size_t,scalar_t__*,scalar_t__*) ;

void FUNC_3(const uint8_t* VAR_2,
                            size_t VAR_3,
                            size_t* VAR_4,
                            uint8_t* VAR_5,
                            uint8_t* VAR_6) {
  uint8_t VAR_7 = VAR_1;
  size_t VAR_8;
  BROTLI_BOOL VAR_9 = VAR_0;
  BROTLI_BOOL VAR_10 = VAR_0;


  size_t VAR_11 = VAR_3;
  for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
    if (VAR_2[VAR_3 - VAR_8 - 1] == 0) {
      --VAR_11;
    } else {
      break;
    }
  }


  if (VAR_3 > 50) {


    FUNC_2(VAR_2, VAR_11,
                     &VAR_9, &VAR_10);
  }


  for (VAR_8 = 0; VAR_8 < VAR_11;) {
    const uint8_t VAR_12 = VAR_2[VAR_8];
    size_t VAR_13 = 1;
    if ((VAR_12 != 0 && VAR_9) ||
        (VAR_12 == 0 && VAR_10)) {
      size_t VAR_14;
      for (VAR_14 = VAR_8 + 1; VAR_14 < VAR_11 && VAR_2[VAR_14] == VAR_12; ++VAR_14) {
        ++VAR_13;
      }
    }
    if (VAR_12 == 0) {
      FUNC_1(
          VAR_13, VAR_4, VAR_5, VAR_6);
    } else {
      FUNC_0(VAR_7,
                                        VAR_12, VAR_13, VAR_4,
                                        VAR_5, VAR_6);
      VAR_7 = VAR_12;
    }
    VAR_8 += VAR_13;
  }
}
