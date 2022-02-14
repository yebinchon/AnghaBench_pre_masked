
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u8 ;
struct InLoop {int iCur; int eEndLoopOp; int addrInTop; } ;
struct TYPE_23__ {TYPE_9__* pExpr; } ;
typedef TYPE_6__ WhereTerm ;
struct TYPE_21__ {int nIn; struct InLoop* aInLoop; } ;
struct TYPE_22__ {TYPE_4__ in; } ;
struct TYPE_19__ {TYPE_1__* pIdx; } ;
struct TYPE_20__ {int wsFlags; TYPE_2__ u; } ;
struct TYPE_24__ {TYPE_5__ u; int addrNxt; TYPE_3__ plan; } ;
typedef TYPE_7__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_26__ {scalar_t__ op; int iTable; int pRight; } ;
struct TYPE_25__ {int db; int * pVdbe; } ;
struct TYPE_18__ {int nColumn; scalar_t__* aSortOrder; } ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ Expr ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,TYPE_6__*) ;
 struct InLoop* FUNC_2 (int ,struct InLoop*,int) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (TYPE_8__*,TYPE_9__*,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int ,int,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(
  Parse *VAR_16,
  WhereTerm *VAR_17,
  WhereLevel *VAR_18,
  int VAR_19,
  int VAR_20
){
  Expr *VAR_21 = VAR_17->pExpr;
  Vdbe *VAR_22 = VAR_16->pVdbe;
  int VAR_23;

  FUNC_0( VAR_20>0 );
  if( VAR_21->op==VAR_10 ){
    VAR_23 = FUNC_3(VAR_16, VAR_21->pRight, VAR_20);
  }else if( VAR_21->op==VAR_12 ){
    VAR_23 = VAR_20;
    FUNC_6(VAR_22, VAR_6, 0, VAR_23);

  }else{
    int VAR_24;
    int VAR_25;
    struct InLoop *VAR_26;
    u8 VAR_27 = (VAR_18->plan.wsFlags & VAR_15)!=0;

    if( (VAR_18->plan.wsFlags & VAR_13)!=0
      && VAR_18->plan.u.pIdx->aSortOrder[VAR_19]
    ){
      FUNC_9( VAR_19==0 );
      FUNC_9( VAR_19==VAR_18->plan.u.pIdx->nColumn-1 );
      FUNC_9( VAR_19>0 && VAR_19+1<VAR_18->plan.u.pIdx->nColumn );
      FUNC_9( VAR_27 );
      VAR_27 = !VAR_27;
    }
    FUNC_0( VAR_21->op==VAR_11 );
    VAR_23 = VAR_20;
    VAR_24 = FUNC_4(VAR_16, VAR_21, 0);
    if( VAR_24==VAR_0 ){
      FUNC_9( VAR_27 );
      VAR_27 = !VAR_27;
    }
    VAR_25 = VAR_21->iTable;
    FUNC_6(VAR_22, VAR_27 ? VAR_4 : VAR_8, VAR_25, 0);
    FUNC_0( VAR_18->plan.wsFlags & VAR_14 );
    if( VAR_18->u.in.nIn==0 ){
      VAR_18->addrNxt = FUNC_8(VAR_22);
    }
    VAR_18->u.in.nIn++;
    VAR_18->u.in.aInLoop =
       FUNC_2(VAR_16->db, VAR_18->u.in.aInLoop,
                              sizeof(VAR_18->u.in.aInLoop[0])*VAR_18->u.in.nIn);
    VAR_26 = VAR_18->u.in.aInLoop;
    if( VAR_26 ){
      VAR_26 += VAR_18->u.in.nIn - 1;
      VAR_26->iCur = VAR_25;
      if( VAR_24==VAR_1 ){
        VAR_26->addrInTop = FUNC_6(VAR_22, VAR_9, VAR_25, VAR_23);
      }else{
        VAR_26->addrInTop = FUNC_7(VAR_22, VAR_2, VAR_25, 0, VAR_23);
      }
      VAR_26->eEndLoopOp = VAR_27 ? VAR_7 : VAR_5;
      FUNC_5(VAR_22, VAR_3, VAR_23);
    }else{
      VAR_18->u.in.nIn = 0;
    }

  }
  FUNC_1(VAR_18, VAR_17);
  return VAR_23;
}
