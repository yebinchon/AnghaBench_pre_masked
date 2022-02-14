
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int orderIdx; int pTagSchema; } ;
typedef TYPE_1__ tOrderDescriptor ;
typedef int int32_t ;
typedef int (* __ext_compar_fn_t ) (void*,void*,TYPE_1__*) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int *) ;
 int FUNC_2 (void**,void**,int ,size_t) ;

__attribute__((used)) static void FUNC_3(void **VAR_1, size_t VAR_2, int32_t VAR_3, int32_t VAR_4, tOrderDescriptor *VAR_5,
                   __ext_compar_fn_t VAR_6) {
  int32_t VAR_7 = ((VAR_4 - VAR_3) >> 1) + VAR_3;

  if (VAR_6(VAR_1[VAR_7], VAR_1[VAR_3], VAR_5) == 1) {
    FUNC_2(&VAR_1[VAR_7], &VAR_1[VAR_3], VAR_0, VAR_2);
  }

  if (VAR_6(VAR_1[VAR_7], VAR_1[VAR_4], VAR_5) == 1) {
    FUNC_2(&VAR_1[VAR_7], &VAR_1[VAR_3], VAR_0, VAR_2);
    FUNC_2(&VAR_1[VAR_7], &VAR_1[VAR_4], VAR_0, VAR_2);
  } else if (VAR_6(VAR_1[VAR_3], VAR_1[VAR_4], VAR_5) == 1) {
    FUNC_2(&VAR_1[VAR_3], &VAR_1[VAR_4], VAR_0, VAR_2);
  }

  FUNC_0(VAR_6(VAR_1[VAR_7], VAR_1[VAR_3], VAR_5) <= 0 &&
         VAR_6(VAR_1[VAR_3], VAR_1[VAR_4], VAR_5) <= 0);






}
