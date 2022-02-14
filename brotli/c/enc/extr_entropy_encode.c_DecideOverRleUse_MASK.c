
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int BROTLI_BOOL ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const uint8_t* VAR_0, const size_t VAR_1,
                             BROTLI_BOOL* VAR_2,
                             BROTLI_BOOL* VAR_3) {
  size_t VAR_4 = 0;
  size_t VAR_5 = 0;
  size_t VAR_6 = 1;
  size_t VAR_7 = 1;
  size_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1;) {
    const uint8_t VAR_9 = VAR_0[VAR_8];
    size_t VAR_10 = 1;
    size_t VAR_11;
    for (VAR_11 = VAR_8 + 1; VAR_11 < VAR_1 && VAR_0[VAR_11] == VAR_9; ++VAR_11) {
      ++VAR_10;
    }
    if (VAR_10 >= 3 && VAR_9 == 0) {
      VAR_4 += VAR_10;
      ++VAR_6;
    }
    if (VAR_10 >= 4 && VAR_9 != 0) {
      VAR_5 += VAR_10;
      ++VAR_7;
    }
    VAR_8 += VAR_10;
  }
  *VAR_2 =
      FUNC_0(VAR_5 > VAR_7 * 2);
  *VAR_3 = FUNC_0(VAR_4 > VAR_6 * 2);
}
