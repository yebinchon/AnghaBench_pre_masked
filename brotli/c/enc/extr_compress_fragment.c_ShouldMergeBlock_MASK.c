
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int BROTLI_BOOL ;


 size_t const FUNC_0 (size_t const) ;
 int FUNC_1 (int) ;

__attribute__((used)) static BROTLI_BOOL FUNC_2(
    const uint8_t* VAR_0, size_t VAR_1, const uint8_t* VAR_2) {
  size_t VAR_3[256] = { 0 };
  static const size_t VAR_4 = 43;
  size_t VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += VAR_4) {
    ++VAR_3[VAR_0[VAR_5]];
  }
  {
    const size_t VAR_6 = (VAR_1 + VAR_4 - 1) / VAR_4;
    double VAR_7 = (FUNC_0(VAR_6) + 0.5) * (double)VAR_6 + 200;
    for (VAR_5 = 0; VAR_5 < 256; ++VAR_5) {
      VAR_7 -= (double)VAR_3[VAR_5] * (VAR_2[VAR_5] + FUNC_0(VAR_3[VAR_5]));
    }
    return FUNC_1(VAR_7 >= 0.0);
  }
}
