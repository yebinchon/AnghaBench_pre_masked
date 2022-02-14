
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int aData; } ;
struct TYPE_5__ {scalar_t__ inTransaction; TYPE_3__* pPage1; int pPager; int mutex; } ;
typedef TYPE_1__ BtShared ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(BtShared *VAR_1){
  FUNC_0( FUNC_4(VAR_1->mutex) );
  FUNC_0( FUNC_1(VAR_1,0)==0 || VAR_1->inTransaction>VAR_0 );
  if( VAR_1->inTransaction==VAR_0 && VAR_1->pPage1!=0 ){
    FUNC_0( VAR_1->pPage1->aData );
    FUNC_0( FUNC_3(VAR_1->pPager)==1 );
    FUNC_0( VAR_1->pPage1->aData );
    FUNC_2(VAR_1->pPage1);
    VAR_1->pPage1 = 0;
  }
}
