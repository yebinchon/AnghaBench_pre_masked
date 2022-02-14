
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSkipListKey ;
typedef int pKey ;
typedef int int32_t ;
typedef int (* __compar_fn_t ) (int *,int *) ;


 int FUNC_0 (int *,int,int,int (*) (int *,int *)) ;

__attribute__((used)) static void FUNC_1(tSkipListKey *VAR_0, int32_t *VAR_1, __compar_fn_t VAR_2) {
  if (*VAR_1 == 1) {
    return;
  }

  FUNC_0(VAR_0, *VAR_1, sizeof(VAR_0[0]), VAR_2);
  int32_t VAR_3 = 0, VAR_4 = 1;

  while (VAR_3 < (*VAR_1) && VAR_4 < (*VAR_1)) {
    int32_t VAR_5 = VAR_2(&VAR_0[VAR_3], &VAR_0[VAR_4]);
    if (VAR_5 == 0) {
      VAR_4++;
    } else {
      VAR_0[VAR_3 + 1] = VAR_0[VAR_4];
      VAR_3++;
      VAR_4++;
    }
  }

  (*VAR_1) = VAR_3 + 1;
}
