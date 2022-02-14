
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


struct InLoop {int iCur; int eEndLoopOp; int addrInTop; } ;
struct TYPE_45__ {int mallocFailed; } ;
typedef TYPE_9__ sqlite3 ;
struct TYPE_32__ {TYPE_14__* pExpr; } ;
typedef TYPE_10__ WhereTerm ;
struct TYPE_38__ {TYPE_1__* pIndex; } ;
struct TYPE_39__ {TYPE_2__ btree; } ;
struct TYPE_33__ {int wsFlags; int nLTerm; TYPE_10__** aLTerm; TYPE_3__ u; } ;
typedef TYPE_11__ WhereLoop ;
struct TYPE_43__ {int nIn; struct InLoop* aInLoop; } ;
struct TYPE_44__ {TYPE_7__ in; } ;
struct TYPE_34__ {TYPE_8__ u; int addrNxt; TYPE_11__* pWLoop; } ;
typedef TYPE_12__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_42__ {TYPE_5__* pSelect; } ;
struct TYPE_41__ {TYPE_4__* pEList; } ;
struct TYPE_40__ {int nExpr; } ;
struct TYPE_37__ {scalar_t__* aSortOrder; } ;
struct TYPE_36__ {scalar_t__ op; int flags; int iTable; TYPE_6__ x; int pRight; } ;
struct TYPE_35__ {TYPE_9__* db; int * pVdbe; } ;
typedef TYPE_13__ Parse ;
typedef TYPE_14__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_12__*,TYPE_10__*) ;
 TYPE_14__* FUNC_4 (TYPE_13__*,int,TYPE_11__*,TYPE_14__*) ;
 int FUNC_5 (TYPE_9__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_9__*,int) ;
 struct InLoop* FUNC_7 (TYPE_9__*,struct InLoop*,int) ;
 int FUNC_8 (TYPE_13__*,int ,int) ;
 int FUNC_9 (TYPE_9__*,TYPE_14__*) ;
 int FUNC_10 (TYPE_13__*,TYPE_14__*,int ,int ,int*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int,int) ;
 int FUNC_13 (int *,int ,int,int,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(
  Parse *VAR_21,
  WhereTerm *VAR_22,
  WhereLevel *VAR_23,
  int VAR_24,
  int VAR_25,
  int VAR_26
){
  Expr *VAR_27 = VAR_22->pExpr;
  Vdbe *VAR_28 = VAR_21->pVdbe;
  int VAR_29;

  FUNC_2( VAR_23->pWLoop->aLTerm[VAR_24]==VAR_22 );
  FUNC_2( VAR_26>0 );
  if( VAR_27->op==VAR_14 || VAR_27->op==VAR_16 ){
    VAR_29 = FUNC_8(VAR_21, VAR_27->pRight, VAR_26);
  }else if( VAR_27->op==VAR_17 ){
    VAR_29 = VAR_26;
    FUNC_12(VAR_28, VAR_10, 0, VAR_29);

  }else{
    int VAR_30 = VAR_3;
    int VAR_31;
    struct InLoop *VAR_32;
    WhereLoop *VAR_33 = VAR_23->pWLoop;
    int VAR_34;
    int VAR_35 = 0;
    int *VAR_36 = 0;

    if( (VAR_33->wsFlags & VAR_20)==0
      && VAR_33->u.btree.pIndex!=0
      && VAR_33->u.btree.pIndex->aSortOrder[VAR_24]
    ){
      FUNC_15( VAR_24==0 );
      FUNC_15( VAR_25 );
      VAR_25 = !VAR_25;
    }
    FUNC_2( VAR_27->op==VAR_15 );
    VAR_29 = VAR_26;

    for(VAR_34=0; VAR_34<VAR_24; VAR_34++){
      if( VAR_33->aLTerm[VAR_34] && VAR_33->aLTerm[VAR_34]->pExpr==VAR_27 ){
        FUNC_3(VAR_23, VAR_22);
        return VAR_26;
      }
    }
    for(VAR_34=VAR_24;VAR_34<VAR_33->nLTerm; VAR_34++){
      FUNC_2( VAR_33->aLTerm[VAR_34]!=0 );
      if( VAR_33->aLTerm[VAR_34]->pExpr==VAR_27 ) VAR_35++;
    }

    if( (VAR_27->flags & VAR_0)==0 || VAR_27->x.pSelect->pEList->nExpr==1 ){
      VAR_30 = FUNC_10(VAR_21, VAR_27, VAR_2, 0, 0);
    }else{
      sqlite3 *VAR_37 = VAR_21->db;
      VAR_27 = FUNC_4(VAR_21, VAR_24, VAR_33, VAR_27);

      if( !VAR_37->mallocFailed ){
        VAR_36 = (int*)FUNC_6(VAR_21->db, sizeof(int)*VAR_35);
        VAR_30 = FUNC_10(VAR_21, VAR_27, VAR_2, 0, VAR_36);
        VAR_22->pExpr->iTable = VAR_27->iTable;
      }
      FUNC_9(VAR_37, VAR_27);
      VAR_27 = VAR_22->pExpr;
    }

    if( VAR_30==VAR_1 ){
      FUNC_15( VAR_25 );
      VAR_25 = !VAR_25;
    }
    VAR_31 = VAR_27->iTable;
    FUNC_12(VAR_28, VAR_25 ? VAR_7 : VAR_12, VAR_31, 0);
    FUNC_1(VAR_28, VAR_25);
    FUNC_1(VAR_28, !VAR_25);
    FUNC_2( (VAR_33->wsFlags & VAR_19)==0 );

    VAR_33->wsFlags |= VAR_18;
    if( VAR_23->u.in.nIn==0 ){
      VAR_23->addrNxt = FUNC_14(VAR_28);
    }

    VAR_34 = VAR_23->u.in.nIn;
    VAR_23->u.in.nIn += VAR_35;
    VAR_23->u.in.aInLoop =
       FUNC_7(VAR_21->db, VAR_23->u.in.aInLoop,
                              sizeof(VAR_23->u.in.aInLoop[0])*VAR_23->u.in.nIn);
    VAR_32 = VAR_23->u.in.aInLoop;
    if( VAR_32 ){
      int VAR_38 = 0;
      VAR_32 += VAR_34;
      for(VAR_34=VAR_24;VAR_34<VAR_33->nLTerm; VAR_34++){
        if( VAR_33->aLTerm[VAR_34]->pExpr==VAR_27 ){
          int VAR_39 = VAR_29 + VAR_34 - VAR_24;
          if( VAR_30==VAR_4 ){
            FUNC_15( VAR_35>1 );
            VAR_32->addrInTop = FUNC_12(VAR_28, VAR_13, VAR_31, VAR_39);
          }else{
            int VAR_40 = VAR_36 ? VAR_36[VAR_38++] : 0;
            VAR_32->addrInTop = FUNC_13(VAR_28,VAR_5,VAR_31, VAR_40, VAR_39);
          }
          FUNC_11(VAR_28, VAR_6, VAR_39); FUNC_0(VAR_28);
          if( VAR_34==VAR_24 ){
            VAR_32->iCur = VAR_31;
            VAR_32->eEndLoopOp = VAR_25 ? VAR_11 : VAR_8;
          }else{
            VAR_32->eEndLoopOp = VAR_9;
          }
          VAR_32++;
        }
      }
    }else{
      VAR_23->u.in.nIn = 0;
    }
    FUNC_5(VAR_21->db, VAR_36);

  }
  FUNC_3(VAR_23, VAR_22);
  return VAR_29;
}
