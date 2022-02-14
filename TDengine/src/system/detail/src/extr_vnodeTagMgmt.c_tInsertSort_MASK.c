
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int (* __ext_compar_fn_t ) (void*,void*,void*) ;


 int VAR_0 ;
 int FUNC_0 (void**,void**,int ,size_t) ;

__attribute__((used)) static void FUNC_1(void **VAR_1, size_t VAR_2, int32_t VAR_3, int32_t VAR_4, void *VAR_5,
                        __ext_compar_fn_t VAR_6) {
  for (int32_t VAR_7 = VAR_3 + 1; VAR_7 <= VAR_4; ++VAR_7) {
    for (int32_t VAR_8 = VAR_7; VAR_8 > VAR_3; --VAR_8) {
      if (VAR_6(VAR_1[VAR_8], VAR_1[VAR_8 - 1], VAR_5) == -1) {
        FUNC_0(&VAR_1[VAR_8], &VAR_1[VAR_8 - 1], VAR_0, VAR_2);
      } else {
        break;
      }
    }
  }
}
