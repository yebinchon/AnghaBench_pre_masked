
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {scalar_t__ autoVacuum; TYPE_13__* pCursor; } ;
struct TYPE_16__ {scalar_t__ inTrans; int db; TYPE_3__* pBt; } ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {TYPE_1__* pBtree; } ;
typedef int Pgno ;
typedef int MemPage ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_13__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int,int **,int ,int ) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int *,int ,int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(Btree *VAR_7, Pgno VAR_8, int *VAR_9){
  int VAR_10;
  MemPage *VAR_11 = 0;
  BtShared *VAR_12 = VAR_7->pBt;

  FUNC_3( FUNC_10(VAR_7) );
  FUNC_3( VAR_7->inTrans==VAR_6 );
  if( FUNC_0(VAR_12->pCursor) ){
    FUNC_12(VAR_7->db, VAR_12->pCursor->pBtree->db);
    return VAR_4;
  }

  VAR_10 = FUNC_4(VAR_12, (Pgno)VAR_8, &VAR_11, 0, 0);
  if( VAR_10 ) return VAR_10;
  VAR_10 = FUNC_8(VAR_7, VAR_8, 0);
  if( VAR_10 ){
    FUNC_6(VAR_11);
    return VAR_10;
  }

  *VAR_9 = 0;

  if( VAR_8>1 ){




    if( VAR_12->autoVacuum ){
      Pgno VAR_13;
      FUNC_9(VAR_7, VAR_0, &VAR_13);

      if( VAR_8==VAR_13 ){



        FUNC_5(VAR_11, &VAR_10);
        FUNC_6(VAR_11);
        if( VAR_10!=VAR_5 ){
          return VAR_10;
        }
      }else{




        MemPage *VAR_14;
        FUNC_6(VAR_11);
        VAR_10 = FUNC_4(VAR_12, VAR_13, &VAR_14, 0, 0);
        if( VAR_10!=VAR_5 ){
          return VAR_10;
        }
        VAR_10 = FUNC_7(VAR_12, VAR_14, VAR_3, 0, VAR_8, 0);
        FUNC_6(VAR_14);
        if( VAR_10!=VAR_5 ){
          return VAR_10;
        }
        VAR_14 = 0;
        VAR_10 = FUNC_4(VAR_12, VAR_13, &VAR_14, 0, 0);
        FUNC_5(VAR_14, &VAR_10);
        FUNC_6(VAR_14);
        if( VAR_10!=VAR_5 ){
          return VAR_10;
        }
        *VAR_9 = VAR_13;
      }






      VAR_13--;
      while( VAR_13==FUNC_1(VAR_12)
             || FUNC_2(VAR_12, VAR_13) ){
        VAR_13--;
      }
      FUNC_3( VAR_13!=FUNC_1(VAR_12) );

      VAR_10 = FUNC_11(VAR_7, 4, VAR_13);
    }else{
      FUNC_5(VAR_11, &VAR_10);
      FUNC_6(VAR_11);
    }

  }else{




    FUNC_13(VAR_11, VAR_1|VAR_2 );
    FUNC_6(VAR_11);
  }
  return VAR_10;
}
