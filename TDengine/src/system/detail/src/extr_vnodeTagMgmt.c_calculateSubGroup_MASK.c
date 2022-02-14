
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOrderDescriptor ;
typedef int int32_t ;
typedef int (* __ext_compar_fn_t ) (void*,void*,int *) ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

int32_t *FUNC_2(void **VAR_0, int32_t VAR_1, int32_t *VAR_2, tOrderDescriptor *VAR_3,
                           __ext_compar_fn_t VAR_4) {
  int32_t *VAR_5 = (int32_t *)FUNC_1((VAR_1 + 1) * sizeof(int32_t));
  VAR_5[0] = 0;

  *VAR_2 = 1;

  for (int32_t VAR_6 = 1; VAR_6 < VAR_1; ++VAR_6) {
    int32_t VAR_7 = VAR_4(VAR_0[VAR_6 - 1], VAR_0[VAR_6], VAR_3);
    if (VAR_7 != 0) {
      FUNC_0(VAR_7 == -1);
      VAR_5[(*VAR_2)++] = VAR_6;
    }
  }

  VAR_5[*VAR_2] = VAR_1;
  FUNC_0(*VAR_2 <= VAR_1);

  return VAR_5;
}
