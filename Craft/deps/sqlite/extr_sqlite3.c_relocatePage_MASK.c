
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int mutex; int * pPager; } ;
struct TYPE_11__ {scalar_t__ pgno; int pDbPage; int aData; TYPE_2__* pBt; } ;
typedef scalar_t__ Pgno ;
typedef int Pager ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,TYPE_1__**,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int ,scalar_t__,int*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int ,scalar_t__,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(
  BtShared *VAR_5,
  MemPage *VAR_6,
  u8 VAR_7,
  Pgno VAR_8,
  Pgno VAR_9,
  int VAR_10
){
  MemPage *VAR_11;
  Pgno VAR_12 = VAR_6->pgno;
  Pager *VAR_13 = VAR_5->pPager;
  int VAR_14;

  FUNC_1( VAR_7==VAR_2 || VAR_7==VAR_1 ||
      VAR_7==VAR_0 || VAR_7==VAR_3 );
  FUNC_1( FUNC_10(VAR_5->mutex) );
  FUNC_1( VAR_6->pBt==VAR_5 );


  FUNC_0(("AUTOVACUUM: Moving %d to free page %d (ptr page %d type %d)\n",
      VAR_12, VAR_9, VAR_8, VAR_7));
  VAR_14 = FUNC_8(VAR_13, VAR_6->pDbPage, VAR_9, VAR_10);
  if( VAR_14!=VAR_4 ){
    return VAR_14;
  }
  VAR_6->pgno = VAR_9;
  if( VAR_7==VAR_0 || VAR_7==VAR_3 ){
    VAR_14 = FUNC_7(VAR_6);
    if( VAR_14!=VAR_4 ){
      return VAR_14;
    }
  }else{
    Pgno VAR_15 = FUNC_3(VAR_6->aData);
    if( VAR_15!=0 ){
      FUNC_5(VAR_5, VAR_15, VAR_2, VAR_9, &VAR_14);
      if( VAR_14!=VAR_4 ){
        return VAR_14;
      }
    }
  }





  if( VAR_7!=VAR_3 ){
    VAR_14 = FUNC_2(VAR_5, VAR_8, &VAR_11, 0, 0);
    if( VAR_14!=VAR_4 ){
      return VAR_14;
    }
    VAR_14 = FUNC_9(VAR_11->pDbPage);
    if( VAR_14!=VAR_4 ){
      FUNC_6(VAR_11);
      return VAR_14;
    }
    VAR_14 = FUNC_4(VAR_11, VAR_12, VAR_9, VAR_7);
    FUNC_6(VAR_11);
    if( VAR_14==VAR_4 ){
      FUNC_5(VAR_5, VAR_9, VAR_7, VAR_8, &VAR_14);
    }
  }
  return VAR_14;
}
