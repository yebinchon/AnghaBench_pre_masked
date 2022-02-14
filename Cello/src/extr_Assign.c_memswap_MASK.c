
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void* VAR_0, void* VAR_1, size_t VAR_2) {
  if (VAR_0 == VAR_1) { return; }
  for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    char VAR_4 = ((char*)VAR_0)[VAR_3];
    ((char*)VAR_0)[VAR_3] = ((char*)VAR_1)[VAR_3];
    ((char*)VAR_1)[VAR_3] = VAR_4;
  }
}
