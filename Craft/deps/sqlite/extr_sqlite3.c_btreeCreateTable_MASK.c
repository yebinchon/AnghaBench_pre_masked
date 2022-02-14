
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_26__ {scalar_t__ inTransaction; int btsFlags; int openFlags; TYPE_1__* pPage1; scalar_t__ autoVacuum; } ;
struct TYPE_25__ {TYPE_4__* pBt; } ;
struct TYPE_24__ {int pDbPage; } ;
struct TYPE_23__ {int pDbPage; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ Btree ;
typedef TYPE_4__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (TYPE_4__*,TYPE_2__**,int*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int,TYPE_2__**,int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int,scalar_t__*,int*) ;
 int FUNC_8 (TYPE_4__*,int,scalar_t__,int ,int*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*,scalar_t__,int,int,int ) ;
 int FUNC_11 (TYPE_4__*,int ,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_19(Btree *VAR_14, int *VAR_15, int VAR_16){
  BtShared *VAR_17 = VAR_14->pBt;
  MemPage *VAR_18;
  Pgno VAR_19;
  int VAR_20;
  int VAR_21;

  FUNC_4( FUNC_13(VAR_14) );
  FUNC_4( VAR_17->inTransaction==VAR_13 );
  FUNC_4( (VAR_17->btsFlags & VAR_4)==0 );







  if( VAR_17->autoVacuum ){
    Pgno VAR_22;
    MemPage *VAR_23;






    FUNC_6(VAR_17);





    FUNC_12(VAR_14, VAR_2, &VAR_19);
    VAR_19++;




    while( VAR_19==FUNC_2(VAR_17, VAR_19) ||
        VAR_19==FUNC_1(VAR_17) ){
      VAR_19++;
    }
    FUNC_4( VAR_19>=3 );





    VAR_20 = FUNC_3(VAR_17, &VAR_23, &VAR_22, VAR_19, VAR_0);
    if( VAR_20!=VAR_12 ){
      return VAR_20;
    }

    if( VAR_22!=VAR_19 ){






      u8 VAR_24 = 0;
      Pgno VAR_25 = 0;




      VAR_20 = FUNC_11(VAR_17, 0, 0);
      FUNC_9(VAR_23);
      if( VAR_20!=VAR_12 ){
        return VAR_20;
      }


      VAR_20 = FUNC_5(VAR_17, VAR_19, &VAR_18, 0, 0);
      if( VAR_20!=VAR_12 ){
        return VAR_20;
      }
      VAR_20 = FUNC_7(VAR_17, VAR_19, &VAR_24, &VAR_25);
      if( VAR_24==VAR_10 || VAR_24==VAR_9 ){
        VAR_20 = VAR_11;
      }
      if( VAR_20!=VAR_12 ){
        FUNC_9(VAR_18);
        return VAR_20;
      }
      FUNC_4( VAR_24!=VAR_10 );
      FUNC_4( VAR_24!=VAR_9 );
      VAR_20 = FUNC_10(VAR_17, VAR_18, VAR_24, VAR_25, VAR_22, 0);
      FUNC_9(VAR_18);


      if( VAR_20!=VAR_12 ){
        return VAR_20;
      }
      VAR_20 = FUNC_5(VAR_17, VAR_19, &VAR_18, 0, 0);
      if( VAR_20!=VAR_12 ){
        return VAR_20;
      }
      VAR_20 = FUNC_17(VAR_18->pDbPage);
      if( VAR_20!=VAR_12 ){
        FUNC_9(VAR_18);
        return VAR_20;
      }
    }else{
      VAR_18 = VAR_23;
    }


    FUNC_8(VAR_17, VAR_19, VAR_10, 0, &VAR_20);
    if( VAR_20 ){
      FUNC_9(VAR_18);
      return VAR_20;
    }





    FUNC_4( FUNC_15(VAR_17->pPage1->pDbPage) );
    VAR_20 = FUNC_14(VAR_14, 4, VAR_19);
    if( FUNC_0(VAR_20) ){
      FUNC_9(VAR_18);
      return VAR_20;
    }

  }else{
    VAR_20 = FUNC_3(VAR_17, &VAR_18, &VAR_19, 1, 0);
    if( VAR_20 ) return VAR_20;
  }

  FUNC_4( FUNC_15(VAR_18->pDbPage) );
  if( VAR_16 & VAR_1 ){
    VAR_21 = VAR_5 | VAR_7 | VAR_6;
  }else{
    VAR_21 = VAR_8 | VAR_6;
  }
  FUNC_18(VAR_18, VAR_21);
  FUNC_16(VAR_18->pDbPage);
  FUNC_4( (VAR_17->openFlags & VAR_3)==0 || VAR_19==2 );
  *VAR_15 = (int)VAR_19;
  return VAR_12;
}
