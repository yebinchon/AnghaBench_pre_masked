
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {scalar_t__ op; } ;
typedef TYPE_1__ WhereClause ;
struct TYPE_8__ {int op; struct TYPE_8__* pRight; struct TYPE_8__* pLeft; } ;
typedef TYPE_2__ Expr ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(WhereClause *VAR_0, Expr *VAR_1, int VAR_2){
  VAR_0->op = (u8)VAR_2;
  if( VAR_1==0 ) return;
  if( VAR_1->op!=VAR_2 ){
    FUNC_0(VAR_0, VAR_1, 0);
  }else{
    FUNC_1(VAR_0, VAR_1->pLeft, VAR_2);
    FUNC_1(VAR_0, VAR_1->pRight, VAR_2);
  }
}
