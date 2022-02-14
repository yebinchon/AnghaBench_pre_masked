
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int nSize; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,size_t,int ) ;
 TYPE_1__* VAR_3 ;

void FUNC_3(void *VAR_4, void *VAR_5, int32_t VAR_6, int32_t VAR_7, void *VAR_8, int32_t VAR_9) {
  int32_t *VAR_10 = (int32_t *)VAR_4;
  int32_t *VAR_11 = (int32_t *)VAR_5;
  double * VAR_12 = (double *)VAR_8;

  int32_t VAR_13 = (VAR_9 == VAR_2) ? 0 : FUNC_0(VAR_6, VAR_7) - 1;
  int32_t VAR_14 = (VAR_9 == VAR_2) ? 1 : -1;

  if (VAR_6 == VAR_7) {
    for (; VAR_13 >= 0 && VAR_13 < VAR_7; VAR_13 += VAR_14, VAR_12 += VAR_14) {
      if (FUNC_1((char *)&(VAR_10[VAR_13]), VAR_1) || FUNC_1((char *)&(VAR_11[VAR_13]), VAR_1)) {
        FUNC_2((char *)(VAR_12), VAR_0, VAR_3[VAR_0].nSize);
        continue;
      }

      *VAR_12 = (double)VAR_10[VAR_13] + VAR_11[VAR_13];
    }
  } else if (VAR_6 == 1) {
    for (; VAR_13 >= 0 && VAR_13 < VAR_7; VAR_13 += VAR_14, VAR_12 += VAR_14) {
      if (FUNC_1((char *)(VAR_10), VAR_1) || FUNC_1((char *)&(VAR_11[VAR_13]), VAR_1)) {
        FUNC_2((char *)VAR_12, VAR_0, VAR_3[VAR_0].nSize);
        continue;
      }

      *VAR_12 = (double)VAR_10[0] + VAR_11[VAR_13];
    }
  } else if (VAR_7 == 1) {
    for (; VAR_13 >= 0 && VAR_13 < VAR_6; VAR_13 += VAR_14, VAR_12 += VAR_14) {
      if (FUNC_1((char *)&(VAR_10[VAR_13]), VAR_1) || FUNC_1((char *)(VAR_11), VAR_1)) {
        FUNC_2((char *)VAR_12, VAR_0, VAR_3[VAR_0].nSize);
        continue;
      }
      *VAR_12 = (double)VAR_10[VAR_13] + VAR_11[0];
    }
  }
}
