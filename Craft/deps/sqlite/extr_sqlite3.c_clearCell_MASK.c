
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {int usableSize; int mutex; } ;
struct TYPE_15__ {int iOverflow; int nPayload; int nLocal; } ;
struct TYPE_14__ {unsigned char* aData; int maskPage; int pDbPage; TYPE_3__* pBt; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_3__*,int,TYPE_1__**,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(MemPage *VAR_2, unsigned char *VAR_3){
  BtShared *VAR_4 = VAR_2->pBt;
  CellInfo VAR_5;
  Pgno VAR_6;
  int VAR_7;
  int VAR_8;
  u32 VAR_9;

  FUNC_0( FUNC_9(VAR_2->pBt->mutex) );
  FUNC_3(VAR_2, VAR_3, &VAR_5);
  if( VAR_5.iOverflow==0 ){
    return VAR_1;
  }
  if( VAR_3+VAR_5.iOverflow+3 > VAR_2->aData+VAR_2->maskPage ){
    return VAR_0;
  }
  VAR_6 = FUNC_5(&VAR_3[VAR_5.iOverflow]);
  FUNC_0( VAR_4->usableSize > 4 );
  VAR_9 = VAR_4->usableSize - 4;
  VAR_8 = (VAR_5.nPayload - VAR_5.nLocal + VAR_9 - 1)/VAR_9;
  FUNC_0( VAR_6==0 || VAR_8>0 );
  while( VAR_8-- ){
    Pgno VAR_10 = 0;
    MemPage *VAR_11 = 0;
    if( VAR_6<2 || VAR_6>FUNC_2(VAR_4) ){



      return VAR_0;
    }
    if( VAR_8 ){
      VAR_7 = FUNC_6(VAR_4, VAR_6, &VAR_11, &VAR_10);
      if( VAR_7 ) return VAR_7;
    }

    if( ( VAR_11 || ((VAR_11 = FUNC_1(VAR_4, VAR_6))!=0) )
     && FUNC_7(VAR_11->pDbPage)!=1
    ){
      VAR_7 = VAR_0;
    }else{
      VAR_7 = FUNC_4(VAR_4, VAR_11, VAR_6);
    }

    if( VAR_11 ){
      FUNC_8(VAR_11->pDbPage);
    }
    if( VAR_7 ) return VAR_7;
    VAR_6 = VAR_10;
  }
  return VAR_1;
}
