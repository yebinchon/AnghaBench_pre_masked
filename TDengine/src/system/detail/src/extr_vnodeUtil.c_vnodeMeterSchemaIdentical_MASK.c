
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int SColumn ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

bool FUNC_2(SColumn* VAR_0, int32_t VAR_1, SColumn* VAR_2, int32_t VAR_3) {
  if (!FUNC_0(VAR_1) || !FUNC_0(VAR_3) || VAR_1 != VAR_3) {
    return 0;
  }

  return FUNC_1((char*)VAR_0, (char*)VAR_2, sizeof(SColumn) * VAR_1) == 0;
}
