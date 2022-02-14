
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ nSize; } ;
struct TYPE_9__ {int iPage; scalar_t__ eState; scalar_t__ wrFlag; TYPE_2__** apPage; scalar_t__ validNKey; TYPE_1__ info; scalar_t__* aiIdx; int * pBt; } ;
struct TYPE_8__ {int nCell; scalar_t__ intKey; } ;
typedef TYPE_2__ MemPage ;
typedef int BtShared ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,TYPE_2__**,int) ;

__attribute__((used)) static int FUNC_3(BtCursor *VAR_4, u32 VAR_5){
  int VAR_6;
  int VAR_7 = VAR_4->iPage;
  MemPage *VAR_8;
  BtShared *VAR_9 = VAR_4->pBt;

  FUNC_0( FUNC_1(VAR_4) );
  FUNC_0( VAR_4->eState==VAR_1 );
  FUNC_0( VAR_4->iPage<VAR_0 );
  FUNC_0( VAR_4->iPage>=0 );
  if( VAR_4->iPage>=(VAR_0-1) ){
    return VAR_2;
  }
  VAR_6 = FUNC_2(VAR_9, VAR_5, &VAR_8, (VAR_4->wrFlag==0));
  if( VAR_6 ) return VAR_6;
  VAR_4->apPage[VAR_7+1] = VAR_8;
  VAR_4->aiIdx[VAR_7+1] = 0;
  VAR_4->iPage++;

  VAR_4->info.nSize = 0;
  VAR_4->validNKey = 0;
  if( VAR_8->nCell<1 || VAR_8->intKey!=VAR_4->apPage[VAR_7]->intKey ){
    return VAR_2;
  }
  return VAR_3;
}
