
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_2(int64_t *VAR_5, int64_t *VAR_6, int32_t VAR_7, int64_t *VAR_8, int64_t *VAR_9,
                           int64_t *VAR_10, int16_t *VAR_11, int16_t *VAR_12, int32_t *VAR_13) {
  *VAR_8 = VAR_1;
  *VAR_9 = VAR_2;
  *VAR_11 = 0;
  *VAR_12 = 0;

  FUNC_0(VAR_7 <= VAR_0);

  int64_t VAR_14 = 0;
  int64_t VAR_15 = VAR_3;

  for (int32_t VAR_16 = 0; VAR_16 < VAR_7; ++VAR_16) {
    if (FUNC_1(&VAR_6[VAR_16], VAR_4)) {
      (*VAR_13) += 1;
      continue;
    }

    *VAR_10 += VAR_6[VAR_16];
    if (*VAR_8 > VAR_6[VAR_16]) {
      *VAR_8 = VAR_6[VAR_16];
      *VAR_11 = VAR_16;
    }

    if (*VAR_9 < VAR_6[VAR_16]) {
      *VAR_9 = VAR_6[VAR_16];
      *VAR_12 = VAR_16;
    }
  }
}
