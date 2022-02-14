
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct AggInfo_func {scalar_t__ pFunc; int iMem; TYPE_7__* pExpr; } ;
typedef int Vdbe ;
struct TYPE_8__ {TYPE_3__* pList; } ;
struct TYPE_12__ {TYPE_1__ x; } ;
struct TYPE_11__ {int nFunc; struct AggInfo_func* aFunc; } ;
struct TYPE_10__ {int nExpr; } ;
struct TYPE_9__ {int * pVdbe; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;
typedef TYPE_4__ AggInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,void*,int ) ;

__attribute__((used)) static void FUNC_3(Parse *VAR_3, AggInfo *VAR_4){
  Vdbe *VAR_5 = VAR_3->pVdbe;
  int VAR_6;
  struct AggInfo_func *VAR_7;
  for(VAR_6=0, VAR_7=VAR_4->aFunc; VAR_6<VAR_4->nFunc; VAR_6++, VAR_7++){
    ExprList *VAR_8 = VAR_7->pExpr->x.pList;
    FUNC_1( !FUNC_0(VAR_7->pExpr, VAR_0) );
    FUNC_2(VAR_5, VAR_1, VAR_7->iMem, VAR_8 ? VAR_8->nExpr : 0, 0,
                      (void*)VAR_7->pFunc, VAR_2);
  }
}
