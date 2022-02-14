
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int sortOrder; } ;
typedef TYPE_1__ tVariantListItem ;
struct TYPE_12__ {int nExpr; TYPE_1__* a; } ;
typedef TYPE_2__ tVariantList ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_3__ tVariant ;
typedef int SSQLToken ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int * FUNC_3 (TYPE_2__*) ;

tVariantList *FUNC_4(tVariantList *VAR_0, SSQLToken *VAR_1, uint8_t VAR_2) {
  if (VAR_0 == ((void*)0)) {
    VAR_0 = FUNC_0(1, sizeof(tVariantList));
  }

  if (FUNC_3(VAR_0) == ((void*)0)) {
    return VAR_0;
  }

  if (VAR_1) {
    tVariant VAR_3 = {0};
    FUNC_2(&VAR_3, VAR_1);

    tVariantListItem *VAR_4 = &VAR_0->a[VAR_0->nExpr++];
    FUNC_1(VAR_4, &VAR_3, sizeof(tVariant));
    VAR_4->sortOrder = VAR_2;
  }
  return VAR_0;
}
