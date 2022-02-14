
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(
    size_t VAR_2,
    size_t* VAR_3,
    uint8_t* VAR_4,
    uint8_t* VAR_5) {
  if (VAR_2 == 11) {
    VAR_4[*VAR_3] = 0;
    VAR_5[*VAR_3] = 0;
    ++(*VAR_3);
    --VAR_2;
  }
  if (VAR_2 < 3) {
    size_t VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
      VAR_4[*VAR_3] = 0;
      VAR_5[*VAR_3] = 0;
      ++(*VAR_3);
    }
  } else {
    size_t VAR_7 = *VAR_3;
    VAR_2 -= 3;
    while (VAR_1) {
      VAR_4[*VAR_3] = VAR_0;
      VAR_5[*VAR_3] = VAR_2 & 0x7;
      ++(*VAR_3);
      VAR_2 >>= 3;
      if (VAR_2 == 0) {
        break;
      }
      --VAR_2;
    }
    FUNC_0(VAR_4, VAR_7, *VAR_3);
    FUNC_0(VAR_5, VAR_7, *VAR_3);
  }
}
