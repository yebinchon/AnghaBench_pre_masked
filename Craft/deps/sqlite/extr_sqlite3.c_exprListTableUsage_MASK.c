
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WhereMaskSet ;
struct TYPE_5__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_4__ {int pExpr; } ;
typedef TYPE_2__ ExprList ;
typedef int Bitmask ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static Bitmask FUNC_1(WhereMaskSet *VAR_0, ExprList *VAR_1){
  int VAR_2;
  Bitmask VAR_3 = 0;
  if( VAR_1 ){
    for(VAR_2=0; VAR_2<VAR_1->nExpr; VAR_2++){
      VAR_3 |= FUNC_0(VAR_0, VAR_1->a[VAR_2].pExpr);
    }
  }
  return VAR_3;
}
