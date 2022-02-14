
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int BROTLI_BOOL ;


 scalar_t__ FUNC_0 (size_t const) ;

__attribute__((used)) static void FUNC_1(const uint32_t* VAR_0, size_t VAR_1,
                    BROTLI_BOOL VAR_2, float* VAR_3) {
  size_t VAR_4 = 0;
  size_t VAR_5;
  float VAR_6;
  float VAR_7;
  size_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_4 += VAR_0[VAR_8];
  }
  VAR_6 = (float)FUNC_0(VAR_4);
  VAR_5 = VAR_4;
  if (!VAR_2) {
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
      if (VAR_0[VAR_8] == 0) VAR_5++;
    }
  }
  VAR_7 = (float)FUNC_0(VAR_5) + 2;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_0[VAR_8] == 0) {
      VAR_3[VAR_8] = VAR_7;
      continue;
    }


    VAR_3[VAR_8] = VAR_6 - (float)FUNC_0(VAR_0[VAR_8]);


    if (VAR_3[VAR_8] < 1) VAR_3[VAR_8] = 1;
  }
}
