
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pTable; int nColumn; scalar_t__ onError; scalar_t__* aiColumn; scalar_t__* aSortOrder; int * azColl; } ;
typedef TYPE_1__ Index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(Index *VAR_0, Index *VAR_1){
  int VAR_2;
  FUNC_0( VAR_0 && VAR_1 );
  FUNC_0( VAR_0->pTable!=VAR_1->pTable );
  if( VAR_0->nColumn!=VAR_1->nColumn ){
    return 0;
  }
  if( VAR_0->onError!=VAR_1->onError ){
    return 0;
  }
  for(VAR_2=0; VAR_2<VAR_1->nColumn; VAR_2++){
    if( VAR_1->aiColumn[VAR_2]!=VAR_0->aiColumn[VAR_2] ){
      return 0;
    }
    if( VAR_1->aSortOrder[VAR_2]!=VAR_0->aSortOrder[VAR_2] ){
      return 0;
    }
    if( !FUNC_1(VAR_1->azColl[VAR_2],VAR_0->azColl[VAR_2]) ){
      return 0;
    }
  }


  return 1;
}
