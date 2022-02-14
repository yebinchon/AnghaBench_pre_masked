
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_13__ {scalar_t__ nBackfill; int * aReadMark; } ;
typedef TYPE_2__ WalCkptInfo ;
struct TYPE_12__ {scalar_t__ mxFrame; scalar_t__* aSalt; } ;
struct TYPE_14__ {int readLock; TYPE_1__ hdr; int nCkpt; } ;
typedef TYPE_3__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int) ;
 TYPE_2__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (TYPE_3__*,int*,int,int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_12(Wal *VAR_7){
  int VAR_8 = VAR_3;
  int VAR_9;

  if( VAR_7->readLock==0 ){
    volatile WalCkptInfo *VAR_10 = FUNC_6(VAR_7);
    FUNC_1( VAR_10->nBackfill==VAR_7->hdr.mxFrame );
    if( VAR_10->nBackfill>0 ){
      u32 VAR_11;
      FUNC_4(4, &VAR_11);
      VAR_8 = FUNC_8(VAR_7, FUNC_0(1), VAR_5-1);
      if( VAR_8==VAR_3 ){
        int VAR_12;
        u32 *VAR_13 = VAR_7->hdr.aSalt;

        VAR_7->nCkpt++;
        VAR_7->hdr.mxFrame = 0;
        FUNC_3((u8*)&VAR_13[0], 1 + FUNC_2((u8*)&VAR_13[0]));
        VAR_13[1] = VAR_11;
        FUNC_7(VAR_7);
        VAR_10->nBackfill = 0;
        VAR_10->aReadMark[1] = 0;
        for(VAR_12=2; VAR_12<VAR_5; VAR_12++) VAR_10->aReadMark[VAR_12] = VAR_0;
        FUNC_1( VAR_10->aReadMark[0]==0 );
        FUNC_10(VAR_7, FUNC_0(1), VAR_5-1);
      }else if( VAR_8!=VAR_1 ){
        return VAR_8;
      }
    }
    FUNC_11(VAR_7, FUNC_0(0));
    VAR_7->readLock = -1;
    VAR_9 = 0;
    do{
      int VAR_14;
      VAR_8 = FUNC_9(VAR_7, &VAR_14, 1, ++VAR_9);
    }while( VAR_8==VAR_6 );
    FUNC_1( (VAR_8&0xff)!=VAR_1 );
    FUNC_5( (VAR_8&0xff)==VAR_2 );
    FUNC_5( VAR_8==VAR_4 );
    FUNC_5( VAR_8==VAR_3 );
  }
  return VAR_8;
}
