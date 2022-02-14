
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pRight; struct TYPE_4__* pLeft; } ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(Expr *VAR_1, int VAR_2){
  int VAR_3 = 0;
  if( VAR_1 ){
    VAR_3 = FUNC_0(VAR_1, VAR_2);
    if( VAR_2&VAR_0 ){
      VAR_3 += FUNC_1(VAR_1->pLeft, VAR_2) + FUNC_1(VAR_1->pRight, VAR_2);
    }
  }
  return VAR_3;
}
