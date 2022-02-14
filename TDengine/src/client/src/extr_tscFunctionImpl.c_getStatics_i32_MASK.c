
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
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_2(int64_t *VAR_4, int32_t *VAR_5, int32_t VAR_6, int64_t *VAR_7, int64_t *VAR_8,
                           int64_t *VAR_9, int16_t *VAR_10, int16_t *VAR_11, int32_t *VAR_12) {
  *VAR_7 = VAR_1;
  *VAR_8 = VAR_2;
  *VAR_10 = 0;
  *VAR_11 = 0;

  FUNC_0(VAR_6 <= VAR_0);




  for (int32_t VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {
    if (FUNC_1(&VAR_5[VAR_13], VAR_3)) {
      (*VAR_12) += 1;
      continue;
    }

    *VAR_9 += VAR_5[VAR_13];
    if (*VAR_7 > VAR_5[VAR_13]) {
      *VAR_7 = VAR_5[VAR_13];
      *VAR_10 = VAR_13;
    }

    if (*VAR_8 < VAR_5[VAR_13]) {
      *VAR_8 = VAR_5[VAR_13];
      *VAR_11 = VAR_13;
    }
  }
}
