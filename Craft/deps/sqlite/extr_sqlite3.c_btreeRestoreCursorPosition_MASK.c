
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eState; int skipNext; scalar_t__ pKey; int nKey; } ;
typedef TYPE_1__ BtCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int ,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(BtCursor *VAR_5){
  int VAR_6;
  FUNC_0( FUNC_2(VAR_5) );
  FUNC_0( VAR_5->eState>=VAR_2 );
  if( VAR_5->eState==VAR_0 ){
    return VAR_5->skipNext;
  }
  VAR_5->eState = VAR_1;
  VAR_6 = FUNC_1(VAR_5, VAR_5->pKey, VAR_5->nKey, 0, &VAR_5->skipNext);
  if( VAR_6==VAR_4 ){
    FUNC_3(VAR_5->pKey);
    VAR_5->pKey = 0;
    FUNC_0( VAR_5->eState==VAR_3 || VAR_5->eState==VAR_1 );
  }
  return VAR_6;
}
