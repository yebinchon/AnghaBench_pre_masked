
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nAlloc; int nField; int * p; } ;
typedef TYPE_1__ tFieldList ;
struct TAOS_FIELD {int dummy; } ;
typedef int TAOS_FIELD ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (struct TAOS_FIELD*,int *,int) ;
 int * FUNC_3 (int *,int) ;

tFieldList *FUNC_4(tFieldList *VAR_0, TAOS_FIELD *VAR_1) {
  if (VAR_0 == ((void*)0)) VAR_0 = FUNC_1(1, sizeof(tFieldList));

  if (VAR_0->nAlloc <= VAR_0->nField) {
    VAR_0->nAlloc = (VAR_0->nAlloc << 1) + 4;
    VAR_0->p = FUNC_3(VAR_0->p, VAR_0->nAlloc * sizeof(VAR_0->p[0]));
    if (VAR_0->p == 0) {
      VAR_0->nField = VAR_0->nAlloc = 0;
      return VAR_0;
    }
  }
  FUNC_0(VAR_0->p != 0);

  if (VAR_1) {
    struct TAOS_FIELD *VAR_2 = (struct TAOS_FIELD *)&VAR_0->p[VAR_0->nField++];
    FUNC_2(VAR_2, VAR_1, sizeof(TAOS_FIELD));
  }
  return VAR_0;
}
