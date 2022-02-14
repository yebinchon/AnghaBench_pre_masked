
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef size_t int32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int32_t VAR_1) {
  bool VAR_2 = 1;
  for (int32_t VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
    if ((VAR_0[VAR_3] <= 'Z' && VAR_0[VAR_3] >= 'A') || (VAR_0[VAR_3] <= 'z' && VAR_0[VAR_3] >= 'a') ||
        (VAR_0[VAR_3] >= '0' && VAR_0[VAR_3] <= '9')) {
      continue;
    } else if (VAR_0[VAR_3] == 0) {
      break;
    } else {
      VAR_2 = 0;
      break;
    }
  }

  if (VAR_1 == 50) {
    FUNC_0("%lf,%d\t", *(double *)VAR_0, *(int64_t *)(VAR_0 + sizeof(double)));
  } else if (VAR_0[8] == ',') {

    FUNC_0("%ld,%0x\t", *(int64_t *)VAR_0, VAR_0 + sizeof(int64_t) + 1);
  } else if (VAR_2) {
    FUNC_0("%s\t", VAR_0);
  }
}
