
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {scalar_t__ nVar; int expired; scalar_t__ expmask; scalar_t__ isPrepareV2; } ;
typedef TYPE_1__ Vdbe ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(sqlite3_stmt *VAR_1, sqlite3_stmt *VAR_2){
  Vdbe *VAR_3 = (Vdbe*)VAR_1;
  Vdbe *VAR_4 = (Vdbe*)VAR_2;
  if( VAR_3->nVar!=VAR_4->nVar ){
    return VAR_0;
  }
  if( VAR_4->isPrepareV2 && VAR_4->expmask ){
    VAR_4->expired = 1;
  }
  if( VAR_3->isPrepareV2 && VAR_3->expmask ){
    VAR_3->expired = 1;
  }
  return FUNC_0(VAR_1, VAR_2);
}
