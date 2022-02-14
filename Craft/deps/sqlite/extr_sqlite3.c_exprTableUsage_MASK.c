
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WhereMaskSet ;
struct TYPE_5__ {int pList; int pSelect; } ;
struct TYPE_6__ {scalar_t__ op; TYPE_1__ x; struct TYPE_6__* pLeft; struct TYPE_6__* pRight; int iTable; } ;
typedef TYPE_2__ Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static Bitmask FUNC_4(WhereMaskSet *VAR_2, Expr *VAR_3){
  Bitmask VAR_4 = 0;
  if( VAR_3==0 ) return 0;
  if( VAR_3->op==VAR_1 ){
    VAR_4 = FUNC_3(VAR_2, VAR_3->iTable);
    return VAR_4;
  }
  VAR_4 = FUNC_4(VAR_2, VAR_3->pRight);
  VAR_4 |= FUNC_4(VAR_2, VAR_3->pLeft);
  if( FUNC_0(VAR_3, VAR_0) ){
    VAR_4 |= FUNC_2(VAR_2, VAR_3->x.pSelect);
  }else{
    VAR_4 |= FUNC_1(VAR_2, VAR_3->x.pList);
  }
  return VAR_4;
}
