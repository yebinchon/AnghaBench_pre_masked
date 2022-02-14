
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ i64 ;
struct TYPE_15__ {size_t pageSize; int usableSize; scalar_t__ autoVacuum; int mutex; } ;
struct TYPE_14__ {int nHeader; scalar_t__ nKey; scalar_t__ nData; int nSize; int nLocal; size_t iOverflow; } ;
struct TYPE_13__ {unsigned char* aData; int pDbPage; scalar_t__ intKey; scalar_t__ hasData; int leaf; TYPE_3__* pBt; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;
typedef TYPE_3__ BtShared ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_1__**,scalar_t__*,scalar_t__,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,unsigned char*,TYPE_2__*) ;
 int FUNC_6 (unsigned char*,int const*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,int ,scalar_t__,int*) ;
 int FUNC_9 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned char*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int const* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(
  MemPage *VAR_4,
  unsigned char *VAR_5,
  const void *VAR_6, i64 VAR_7,
  const void *VAR_8,int VAR_9,
  int VAR_10,
  int *VAR_11
){
  int VAR_12;
  const u8 *VAR_13;
  int VAR_14, VAR_15, VAR_16;
  int VAR_17;
  MemPage *VAR_18 = 0;
  MemPage *VAR_19 = 0;
  unsigned char *VAR_20;
  unsigned char *VAR_21;
  BtShared *VAR_22 = VAR_4->pBt;
  Pgno VAR_23 = 0;
  int VAR_24;
  CellInfo VAR_25;

  FUNC_4( FUNC_13(VAR_4->pBt->mutex) );



  FUNC_4( VAR_5<VAR_4->aData || VAR_5>=&VAR_4->aData[VAR_22->pageSize]
            || FUNC_12(VAR_4->pDbPage) );


  VAR_24 = 0;
  if( !VAR_4->leaf ){
    VAR_24 += 4;
  }
  if( VAR_4->hasData ){
    VAR_24 += FUNC_10(&VAR_5[VAR_24], VAR_9+VAR_10);
  }else{
    VAR_9 = VAR_10 = 0;
  }
  VAR_24 += FUNC_10(&VAR_5[VAR_24], *(u64*)&VAR_7);
  FUNC_5(VAR_4, VAR_5, &VAR_25);
  FUNC_4( VAR_25.nHeader==VAR_24 );
  FUNC_4( VAR_25.nKey==VAR_7 );
  FUNC_4( VAR_25.nData==(u32)(VAR_9+VAR_10) );


  VAR_12 = VAR_9 + VAR_10;
  if( VAR_4->intKey ){
    VAR_13 = VAR_8;
    VAR_14 = VAR_9;
    VAR_9 = 0;
  }else{
    if( FUNC_0(VAR_7>0x7fffffff || VAR_6==0) ){
      return VAR_2;
    }
    VAR_12 += (int)VAR_7;
    VAR_13 = VAR_6;
    VAR_14 = (int)VAR_7;
  }
  *VAR_11 = VAR_25.nSize;
  VAR_17 = VAR_25.nLocal;
  VAR_21 = &VAR_5[VAR_24];
  VAR_20 = &VAR_5[VAR_25.iOverflow];

  while( VAR_12>0 ){
    if( VAR_17==0 ){

      Pgno VAR_26 = VAR_23;
      if( VAR_22->autoVacuum ){
        do{
          VAR_23++;
        } while(
          FUNC_2(VAR_22, VAR_23) || VAR_23==FUNC_1(VAR_22)
        );
      }

      VAR_16 = FUNC_3(VAR_22, &VAR_18, &VAR_23, VAR_23, 0);
      if( VAR_22->autoVacuum && VAR_16==VAR_3 ){
        u8 VAR_27 = (VAR_26?VAR_1:VAR_0);
        FUNC_8(VAR_22, VAR_23, VAR_27, VAR_26, &VAR_16);
        if( VAR_16 ){
          FUNC_11(VAR_18);
        }
      }

      if( VAR_16 ){
        FUNC_11(VAR_19);
        return VAR_16;
      }



      FUNC_4( VAR_19==0 || FUNC_12(VAR_19->pDbPage) );



      FUNC_4( VAR_20<VAR_4->aData || VAR_20>=&VAR_4->aData[VAR_22->pageSize]
            || FUNC_12(VAR_4->pDbPage) );

      FUNC_9(VAR_20, VAR_23);
      FUNC_11(VAR_19);
      VAR_19 = VAR_18;
      VAR_20 = VAR_18->aData;
      FUNC_9(VAR_20, 0);
      VAR_21 = &VAR_18->aData[4];
      VAR_17 = VAR_22->usableSize - 4;
    }
    VAR_15 = VAR_12;
    if( VAR_15>VAR_17 ) VAR_15 = VAR_17;



    FUNC_4( VAR_19==0 || FUNC_12(VAR_19->pDbPage) );



    FUNC_4( VAR_21<VAR_4->aData || VAR_21>=&VAR_4->aData[VAR_22->pageSize]
            || FUNC_12(VAR_4->pDbPage) );

    if( VAR_14>0 ){
      if( VAR_15>VAR_14 ) VAR_15 = VAR_14;
      FUNC_4( VAR_13 );
      FUNC_6(VAR_21, VAR_13, VAR_15);
    }else{
      FUNC_7(VAR_21, 0, VAR_15);
    }
    VAR_12 -= VAR_15;
    VAR_21 += VAR_15;
    VAR_13 += VAR_15;
    VAR_14 -= VAR_15;
    VAR_17 -= VAR_15;
    if( VAR_14==0 ){
      VAR_14 = VAR_9;
      VAR_13 = VAR_8;
    }
  }
  FUNC_11(VAR_19);
  return VAR_3;
}
