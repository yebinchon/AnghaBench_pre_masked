
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1 (FILE *VAR_0, int VAR_1, vec_t *VAR_2) {
 int VAR_3;

 FUNC_0 (VAR_0, "( ");
 for (VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++) {
  if (VAR_2[VAR_3] == (int)VAR_2[VAR_3] ) {
   FUNC_0 (VAR_0, "%i ", (int)VAR_2[VAR_3]);
  } else {
   FUNC_0 (VAR_0, "%f ", VAR_2[VAR_3]);
  }
 }
 FUNC_0 (VAR_0, ")");
}
