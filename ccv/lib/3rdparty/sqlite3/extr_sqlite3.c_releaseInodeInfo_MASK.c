
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nRef; scalar_t__ pShmNode; struct TYPE_8__* pPrev; struct TYPE_8__* pNext; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_9__ {TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(unixFile *VAR_2){
  unixInodeInfo *VAR_3 = VAR_2->pInode;
  FUNC_1( FUNC_4() );
  if( FUNC_0(VAR_3) ){
    VAR_3->nRef--;
    if( VAR_3->nRef==0 ){
      FUNC_1( VAR_3->pShmNode==0 );
      FUNC_2(VAR_2);
      if( VAR_3->pPrev ){
        FUNC_1( VAR_3->pPrev->pNext==VAR_3 );
        VAR_3->pPrev->pNext = VAR_3->pNext;
      }else{
        FUNC_1( VAR_0==VAR_3 );
        VAR_0 = VAR_3->pNext;
      }
      if( VAR_3->pNext ){
        FUNC_1( VAR_3->pNext->pPrev==VAR_3 );
        VAR_3->pNext->pPrev = VAR_3->pPrev;
      }
      FUNC_3(VAR_3);
    }
  }
  FUNC_1( VAR_0!=0 || VAR_1==0 );
}
