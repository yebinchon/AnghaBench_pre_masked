
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i16 ;
struct TYPE_6__ {struct TYPE_6__* pRight; struct TYPE_6__* pLeft; scalar_t__ iRightJoinTable; } ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(Expr *VAR_3, int VAR_4){
  while( VAR_3 ){
    FUNC_2(VAR_3, VAR_0);
    FUNC_3( !FUNC_0(VAR_3, VAR_2|VAR_1) );
    FUNC_1(VAR_3);
    VAR_3->iRightJoinTable = (i16)VAR_4;
    FUNC_4(VAR_3->pLeft, VAR_4);
    VAR_3 = VAR_3->pRight;
  }
}
