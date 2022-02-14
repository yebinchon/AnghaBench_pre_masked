
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int sortOrder; } ;
typedef TYPE_1__ tVariantListItem ;
struct TYPE_9__ {int nExpr; TYPE_1__* a; } ;
typedef TYPE_2__ tVariantList ;
typedef int tVariant ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int * FUNC_2 (TYPE_2__*) ;

tVariantList *FUNC_3(tVariantList *VAR_0, tVariant *VAR_1, uint8_t VAR_2) {
  if (VAR_0 == ((void*)0)) {
    VAR_0 = FUNC_0(1, sizeof(tVariantList));
  }

  if (FUNC_2(VAR_0) == ((void*)0)) {
    return VAR_0;
  }

  if (VAR_1) {
    tVariantListItem *VAR_3 = &VAR_0->a[VAR_0->nExpr++];






    FUNC_1(VAR_3, VAR_1, sizeof(tVariant));
    VAR_3->sortOrder = VAR_2;
  }
  return VAR_0;
}
