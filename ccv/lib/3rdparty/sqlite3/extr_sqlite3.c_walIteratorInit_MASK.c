
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct WalSegment {int dummy; } ;
typedef scalar_t__ ht_slot ;
struct TYPE_12__ {int nSegment; TYPE_2__* aSegment; } ;
typedef TYPE_3__ WalIterator ;
struct TYPE_10__ {scalar_t__ mxFrame; } ;
struct TYPE_13__ {TYPE_1__ hdr; scalar_t__ ckptLock; } ;
typedef TYPE_4__ Wal ;
struct TYPE_11__ {int iZero; int nEntry; int* aPgno; scalar_t__* aIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int,scalar_t__ volatile**,int volatile**,int*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int*,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_8(Wal *VAR_3, u32 VAR_4, WalIterator **VAR_5){
  WalIterator *VAR_6;
  int VAR_7;
  u32 VAR_8;
  int VAR_9;
  int VAR_10;
  ht_slot *VAR_11;
  int VAR_12 = VAR_2;




  FUNC_0( VAR_3->ckptLock && VAR_3->hdr.mxFrame>0 );
  VAR_8 = VAR_3->hdr.mxFrame;


  VAR_7 = FUNC_4(VAR_8) + 1;
  VAR_9 = sizeof(WalIterator)
        + (VAR_7-1)*sizeof(struct WalSegment)
        + VAR_8*sizeof(ht_slot);
  VAR_6 = (WalIterator *)FUNC_3(VAR_9);
  if( !VAR_6 ){
    return VAR_1;
  }
  FUNC_1(VAR_6, 0, VAR_9);
  VAR_6->nSegment = VAR_7;




  VAR_11 = (ht_slot *)FUNC_3(
      sizeof(ht_slot) * (VAR_8>VAR_0?VAR_0:VAR_8)
  );
  if( !VAR_11 ){
    VAR_12 = VAR_1;
  }

  for(VAR_10=FUNC_4(VAR_4+1); VAR_12==VAR_2 && VAR_10<VAR_7; VAR_10++){
    volatile ht_slot *VAR_13;
    u32 VAR_14;
    volatile u32 *VAR_15;

    VAR_12 = FUNC_5(VAR_3, VAR_10, &VAR_13, &VAR_15, &VAR_14);
    if( VAR_12==VAR_2 ){
      int VAR_16;
      int VAR_17;
      ht_slot *VAR_18;

      VAR_15++;
      if( (VAR_10+1)==VAR_7 ){
        VAR_17 = (int)(VAR_8 - VAR_14);
      }else{
        VAR_17 = (int)((u32*)VAR_13 - (u32*)VAR_15);
      }
      VAR_18 = &((ht_slot *)&VAR_6->aSegment[VAR_6->nSegment])[VAR_14];
      VAR_14++;

      for(VAR_16=0; VAR_16<VAR_17; VAR_16++){
        VAR_18[VAR_16] = (ht_slot)VAR_16;
      }
      FUNC_7((u32 *)VAR_15, VAR_11, VAR_18, &VAR_17);
      VAR_6->aSegment[VAR_10].iZero = VAR_14;
      VAR_6->aSegment[VAR_10].nEntry = VAR_17;
      VAR_6->aSegment[VAR_10].aIndex = VAR_18;
      VAR_6->aSegment[VAR_10].aPgno = (u32 *)VAR_15;
    }
  }
  FUNC_2(VAR_11);

  if( VAR_12!=VAR_2 ){
    FUNC_6(VAR_6);
    VAR_6 = 0;
  }
  *VAR_5 = VAR_6;
  return VAR_12;
}
