
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(
    const uint8_t VAR_2,
    const uint8_t VAR_3,
    size_t VAR_4,
    size_t* VAR_5,
    uint8_t* VAR_6,
    uint8_t* VAR_7) {
  FUNC_0(VAR_4 > 0);
  if (VAR_2 != VAR_3) {
    VAR_6[*VAR_5] = VAR_3;
    VAR_7[*VAR_5] = 0;
    ++(*VAR_5);
    --VAR_4;
  }
  if (VAR_4 == 7) {
    VAR_6[*VAR_5] = VAR_3;
    VAR_7[*VAR_5] = 0;
    ++(*VAR_5);
    --VAR_4;
  }
  if (VAR_4 < 3) {
    size_t VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
      VAR_6[*VAR_5] = VAR_3;
      VAR_7[*VAR_5] = 0;
      ++(*VAR_5);
    }
  } else {
    size_t VAR_9 = *VAR_5;
    VAR_4 -= 3;
    while (VAR_1) {
      VAR_6[*VAR_5] = VAR_0;
      VAR_7[*VAR_5] = VAR_4 & 0x3;
      ++(*VAR_5);
      VAR_4 >>= 2;
      if (VAR_4 == 0) {
        break;
      }
      --VAR_4;
    }
    FUNC_1(VAR_6, VAR_9, *VAR_5);
    FUNC_1(VAR_7, VAR_9, *VAR_5);
  }
}
