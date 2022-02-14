
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pList; } ;
struct TYPE_10__ {scalar_t__ op; int iTable; int iColumn; TYPE_3__ x; } ;
struct TYPE_8__ {TYPE_1__* a; } ;
struct TYPE_7__ {TYPE_4__* pExpr; } ;
typedef int SrcList ;
typedef TYPE_4__ Expr ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(
  SrcList *VAR_9,
  Bitmask VAR_10,
  int *VAR_11,
  Expr *VAR_12,
  int VAR_13
){



  FUNC_1( VAR_2+1==VAR_6 && VAR_2+2==VAR_7 && VAR_2+3==VAR_1 );
  FUNC_1( VAR_4<VAR_1 && VAR_5<VAR_1 && VAR_3<VAR_1 );
  FUNC_1( VAR_13<=VAR_1 );
  if( VAR_12->op==VAR_8 && (VAR_13>=VAR_2 && FUNC_0(VAR_13<=VAR_1)) ){
    VAR_12 = VAR_12->x.pList->a[0].pExpr;
  }

  if( VAR_12->op==VAR_0 ){
    VAR_11[0] = VAR_12->iTable;
    VAR_11[1] = VAR_12->iColumn;
    return 1;
  }
  if( VAR_10==0 ) return 0;
  if( (VAR_10&(VAR_10-1))!=0 ) return 0;
  return FUNC_2(VAR_9,VAR_10,VAR_11,VAR_12);
}
