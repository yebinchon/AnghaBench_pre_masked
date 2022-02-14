
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_22__ {int wtFlags; int eOperator; TYPE_3__* pExpr; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_19__ {TYPE_7__* pIdx; } ;
struct TYPE_20__ {int nEq; int wsFlags; TYPE_1__ u; } ;
struct TYPE_23__ {int iTabCur; int addrBrk; TYPE_2__ plan; } ;
typedef TYPE_5__ WhereLevel ;
typedef int WhereClause ;
typedef int Vdbe ;
struct TYPE_25__ {int nColumn; int* aiColumn; } ;
struct TYPE_24__ {int nMem; TYPE_10__* db; int * pVdbe; } ;
struct TYPE_21__ {int * pRight; } ;
struct TYPE_18__ {int mallocFailed; } ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ Index ;
typedef int Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*,TYPE_5__*,int,int) ;
 TYPE_4__* FUNC_2 (int *,int,int,int ,int,TYPE_7__*) ;
 char FUNC_3 (int *,char) ;
 char* FUNC_4 (TYPE_10__*,int ) ;
 int FUNC_5 (int *,int *,int,int ) ;
 scalar_t__ FUNC_6 (int *,char) ;
 int FUNC_7 (int *,TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(
  Parse *VAR_7,
  WhereLevel *VAR_8,
  WhereClause *VAR_9,
  Bitmask VAR_10,
  int VAR_11,
  char **VAR_12
){
  int VAR_13 = VAR_8->plan.nEq;
  Vdbe *VAR_14 = VAR_7->pVdbe;
  Index *VAR_15;
  int VAR_16 = VAR_8->iTabCur;
  WhereTerm *VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;
  char *VAR_21;


  FUNC_0( VAR_8->plan.wsFlags & VAR_4 );
  VAR_15 = VAR_8->plan.u.pIdx;



  VAR_19 = VAR_7->nMem + 1;
  VAR_20 = VAR_8->plan.nEq + VAR_11;
  VAR_7->nMem += VAR_20;

  VAR_21 = FUNC_4(VAR_7->db, FUNC_7(VAR_14, VAR_15));
  if( !VAR_21 ){
    VAR_7->db->mallocFailed = 1;
  }



  FUNC_0( VAR_15->nColumn>=VAR_13 );
  for(VAR_18=0; VAR_18<VAR_13; VAR_18++){
    int VAR_22;
    int VAR_23 = VAR_15->aiColumn[VAR_18];
    VAR_17 = FUNC_2(VAR_9, VAR_16, VAR_23, VAR_10, VAR_8->plan.wsFlags, VAR_15);
    if( VAR_17==0 ) break;


    FUNC_10( (VAR_17->wtFlags & VAR_2)!=0 );
    FUNC_10( VAR_17->wtFlags & VAR_3 );
    VAR_22 = FUNC_1(VAR_7, VAR_17, VAR_8, VAR_18, VAR_19+VAR_18);
    if( VAR_22!=VAR_19+VAR_18 ){
      if( VAR_20==1 ){
        FUNC_8(VAR_7, VAR_19);
        VAR_19 = VAR_22;
      }else{
        FUNC_9(VAR_14, VAR_0, VAR_22, VAR_19+VAR_18);
      }
    }
    FUNC_10( VAR_17->eOperator & VAR_6 );
    FUNC_10( VAR_17->eOperator & VAR_5 );
    if( (VAR_17->eOperator & (VAR_6|VAR_5))==0 ){
      Expr *VAR_24 = VAR_17->pExpr->pRight;
      FUNC_5(VAR_14, VAR_24, VAR_19+VAR_18, VAR_8->addrBrk);
      if( VAR_21 ){
        if( FUNC_3(VAR_24, VAR_21[VAR_18])==VAR_1 ){
          VAR_21[VAR_18] = VAR_1;
        }
        if( FUNC_6(VAR_24, VAR_21[VAR_18]) ){
          VAR_21[VAR_18] = VAR_1;
        }
      }
    }
  }
  *VAR_12 = VAR_21;
  return VAR_19;
}
