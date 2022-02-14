
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nDb; int (* xWalCallback ) (int ,TYPE_2__*,int ,int) ;TYPE_1__* aDb; int pWalArg; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_5__ {int zName; int * pBt; } ;
typedef int Btree ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(sqlite3 *VAR_1){
  int VAR_2 = VAR_0;

  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_1->nDb; VAR_3++){
    Btree *VAR_4 = VAR_1->aDb[VAR_3].pBt;
    if( VAR_4 ){
      int VAR_5 = FUNC_1(FUNC_0(VAR_4));
      if( VAR_1->xWalCallback && VAR_5>0 && VAR_2==VAR_0 ){
        VAR_2 = VAR_1->xWalCallback(VAR_1->pWalArg, VAR_1, VAR_1->aDb[VAR_3].zName, VAR_5);
      }
    }
  }

  return VAR_2;
}
