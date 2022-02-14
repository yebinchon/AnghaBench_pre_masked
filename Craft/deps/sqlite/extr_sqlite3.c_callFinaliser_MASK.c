
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pModule; } ;
typedef TYPE_1__ sqlite3_vtab ;
struct TYPE_10__ {int nVTrans; TYPE_4__** aVTrans; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_11__ {scalar_t__ iSavepoint; TYPE_1__* pVtab; } ;
typedef TYPE_4__ VTable ;


 int FUNC_0 (TYPE_2__*,TYPE_4__**) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_0, int VAR_1){
  int VAR_2;
  if( VAR_0->aVTrans ){
    for(VAR_2=0; VAR_2<VAR_0->nVTrans; VAR_2++){
      VTable *VAR_3 = VAR_0->aVTrans[VAR_2];
      sqlite3_vtab *VAR_4 = VAR_3->pVtab;
      if( VAR_4 ){
        int (*VAR_5)(sqlite3_vtab *);
        VAR_5 = *(int (**)(sqlite3_vtab *))((char *)VAR_4->pModule + VAR_1);
        if( VAR_5 ) VAR_5(VAR_4);
      }
      VAR_3->iSavepoint = 0;
      FUNC_1(VAR_3);
    }
    FUNC_0(VAR_0, VAR_0->aVTrans);
    VAR_0->nVTrans = 0;
    VAR_0->aVTrans = 0;
  }
}
