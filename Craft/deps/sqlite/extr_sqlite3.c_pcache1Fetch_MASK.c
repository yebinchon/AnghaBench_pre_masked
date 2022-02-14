
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pExtra; } ;
typedef TYPE_1__ sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_18__ {scalar_t__ bPurgeable; int nMin; unsigned int nHash; unsigned int nPage; unsigned int nRecyclable; int n90pct; int nMax; int szPage; int szExtra; unsigned int iMaxKey; TYPE_2__** apHash; TYPE_3__* pGroup; } ;
struct TYPE_17__ {unsigned int mxPinned; unsigned int nMaxPage; unsigned int nMinPage; scalar_t__ nCurrentPage; TYPE_2__* pLruTail; } ;
struct TYPE_16__ {unsigned int iKey; TYPE_1__ page; scalar_t__ pLruNext; scalar_t__ pLruPrev; TYPE_4__* pCache; struct TYPE_16__* pNext; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PGroup ;
typedef TYPE_4__ PCache1 ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static sqlite3_pcache_page *FUNC_11(
  sqlite3_pcache *VAR_0,
  unsigned int VAR_1,
  int VAR_2
){
  unsigned int VAR_3;
  PCache1 *VAR_4 = (PCache1 *)VAR_0;
  PGroup *VAR_5;
  PgHdr1 *VAR_6 = 0;

  FUNC_0( VAR_4->bPurgeable || VAR_2!=1 );
  FUNC_0( VAR_4->bPurgeable || VAR_4->nMin==0 );
  FUNC_0( VAR_4->bPurgeable==0 || VAR_4->nMin==10 );
  FUNC_0( VAR_4->nMin==0 || VAR_4->bPurgeable );
  FUNC_2(VAR_5 = VAR_4->pGroup);


  if( VAR_4->nHash>0 ){
    unsigned int VAR_7 = VAR_1 % VAR_4->nHash;
    for(VAR_6=VAR_4->apHash[VAR_7]; VAR_6&&VAR_6->iKey!=VAR_1; VAR_6=VAR_6->pNext);
  }


  if( VAR_6 || VAR_2==0 ){
    FUNC_5(VAR_6);
    goto fetch_out;
  }
  FUNC_0( VAR_4->nPage >= VAR_4->nRecyclable );
  VAR_3 = VAR_4->nPage - VAR_4->nRecyclable;
  FUNC_0( VAR_5->mxPinned == VAR_5->nMaxPage + 10 - VAR_5->nMinPage );
  FUNC_0( VAR_4->n90pct == VAR_4->nMax*9/10 );
  if( VAR_2==1 && (
        VAR_3>=VAR_5->mxPinned
     || VAR_3>=VAR_4->n90pct
     || FUNC_8(VAR_4)
  )){
    goto fetch_out;
  }

  if( VAR_4->nPage>=VAR_4->nHash && FUNC_7(VAR_4) ){
    goto fetch_out;
  }


  if( VAR_4->bPurgeable && VAR_5->pLruTail && (
         (VAR_4->nPage+1>=VAR_4->nMax)
      || VAR_5->nCurrentPage>=VAR_5->nMaxPage
      || FUNC_8(VAR_4)
  )){
    PCache1 *VAR_8;
    VAR_6 = VAR_5->pLruTail;
    FUNC_6(VAR_6);
    FUNC_5(VAR_6);
    VAR_8 = VAR_6->pCache;



    FUNC_0( (VAR_4->szPage & (VAR_4->szPage-1))==0 && VAR_4->szPage>=512 );
    FUNC_0( VAR_4->szExtra<512 );
    FUNC_0( (VAR_8->szPage & (VAR_8->szPage-1))==0 && VAR_8->szPage>=512 );
    FUNC_0( VAR_8->szExtra<512 );

    if( VAR_8->szPage+VAR_8->szExtra != VAR_4->szPage+VAR_4->szExtra ){
      FUNC_3(VAR_6);
      VAR_6 = 0;
    }else{
      VAR_5->nCurrentPage -= (VAR_8->bPurgeable - VAR_4->bPurgeable);
    }
  }




  if( !VAR_6 ){
    if( VAR_2==1 ) FUNC_9();
    VAR_6 = FUNC_1(VAR_4);
    if( VAR_2==1 ) FUNC_10();
  }

  if( VAR_6 ){
    unsigned int VAR_9 = VAR_1 % VAR_4->nHash;
    VAR_4->nPage++;
    VAR_6->iKey = VAR_1;
    VAR_6->pNext = VAR_4->apHash[VAR_9];
    VAR_6->pCache = VAR_4;
    VAR_6->pLruPrev = 0;
    VAR_6->pLruNext = 0;
    *(void **)VAR_6->page.pExtra = 0;
    VAR_4->apHash[VAR_9] = VAR_6;
  }

fetch_out:
  if( VAR_6 && VAR_1>VAR_4->iMaxKey ){
    VAR_4->iMaxKey = VAR_1;
  }
  FUNC_4(VAR_5);
  return &VAR_6->page;
}
