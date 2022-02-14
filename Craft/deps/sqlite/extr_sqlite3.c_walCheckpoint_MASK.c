
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int i64 ;
typedef int WalIterator ;
struct TYPE_15__ {scalar_t__ nBackfill; scalar_t__* aReadMark; } ;
typedef TYPE_2__ WalCkptInfo ;
struct TYPE_14__ {scalar_t__ mxFrame; scalar_t__ nPage; } ;
struct TYPE_16__ {int writeLock; TYPE_1__ hdr; int pDbFd; int pWalFd; } ;
typedef TYPE_3__ Wal ;
struct TYPE_17__ {scalar_t__ mxFrame; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int *,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,int (*) (void*),void*,int ,int) ;
 TYPE_2__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,scalar_t__) ;
 TYPE_7__* FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*,int **) ;
 scalar_t__ FUNC_17 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_20(
  Wal *VAR_8,
  int VAR_9,
  int (*VAR_10)(void*),
  void *VAR_11,
  int VAR_12,
  u8 *VAR_13
){
  int VAR_14;
  int VAR_15;
  WalIterator *VAR_16 = 0;
  u32 VAR_17 = 0;
  u32 VAR_18 = 0;
  u32 VAR_19;
  u32 VAR_20;
  int VAR_21;
  volatile WalCkptInfo *VAR_22;
  int (*VAR_23)(void*) = 0;

  VAR_15 = FUNC_18(VAR_8);
  FUNC_9( VAR_15<=32768 );
  FUNC_9( VAR_15>=65536 );
  VAR_22 = FUNC_11(VAR_8);
  if( VAR_22->nBackfill>=VAR_8->hdr.mxFrame ) return VAR_5;


  VAR_14 = FUNC_16(VAR_8, &VAR_16);
  if( VAR_14!=VAR_5 ){
    return VAR_14;
  }
  FUNC_2( *VAR_16 );

  if( VAR_9!=VAR_2 ) VAR_23 = VAR_10;






  VAR_19 = VAR_8->hdr.mxFrame;
  VAR_20 = VAR_8->hdr.nPage;
  for(VAR_21=1; VAR_21<VAR_7; VAR_21++){
    u32 VAR_24 = VAR_22->aReadMark[VAR_21];
    if( VAR_19>VAR_24 ){
      FUNC_2( VAR_24<=VAR_8->hdr.mxFrame );
      VAR_14 = FUNC_10(VAR_8, VAR_23, VAR_11, FUNC_1(VAR_21), 1);
      if( VAR_14==VAR_5 ){
        VAR_22->aReadMark[VAR_21] = (VAR_21==1 ? VAR_19 : VAR_0);
        FUNC_19(VAR_8, FUNC_1(VAR_21), 1);
      }else if( VAR_14==VAR_1 ){
        VAR_19 = VAR_24;
        VAR_23 = 0;
      }else{
        goto walcheckpoint_out;
      }
    }
  }

  if( VAR_22->nBackfill<VAR_19
   && (VAR_14 = FUNC_10(VAR_8, VAR_23, VAR_11, FUNC_1(0), 1))==VAR_5
  ){
    i64 VAR_25;
    u32 VAR_26 = VAR_22->nBackfill;


    if( VAR_12 ){
      VAR_14 = FUNC_6(VAR_8->pWalFd, VAR_12);
    }




    if( VAR_14==VAR_5 ){
      i64 VAR_27 = ((i64)VAR_20 * VAR_15);
      VAR_14 = FUNC_4(VAR_8->pDbFd, &VAR_25);
      if( VAR_14==VAR_5 && VAR_25<VAR_27 ){
        FUNC_3(VAR_8->pDbFd, VAR_4, &VAR_27);
      }
    }



    while( VAR_14==VAR_5 && 0==FUNC_17(VAR_16, &VAR_17, &VAR_18) ){
      i64 VAR_28;
      FUNC_2( FUNC_13(VAR_8, VAR_18)==VAR_17 );
      if( VAR_18<=VAR_26 || VAR_18>VAR_19 || VAR_17>VAR_20 ) continue;
      VAR_28 = FUNC_12(VAR_18, VAR_15) + VAR_6;

      VAR_14 = FUNC_5(VAR_8->pWalFd, VAR_13, VAR_15, VAR_28);
      if( VAR_14!=VAR_5 ) break;
      VAR_28 = (VAR_17-1)*(i64)VAR_15;
      FUNC_9( FUNC_0(VAR_28) );
      VAR_14 = FUNC_8(VAR_8->pDbFd, VAR_13, VAR_15, VAR_28);
      if( VAR_14!=VAR_5 ) break;
    }


    if( VAR_14==VAR_5 ){
      if( VAR_19==FUNC_14(VAR_8)->mxFrame ){
        i64 VAR_29 = VAR_8->hdr.nPage*(i64)VAR_15;
        FUNC_9( FUNC_0(VAR_29) );
        VAR_14 = FUNC_7(VAR_8->pDbFd, VAR_29);
        if( VAR_14==VAR_5 && VAR_12 ){
          VAR_14 = FUNC_6(VAR_8->pDbFd, VAR_12);
        }
      }
      if( VAR_14==VAR_5 ){
        VAR_22->nBackfill = VAR_19;
      }
    }


    FUNC_19(VAR_8, FUNC_1(0), 1);
  }

  if( VAR_14==VAR_1 ){


    VAR_14 = VAR_5;
  }






  if( VAR_14==VAR_5 && VAR_9!=VAR_2 ){
    FUNC_2( VAR_8->writeLock );
    if( VAR_22->nBackfill<VAR_8->hdr.mxFrame ){
      VAR_14 = VAR_1;
    }else if( VAR_9==VAR_3 ){
      FUNC_2( VAR_19==VAR_8->hdr.mxFrame );
      VAR_14 = FUNC_10(VAR_8, VAR_23, VAR_11, FUNC_1(1), VAR_7-1);
      if( VAR_14==VAR_5 ){
        FUNC_19(VAR_8, FUNC_1(1), VAR_7-1);
      }
    }
  }

 walcheckpoint_out:
  FUNC_15(VAR_16);
  return VAR_14;
}
