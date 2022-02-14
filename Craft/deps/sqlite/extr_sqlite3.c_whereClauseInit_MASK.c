
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int WhereMaskSet ;
struct TYPE_3__ {int wctrlFlags; int aStatic; int a; int nSlot; scalar_t__ nTerm; scalar_t__ pOuter; int * pMaskSet; int * pParse; } ;
typedef TYPE_1__ WhereClause ;
typedef int Parse ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
  WhereClause *VAR_0,
  Parse *VAR_1,
  WhereMaskSet *VAR_2,
  u16 VAR_3
){
  VAR_0->pParse = VAR_1;
  VAR_0->pMaskSet = VAR_2;
  VAR_0->pOuter = 0;
  VAR_0->nTerm = 0;
  VAR_0->nSlot = FUNC_0(VAR_0->aStatic);
  VAR_0->a = VAR_0->aStatic;
  VAR_0->wctrlFlags = VAR_3;
}
