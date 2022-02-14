
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct TYPE_9__ {int pageSize; int usableSize; int mutex; } ;
struct TYPE_8__ {scalar_t__ pgno; scalar_t__ aData; int isInit; size_t hdrOffset; size_t maskPage; size_t cellOffset; int leaf; size_t* aDataEnd; size_t* aCellIdx; int nCell; size_t nFree; scalar_t__ nOverflow; TYPE_2__* pBt; int pDbPage; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,size_t*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,size_t) ;
 void* FUNC_4 (size_t*) ;
 int FUNC_5 (size_t*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(MemPage *VAR_2){

  FUNC_1( VAR_2->pBt!=0 );
  FUNC_1( FUNC_9(VAR_2->pBt->mutex) );
  FUNC_1( VAR_2->pgno==FUNC_8(VAR_2->pDbPage) );
  FUNC_1( VAR_2 == FUNC_7(VAR_2->pDbPage) );
  FUNC_1( VAR_2->aData == FUNC_6(VAR_2->pDbPage) );

  if( !VAR_2->isInit ){
    u16 VAR_3;
    u8 VAR_4;
    u8 *VAR_5;
    BtShared *VAR_6;
    int VAR_7;
    u16 VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;

    VAR_6 = VAR_2->pBt;

    VAR_4 = VAR_2->hdrOffset;
    VAR_5 = VAR_2->aData;
    if( FUNC_3(VAR_2, VAR_5[VAR_4]) ) return VAR_0;
    FUNC_1( VAR_6->pageSize>=512 && VAR_6->pageSize<=65536 );
    VAR_2->maskPage = (u16)(VAR_6->pageSize - 1);
    VAR_2->nOverflow = 0;
    VAR_7 = VAR_6->usableSize;
    VAR_2->cellOffset = VAR_8 = VAR_4 + 12 - 4*VAR_2->leaf;
    VAR_2->aDataEnd = &VAR_5[VAR_7];
    VAR_2->aCellIdx = &VAR_5[VAR_8];
    VAR_10 = FUNC_5(&VAR_5[VAR_4+5]);
    VAR_2->nCell = FUNC_4(&VAR_5[VAR_4+3]);
    if( VAR_2->nCell>FUNC_0(VAR_6) ){

      return VAR_0;
    }
    FUNC_10( VAR_2->nCell==FUNC_0(VAR_6) );
    VAR_11 = VAR_8 + 2*VAR_2->nCell;
    VAR_12 = VAR_7 - 4;
    VAR_3 = FUNC_4(&VAR_5[VAR_4+1]);
    VAR_9 = VAR_5[VAR_4+7] + VAR_10;
    while( VAR_3>0 ){
      u16 VAR_13, VAR_14;
      if( VAR_3<VAR_11 || VAR_3>VAR_12 ){

        return VAR_0;
      }
      VAR_13 = FUNC_4(&VAR_5[VAR_3]);
      VAR_14 = FUNC_4(&VAR_5[VAR_3+2]);
      if( (VAR_13>0 && VAR_13<=VAR_3+VAR_14+3) || VAR_3+VAR_14>VAR_7 ){


        return VAR_0;
      }
      VAR_9 = VAR_9 + VAR_14;
      VAR_3 = VAR_13;
    }
    if( VAR_9>VAR_7 ){
      return VAR_0;
    }
    VAR_2->nFree = (u16)(VAR_9 - VAR_11);
    VAR_2->isInit = 1;
  }
  return VAR_1;
}
