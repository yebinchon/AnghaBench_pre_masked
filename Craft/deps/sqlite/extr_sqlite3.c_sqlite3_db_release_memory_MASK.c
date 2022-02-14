
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nDb; int mutex; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_6__ {int * pBt; } ;
typedef int Pager ;
typedef int Btree ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(sqlite3 *VAR_1){
  int VAR_2;
  FUNC_4(VAR_1->mutex);
  FUNC_0(VAR_1);
  for(VAR_2=0; VAR_2<VAR_1->nDb; VAR_2++){
    Btree *VAR_3 = VAR_1->aDb[VAR_2].pBt;
    if( VAR_3 ){
      Pager *VAR_4 = FUNC_2(VAR_3);
      FUNC_3(VAR_4);
    }
  }
  FUNC_1(VAR_1);
  FUNC_5(VAR_1->mutex);
  return VAR_0;
}
