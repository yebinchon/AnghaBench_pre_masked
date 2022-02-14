
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1(const void* VAR_0, const void* VAR_1) {
  char* VAR_2 = *(char**)VAR_0;
  char* VAR_3 = *(char**)VAR_1;

  int32_t VAR_4 = FUNC_0(VAR_2, VAR_3);

  if (VAR_4 == 0) {
    return 0;
  }

  return VAR_4 > 0 ? 1 : -1;
}
