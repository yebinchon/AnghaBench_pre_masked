
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

int64_t FUNC_2(char* VAR_2, char** VAR_3, int32_t VAR_4) {
  int32_t VAR_5 = 0;
  int64_t VAR_6 = 0;

  const int32_t VAR_7 = 3;
  const int32_t VAR_8 = 6;

  int32_t VAR_9[6] = {1, 10, 100, 1000, 10000, 100000};
  int32_t VAR_10 = 1;

  while (VAR_2[VAR_5] >= '0' && VAR_2[VAR_5] <= '9') {
    VAR_5++;
  }

  int32_t VAR_11 = VAR_5;
  if (VAR_11 <= 0) {
    return -1;
  }


  if (VAR_4 == VAR_1) {

    if (VAR_5 >= VAR_7) {
      VAR_5 = VAR_7;
    }

    VAR_10 = VAR_7 - VAR_5;
  } else {
    FUNC_0(VAR_4 == VAR_0);
    if (VAR_5 >= VAR_8) {
      VAR_5 = VAR_8;
    }
    VAR_10 = VAR_8 - VAR_5;
  }

  VAR_6 = FUNC_1(VAR_2, VAR_5) * VAR_9[VAR_10];
  *VAR_3 = VAR_2 + VAR_11;

  return VAR_6;
}
