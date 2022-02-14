
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* xProgress ) (void*) ;int nProgressOps; int mutex; void* pProgressArg; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(
  sqlite3 *VAR_0,
  int VAR_1,
  int (*VAR_2)(void*),
  void *VAR_3
){
  FUNC_0(VAR_0->mutex);
  if( VAR_1>0 ){
    VAR_0->xProgress = VAR_2;
    VAR_0->nProgressOps = VAR_1;
    VAR_0->pProgressArg = VAR_3;
  }else{
    VAR_0->xProgress = 0;
    VAR_0->nProgressOps = 0;
    VAR_0->pProgressArg = 0;
  }
  FUNC_1(VAR_0->mutex);
}
