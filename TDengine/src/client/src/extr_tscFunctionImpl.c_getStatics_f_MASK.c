
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 float VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (float*,int ) ;

__attribute__((used)) static void FUNC_2(int64_t *VAR_3, float *VAR_4, int32_t VAR_5, double *VAR_6, double *VAR_7, double *VAR_8,
                         int16_t *VAR_9, int16_t *VAR_10, int32_t *VAR_11) {
  float VAR_12 = VAR_0;
  float VAR_13 = -VAR_0;
  float VAR_14 = 0;
  float VAR_15 = 0;
  double VAR_16 = 0;

  FUNC_0(VAR_5 <= VAR_1);

  for (int32_t VAR_17 = 0; VAR_17 < VAR_5; ++VAR_17) {
    if (FUNC_1(&VAR_4[VAR_17], VAR_2)) {
      (*VAR_11) += 1;
      continue;
    }

    float VAR_18 = 0;
    *(int32_t*)(&VAR_18) = *(int32_t*)(&(VAR_4[VAR_17]));


    VAR_16 += VAR_18;
    if (VAR_12 > VAR_18) {
      VAR_12 = VAR_18;
      VAR_14 = VAR_17;
    }

    if (VAR_13 < VAR_18) {
      VAR_13 = VAR_18;
      VAR_15 = VAR_17;
    }
  }

  double VAR_19 = 0;
  *(int64_t*)(&VAR_19) = *(int64_t*)VAR_8;
  VAR_19 += VAR_16;
  *(int64_t*)(VAR_8) = *(int64_t*)(&VAR_19);

  *(int32_t*)VAR_7 = *(int32_t*)(&VAR_13);
  *(int32_t*)VAR_6 = *(int32_t*)(&VAR_12);
  *(int32_t*)VAR_9 = *(int32_t*)(&VAR_14);
  *(int32_t*)VAR_10 = *(int32_t*)(&VAR_15);

}
