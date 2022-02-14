
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ eState; scalar_t__ pKey; TYPE_1__** apPage; scalar_t__ nKey; } ;
struct TYPE_9__ {scalar_t__ intKey; } ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int,void*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(BtCursor *VAR_4){
  int VAR_5;

  FUNC_0( VAR_1==VAR_4->eState );
  FUNC_0( 0==VAR_4->pKey );
  FUNC_0( FUNC_2(VAR_4) );

  VAR_5 = FUNC_5(VAR_4, &VAR_4->nKey);
  FUNC_0( VAR_5==VAR_3 );







  if( 0==VAR_4->apPage[0]->intKey ){
    void *VAR_6 = FUNC_6( (int)VAR_4->nKey );
    if( VAR_6 ){
      VAR_5 = FUNC_4(VAR_4, 0, (int)VAR_4->nKey, VAR_6);
      if( VAR_5==VAR_3 ){
        VAR_4->pKey = VAR_6;
      }else{
        FUNC_7(VAR_6);
      }
    }else{
      VAR_5 = VAR_2;
    }
  }
  FUNC_0( !VAR_4->apPage[0]->intKey || !VAR_4->pKey );

  if( VAR_5==VAR_3 ){
    FUNC_1(VAR_4);
    VAR_4->eState = VAR_0;
  }

  FUNC_3(VAR_4);
  return VAR_5;
}
