
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,int ,int) ;

void FUNC_2(char **VAR_0, int VAR_1, int VAR_2) {
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_0[VAR_3] = (char*)FUNC_0((size_t)VAR_2 * sizeof(char));
  FUNC_1(VAR_0[VAR_3], 0, VAR_2);
  for (VAR_4 = 0; VAR_4 < 40; VAR_4++) {
   VAR_0[VAR_3][VAR_4] = (char)(VAR_4+1);
  }
 }
}
