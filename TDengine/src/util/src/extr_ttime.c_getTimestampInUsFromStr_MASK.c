
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char,int *) ;
 int FUNC_1 (char*,char**,int) ;

int32_t FUNC_2(char* VAR_1, int32_t VAR_2, int64_t* VAR_3) {
  VAR_0 = 0;
  char* VAR_4 = ((void*)0);


  int64_t VAR_5 = FUNC_1(VAR_1, &VAR_4, 10);
  if (VAR_0 != 0) {
    return -1;
  }

  return FUNC_0(VAR_5, VAR_1[VAR_2 - 1], VAR_3);
}
