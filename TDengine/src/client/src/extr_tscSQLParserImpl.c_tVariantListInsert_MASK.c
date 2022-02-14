
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int sortOrder; } ;
typedef TYPE_1__ tVariantListItem ;
struct TYPE_11__ {int nExpr; TYPE_1__* a; } ;
typedef TYPE_2__ tVariantList ;
typedef int tVariant ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_2__* FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (TYPE_2__*) ;

tVariantList *FUNC_4(tVariantList *VAR_0, tVariant *VAR_1, uint8_t VAR_2, int32_t VAR_3) {
  if (VAR_0 == ((void*)0) || VAR_3 >= VAR_0->nExpr) {
    return FUNC_2(((void*)0), VAR_1, VAR_2);
  }

  if (FUNC_3(VAR_0) == ((void*)0)) {
    return VAR_0;
  }

  if (VAR_1) {
    FUNC_1(&VAR_0->a[VAR_3 + 1], &VAR_0->a[VAR_3], sizeof(tVariantListItem) * (VAR_0->nExpr - VAR_3));

    tVariantListItem *VAR_4 = &VAR_0->a[VAR_3];






    FUNC_0(VAR_4, VAR_1, sizeof(tVariant));
    VAR_4->sortOrder = VAR_2;

    VAR_0->nExpr++;
  }

  return VAR_0;
}
