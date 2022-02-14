
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;

void FUNC_2(char **VAR_0, int VAR_1, int VAR_2) {
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_0[VAR_3] = (char*)FUNC_1((size_t)VAR_2 * sizeof(char));
  FUNC_0((void*)VAR_0[VAR_3], (size_t)VAR_2);
 }
}
