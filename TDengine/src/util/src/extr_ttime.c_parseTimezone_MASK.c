
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef size_t int32_t ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int) ;

int32_t FUNC_2(char* VAR_0, int64_t* VAR_1) {
  int64_t VAR_2 = 0;

  int32_t VAR_3 = 0;
  if (VAR_0[VAR_3] != '+' && VAR_0[VAR_3] != '-') {
    return -1;
  }

  VAR_3++;

  char* VAR_4 = FUNC_0(&VAR_0[VAR_3], ':');
  if (VAR_4 != ((void*)0)) {
    int32_t VAR_5 = VAR_4 - &VAR_0[VAR_3];

    VAR_2 = FUNC_1(&VAR_0[VAR_3], VAR_5);
    VAR_3 += VAR_5 + 1;
  } else {
    VAR_2 = FUNC_1(&VAR_0[VAR_3], 2);
    VAR_3 += 2;
  }

  int64_t VAR_6 = FUNC_1(&VAR_0[VAR_3], 2);
  if (VAR_6 > 59) {
    return -1;
  }

  if (VAR_0[0] == '+') {
    *VAR_1 = -(VAR_2 * 3600 + VAR_6 * 60);
  } else {
    *VAR_1 = VAR_2 * 3600 + VAR_6 * 60;
  }

  return 0;
}
