
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* pSelect; } ;
struct TYPE_12__ {scalar_t__ op; int pLeft; TYPE_4__ x; scalar_t__ pRight; } ;
struct TYPE_10__ {TYPE_2__* pEList; } ;
struct TYPE_9__ {TYPE_1__* a; } ;
struct TYPE_8__ {scalar_t__ pExpr; } ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 char FUNC_2 (scalar_t__,char) ;
 char FUNC_3 (int) ;

__attribute__((used)) static char FUNC_4(Expr *VAR_11){
  char VAR_12;
  FUNC_1( VAR_11->op==VAR_2 || VAR_11->op==VAR_5 || VAR_11->op==VAR_9 ||
          VAR_11->op==VAR_4 || VAR_11->op==VAR_3 || VAR_11->op==VAR_8 ||
          VAR_11->op==VAR_10 || VAR_11->op==VAR_6 || VAR_11->op==VAR_7 );
  FUNC_1( VAR_11->pLeft );
  VAR_12 = FUNC_3(VAR_11->pLeft);
  if( VAR_11->pRight ){
    VAR_12 = FUNC_2(VAR_11->pRight, VAR_12);
  }else if( FUNC_0(VAR_11, VAR_0) ){
    VAR_12 = FUNC_2(VAR_11->x.pSelect->pEList->a[0].pExpr, VAR_12);
  }else if( !VAR_12 ){
    VAR_12 = VAR_1;
  }
  return VAR_12;
}
