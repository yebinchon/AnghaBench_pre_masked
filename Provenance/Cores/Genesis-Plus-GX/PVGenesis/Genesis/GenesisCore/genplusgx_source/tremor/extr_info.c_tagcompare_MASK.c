
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3=0;
  while(VAR_3 < VAR_2){
    if(FUNC_0((int)VAR_0[VAR_3]) != FUNC_0((int)VAR_1[VAR_3]))
      return !0;
    VAR_3++;
  }
  return 0;
}
