
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int autoVacuum; scalar_t__ usableSize; int pPager; int mutex; } ;
typedef scalar_t__ Pgno ;
typedef int DbPage ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,int **) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(BtShared *VAR_2, Pgno VAR_3, u8 VAR_4, Pgno VAR_5, int *VAR_6){
  DbPage *VAR_7;
  u8 *VAR_8;
  Pgno VAR_9;
  int VAR_10;
  int VAR_11;

  if( *VAR_6 ) return;

  FUNC_5( FUNC_12(VAR_2->mutex) );

  FUNC_5( 0==FUNC_1(VAR_2, FUNC_0(VAR_2)) );

  FUNC_5( VAR_2->autoVacuum );
  if( VAR_3==0 ){
    *VAR_6 = VAR_0;
    return;
  }
  VAR_9 = FUNC_2(VAR_2, VAR_3);
  VAR_11 = FUNC_8(VAR_2->pPager, VAR_9, &VAR_7);
  if( VAR_11!=VAR_1 ){
    *VAR_6 = VAR_11;
    return;
  }
  VAR_10 = FUNC_3(VAR_9, VAR_3);
  if( VAR_10<0 ){
    *VAR_6 = VAR_0;
    goto ptrmap_exit;
  }
  FUNC_5( VAR_10 <= (int)VAR_2->usableSize-5 );
  VAR_8 = (u8 *)FUNC_9(VAR_7);

  if( VAR_4!=VAR_8[VAR_10] || FUNC_6(&VAR_8[VAR_10+1])!=VAR_5 ){
    FUNC_4(("PTRMAP_UPDATE: %d->(%d,%d)\n", VAR_3, VAR_4, VAR_5));
    *VAR_6= VAR_11 = FUNC_11(VAR_7);
    if( VAR_11==VAR_1 ){
      VAR_8[VAR_10] = VAR_4;
      FUNC_7(&VAR_8[VAR_10+1], VAR_5);
    }
  }

ptrmap_exit:
  FUNC_10(VAR_7);
}
