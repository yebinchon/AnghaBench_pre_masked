
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_13__ {int btsFlags; int pageSize; int usableSize; int autoVacuum; int incrVacuum; int maxLocal; scalar_t__ maxLeaf; int max1bytePayload; int nPage; TYPE_2__* pPage1; void* minLeaf; void* minLocal; TYPE_1__* db; int pPager; int mutex; } ;
struct TYPE_12__ {int* aData; } ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int,TYPE_2__**,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int ,int*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 char* VAR_9 ;

__attribute__((used)) static int FUNC_13(BtShared *VAR_10){
  int VAR_11;
  MemPage *VAR_12;
  int VAR_13;
  int VAR_14 = 0;
  int VAR_15;

  FUNC_1( FUNC_12(VAR_10->mutex) );
  FUNC_1( VAR_10->pPage1==0 );
  VAR_11 = FUNC_11(VAR_10->pPager);
  if( VAR_11!=VAR_7 ) return VAR_11;
  VAR_11 = FUNC_2(VAR_10, 1, &VAR_12, 0);
  if( VAR_11!=VAR_7 ) return VAR_11;




  VAR_13 = VAR_15 = FUNC_4(28+(u8*)VAR_12->aData);
  FUNC_9(VAR_10->pPager, &VAR_14);
  if( VAR_13==0 || FUNC_5(24+(u8*)VAR_12->aData, 92+(u8*)VAR_12->aData,4)!=0 ){
    VAR_13 = VAR_14;
  }
  if( VAR_13>0 ){
    u32 VAR_16;
    u32 VAR_17;
    u8 *VAR_18 = VAR_12->aData;
    VAR_11 = VAR_6;



    if( FUNC_5(VAR_18, VAR_9, 16)!=0 ){
      goto page1_init_failed;
    }
    if( VAR_18[18]>2 ){
      VAR_10->btsFlags |= VAR_1;
    }
    if( VAR_18[19]>2 ){
      goto page1_init_failed;
    }
    if( VAR_18[19]==2 && (VAR_10->btsFlags & VAR_0)==0 ){
      int VAR_19 = 0;
      VAR_11 = FUNC_8(VAR_10->pPager, &VAR_19);
      if( VAR_11!=VAR_7 ){
        goto page1_init_failed;
      }else{
        FUNC_7(VAR_10, VAR_4+1);
        if( VAR_19==0 ){
          FUNC_6(VAR_12);
          return VAR_7;
        }
      }
      VAR_11 = VAR_6;
    }else{
      FUNC_7(VAR_10, VAR_3+1);
    }
    if( FUNC_5(&VAR_18[21], "\100\040\040",3)!=0 ){
      goto page1_init_failed;
    }



    VAR_16 = (VAR_18[16]<<8) | (VAR_18[17]<<16);


    if( ((VAR_16-1)&VAR_16)!=0
     || VAR_16>VAR_5
     || VAR_16<=256
    ){
      goto page1_init_failed;
    }
    FUNC_1( (VAR_16 & 7)==0 );







    VAR_17 = VAR_16 - VAR_18[20];
    if( (u32)VAR_16!=VAR_10->pageSize ){






      FUNC_6(VAR_12);
      VAR_10->usableSize = VAR_17;
      VAR_10->pageSize = VAR_16;
      FUNC_3(VAR_10);
      VAR_11 = FUNC_10(VAR_10->pPager, &VAR_10->pageSize,
                                   VAR_16-VAR_17);
      return VAR_11;
    }
    if( (VAR_10->db->flags & VAR_8)==0 && VAR_13>VAR_14 ){
      VAR_11 = VAR_2;
      goto page1_init_failed;
    }



    if( VAR_17<480 ){
      goto page1_init_failed;
    }
    VAR_10->pageSize = VAR_16;
    VAR_10->usableSize = VAR_17;

    VAR_10->autoVacuum = (FUNC_4(&VAR_18[36 + 4*4])?1:0);
    VAR_10->incrVacuum = (FUNC_4(&VAR_18[36 + 7*4])?1:0);

  }
  VAR_10->maxLocal = (u16)((VAR_10->usableSize-12)*64/255 - 23);
  VAR_10->minLocal = (u16)((VAR_10->usableSize-12)*32/255 - 23);
  VAR_10->maxLeaf = (u16)(VAR_10->usableSize - 35);
  VAR_10->minLeaf = (u16)((VAR_10->usableSize-12)*32/255 - 23);
  if( VAR_10->maxLocal>127 ){
    VAR_10->max1bytePayload = 127;
  }else{
    VAR_10->max1bytePayload = (u8)VAR_10->maxLocal;
  }
  FUNC_1( VAR_10->maxLeaf + 23 <= FUNC_0(VAR_10) );
  VAR_10->pPage1 = VAR_12;
  VAR_10->nPage = VAR_13;
  return VAR_7;

page1_init_failed:
  FUNC_6(VAR_12);
  VAR_10->pPage1 = 0;
  return VAR_11;
}
