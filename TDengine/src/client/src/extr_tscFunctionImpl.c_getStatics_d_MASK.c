
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double*,int ) ;

__attribute__((used)) static void FUNC_2(int64_t *VAR_4, double *VAR_5, int32_t VAR_6, double *VAR_7, double *VAR_8, double *VAR_9,
                         int16_t *VAR_10, int16_t *VAR_11, int32_t *VAR_12) {
  double VAR_13 = VAR_0;
  double VAR_14 = -VAR_0;
  double VAR_15 = 0;
  double VAR_16 = 0;
  double VAR_17 = 0;

  FUNC_0(VAR_6 <= VAR_1);

  int64_t VAR_18 = 0;
  double VAR_19 = VAR_2;

  for (int32_t VAR_20 = 0; VAR_20 < VAR_6; ++VAR_20) {
    if (FUNC_1(&VAR_5[VAR_20], VAR_3)) {
      (*VAR_12) += 1;
      continue;
    }

    double VAR_21 = 0;
    *(int64_t*)(&VAR_21) = *(int64_t*)(&(VAR_5[VAR_20]));


    VAR_17 += VAR_21;
    if (VAR_13 > VAR_21) {
      VAR_13 = VAR_21;
      VAR_15 = VAR_20;
    }

    if (VAR_14 < VAR_21) {
      VAR_14 = VAR_21;
      VAR_16 = VAR_20;
    }
  }

  double VAR_22 = 0;
  *(int64_t*)(&VAR_22) = *(int64_t*)VAR_9;
  VAR_22 += VAR_17;
  *(int64_t*)(VAR_9) = *(int64_t*)(&VAR_22);

  *(int64_t*)VAR_8 = *(int64_t*)(&VAR_14);
  *(int64_t*)VAR_7 = *(int64_t*)(&VAR_13);
  *(int64_t*)VAR_10 = *(int64_t*)(&VAR_15);
  *(int64_t*)VAR_11 = *(int64_t*)(&VAR_16);
}
