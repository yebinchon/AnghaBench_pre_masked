
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ nCurrentPage; scalar_t__ nMaxPage; TYPE_2__* pLruTail; int mutex; } ;
struct TYPE_9__ {TYPE_1__* pCache; } ;
struct TYPE_8__ {TYPE_3__* pGroup; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PGroup ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(PGroup *VAR_0){
  FUNC_0( FUNC_4(VAR_0->mutex) );
  while( VAR_0->nCurrentPage>VAR_0->nMaxPage && VAR_0->pLruTail ){
    PgHdr1 *VAR_1 = VAR_0->pLruTail;
    FUNC_0( VAR_1->pCache->pGroup==VAR_0 );
    FUNC_2(VAR_1);
    FUNC_3(VAR_1);
    FUNC_1(VAR_1);
  }
}
