
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** pForward; int key; } ;
typedef TYPE_1__ tSkipListNode ;
typedef int tSkipListKey ;
typedef size_t int32_t ;
typedef size_t (* __compar_fn_t ) (int *,int const*) ;



int32_t FUNC_0(const tSkipListKey *VAR_0, int32_t VAR_1, tSkipListNode ***VAR_2, __compar_fn_t VAR_3,
                    tSkipListNode *VAR_4) {
  int32_t VAR_5 = 0, VAR_6 = 0;

  while (VAR_5 < VAR_1 && VAR_4 != ((void*)0)) {
    int32_t VAR_7 = VAR_3(&VAR_4->key, &VAR_0[VAR_5]);
    if (VAR_7 < 0) {
      (*VAR_2)[VAR_6++] = VAR_4;
      VAR_4 = VAR_4->pForward[0];
    } else if (VAR_7 == 0) {
      VAR_4 = VAR_4->pForward[0];
    } else {
      VAR_5++;
    }
  }

  while (VAR_4 != ((void*)0)) {
    (*VAR_2)[VAR_6++] = VAR_4;
    VAR_4 = VAR_4->pForward[0];
  }
  return VAR_6;
}
