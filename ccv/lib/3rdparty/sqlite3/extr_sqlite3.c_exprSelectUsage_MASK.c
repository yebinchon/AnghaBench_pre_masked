
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WhereMaskSet ;
struct TYPE_11__ {struct TYPE_11__* pPrior; int pHaving; int pWhere; int pOrderBy; int pGroupBy; int pEList; TYPE_4__* pSrc; } ;
struct TYPE_10__ {int nSrc; TYPE_3__* a; } ;
struct TYPE_8__ {int pFuncArg; } ;
struct TYPE_7__ {scalar_t__ isTabFunc; } ;
struct TYPE_9__ {TYPE_2__ u1; TYPE_1__ fg; int pOn; TYPE_5__* pSelect; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Select ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static Bitmask FUNC_3(WhereMaskSet *VAR_0, Select *VAR_1){
  Bitmask VAR_2 = 0;
  while( VAR_1 ){
    SrcList *VAR_3 = VAR_1->pSrc;
    VAR_2 |= FUNC_1(VAR_0, VAR_1->pEList);
    VAR_2 |= FUNC_1(VAR_0, VAR_1->pGroupBy);
    VAR_2 |= FUNC_1(VAR_0, VAR_1->pOrderBy);
    VAR_2 |= FUNC_2(VAR_0, VAR_1->pWhere);
    VAR_2 |= FUNC_2(VAR_0, VAR_1->pHaving);
    if( FUNC_0(VAR_3!=0) ){
      int VAR_4;
      for(VAR_4=0; VAR_4<VAR_3->nSrc; VAR_4++){
        VAR_2 |= FUNC_3(VAR_0, VAR_3->a[VAR_4].pSelect);
        VAR_2 |= FUNC_2(VAR_0, VAR_3->a[VAR_4].pOn);
        if( VAR_3->a[VAR_4].fg.isTabFunc ){
          VAR_2 |= FUNC_1(VAR_0, VAR_3->a[VAR_4].u1.pFuncArg);
        }
      }
    }
    VAR_1 = VAR_1->pPrior;
  }
  return VAR_2;
}
