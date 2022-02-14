
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fillType; int * from; int * pGroupby; int * pSortOrder; int * pWhere; int * pSelection; } ;
typedef TYPE_1__ SQuerySQL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(SQuerySQL *VAR_0) {
  if (VAR_0 == ((void*)0)) return;

  FUNC_2(VAR_0->pSelection);
  VAR_0->pSelection = ((void*)0);

  FUNC_1(VAR_0->pWhere);
  VAR_0->pWhere = ((void*)0);

  FUNC_3(VAR_0->pSortOrder);
  VAR_0->pSortOrder = ((void*)0);

  FUNC_3(VAR_0->pGroupby);
  VAR_0->pGroupby = ((void*)0);

  FUNC_3(VAR_0->from);
  VAR_0->from = ((void*)0);

  FUNC_3(VAR_0->fillType);

  FUNC_0(VAR_0);
}
