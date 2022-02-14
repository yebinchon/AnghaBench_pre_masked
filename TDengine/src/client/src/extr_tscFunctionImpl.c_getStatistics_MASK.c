
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,double*,int,int *,int *,int *,int *,int *,int*) ;
 int FUNC_1 (int *,float*,int,int *,int *,int *,int *,int *,int*) ;
 int FUNC_2 (int *,int *,int,int *,int *,int *,int *,int *,int*) ;
 int FUNC_3 (int *,int*,int,int *,int *,int *,int *,int *,int*) ;
 int FUNC_4 (int *,int *,int,int *,int *,int *,int *,int *,int*) ;
 int FUNC_5 (int *,int,int *,int,int *,int *,int *,int *,int *,int*) ;
 scalar_t__ FUNC_6 (char*,int) ;

void FUNC_7(char *VAR_10, char *VAR_11, int32_t VAR_12, int32_t VAR_13, int32_t VAR_14, int64_t *VAR_15, int64_t *VAR_16,
                   int64_t *VAR_17, int16_t *VAR_18, int16_t *VAR_19, int32_t *VAR_20) {
  int64_t *VAR_21 = (int64_t *)VAR_10;
  if (VAR_14 == VAR_1 || VAR_14 == VAR_6) {
    for (int32_t VAR_22 = 0; VAR_22 < VAR_13; ++VAR_22) {
      if (FUNC_6(VAR_11 + VAR_22 * VAR_12, VAR_14)) {
        (*VAR_20) += 1;
        continue;
      }
    }
  } else {
    if (VAR_14 == VAR_9 || VAR_14 == VAR_2) {
      FUNC_5(VAR_21, VAR_14, (int8_t *)VAR_11, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
    } else if (VAR_14 == VAR_7) {
      FUNC_2(VAR_21, (int16_t *)VAR_11, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
    } else if (VAR_14 == VAR_5) {
      FUNC_3(VAR_21, (int32_t *)VAR_11, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
    } else if (VAR_14 == VAR_0 || VAR_14 == VAR_8) {
      FUNC_4(VAR_21, (int64_t *)VAR_11, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
    } else if (VAR_14 == VAR_3) {
      FUNC_0(VAR_21, (double *)VAR_11, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
    } else if (VAR_14 == VAR_4) {
      FUNC_1(VAR_21, (float *)VAR_11, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
    }
  }
}
