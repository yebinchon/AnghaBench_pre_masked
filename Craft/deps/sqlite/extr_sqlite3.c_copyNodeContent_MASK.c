
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ usableSize; } ;
struct TYPE_7__ {int hdrOffset; int pgno; int isInit; int const nFree; int nCell; scalar_t__ cellOffset; int * aData; TYPE_2__* pBt; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(MemPage *VAR_2, MemPage *VAR_3, int *VAR_4){
  if( (*VAR_4)==VAR_1 ){
    BtShared * const VAR_5 = VAR_2->pBt;
    u8 * const VAR_6 = VAR_2->aData;
    u8 * const VAR_7 = VAR_3->aData;
    int const VAR_8 = VAR_2->hdrOffset;
    int const VAR_9 = ((VAR_3->pgno==1) ? 100 : 0);
    int VAR_10;
    int VAR_11;


    FUNC_0( VAR_2->isInit );
    FUNC_0( VAR_2->nFree>=VAR_9 );
    FUNC_0( FUNC_2(&VAR_6[VAR_8+5]) <= (int)VAR_5->usableSize );


    VAR_11 = FUNC_2(&VAR_6[VAR_8+5]);
    FUNC_3(&VAR_7[VAR_11], &VAR_6[VAR_11], VAR_5->usableSize-VAR_11);
    FUNC_3(&VAR_7[VAR_9], &VAR_6[VAR_8], VAR_2->cellOffset + 2*VAR_2->nCell);






    VAR_3->isInit = 0;
    VAR_10 = FUNC_1(VAR_3);
    if( VAR_10!=VAR_1 ){
      *VAR_4 = VAR_10;
      return;
    }




    if( VAR_0 ){
      *VAR_4 = FUNC_4(VAR_3);
    }
  }
}
