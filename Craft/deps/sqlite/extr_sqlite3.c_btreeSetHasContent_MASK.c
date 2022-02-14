
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nPage; scalar_t__ pHasContent; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(BtShared *VAR_2, Pgno VAR_3){
  int VAR_4 = VAR_1;
  if( !VAR_2->pHasContent ){
    FUNC_0( VAR_3<=VAR_2->nPage );
    VAR_2->pHasContent = FUNC_1(VAR_2->nPage);
    if( !VAR_2->pHasContent ){
      VAR_4 = VAR_0;
    }
  }
  if( VAR_4==VAR_1 && VAR_3<=FUNC_3(VAR_2->pHasContent) ){
    VAR_4 = FUNC_2(VAR_2->pHasContent, VAR_3);
  }
  return VAR_4;
}
