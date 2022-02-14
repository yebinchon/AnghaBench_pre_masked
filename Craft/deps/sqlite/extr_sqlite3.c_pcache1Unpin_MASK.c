
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_10__ {TYPE_2__* pGroup; int nRecyclable; } ;
struct TYPE_9__ {scalar_t__ nCurrentPage; scalar_t__ nMaxPage; TYPE_1__* pLruHead; TYPE_1__* pLruTail; } ;
struct TYPE_8__ {scalar_t__ pLruPrev; struct TYPE_8__* pLruNext; TYPE_3__* pCache; } ;
typedef TYPE_1__ PgHdr1 ;
typedef TYPE_2__ PGroup ;
typedef TYPE_3__ PCache1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_pcache *VAR_0,
  sqlite3_pcache_page *VAR_1,
  int VAR_2
){
  PCache1 *VAR_3 = (PCache1 *)VAR_0;
  PgHdr1 *VAR_4 = (PgHdr1 *)VAR_1;
  PGroup *VAR_5 = VAR_3->pGroup;

  FUNC_0( VAR_4->pCache==VAR_3 );
  FUNC_1(VAR_5);




  FUNC_0( VAR_4->pLruPrev==0 && VAR_4->pLruNext==0 );
  FUNC_0( VAR_5->pLruHead!=VAR_4 && VAR_5->pLruTail!=VAR_4 );

  if( VAR_2 || VAR_5->nCurrentPage>VAR_5->nMaxPage ){
    FUNC_4(VAR_4);
    FUNC_2(VAR_4);
  }else{

    if( VAR_5->pLruHead ){
      VAR_5->pLruHead->pLruPrev = VAR_4;
      VAR_4->pLruNext = VAR_5->pLruHead;
      VAR_5->pLruHead = VAR_4;
    }else{
      VAR_5->pLruTail = VAR_4;
      VAR_5->pLruHead = VAR_4;
    }
    VAR_3->nRecyclable++;
  }

  FUNC_3(VAR_3->pGroup);
}
