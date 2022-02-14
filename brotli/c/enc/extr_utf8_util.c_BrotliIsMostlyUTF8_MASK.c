
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int BROTLI_BOOL ;


 size_t FUNC_0 (int*,int const*,size_t const) ;
 int FUNC_1 (int) ;

BROTLI_BOOL FUNC_2(
    const uint8_t* VAR_0, const size_t VAR_1, const size_t VAR_2,
    const size_t VAR_3, const double VAR_4) {
  size_t VAR_5 = 0;
  size_t VAR_6 = 0;
  while (VAR_6 < VAR_3) {
    int VAR_7;
    size_t VAR_8 =
        FUNC_0(&VAR_7, &VAR_0[(VAR_1 + VAR_6) & VAR_2], VAR_3 - VAR_6);
    VAR_6 += VAR_8;
    if (VAR_7 < 0x110000) VAR_5 += VAR_8;
  }
  return FUNC_1(VAR_5 > VAR_4 * (double)VAR_3);
}
