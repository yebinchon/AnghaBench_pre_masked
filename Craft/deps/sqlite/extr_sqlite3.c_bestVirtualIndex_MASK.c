
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_22__ {TYPE_5__* pVtabIdx; } ;
struct TYPE_23__ {int nOBSat; scalar_t__ nEq; int wsFlags; TYPE_3__ u; } ;
struct sqlite3_index_constraint_usage {scalar_t__ argvIndex; int used; scalar_t__ omit; double rCost; TYPE_4__ plan; } ;
struct sqlite3_index_constraint {int iTermOffset; int usable; } ;
struct SrcList_item {TYPE_9__* pTab; } ;
struct TYPE_24__ {int nConstraint; scalar_t__ orderByConsumed; double estimatedCost; int nOrderBy; int aConstraint; scalar_t__ needToFreeIdxStr; scalar_t__ idxNum; scalar_t__ idxStr; struct sqlite3_index_constraint_usage* aConstraintUsage; } ;
typedef TYPE_5__ sqlite3_index_info ;
typedef int pUsage ;
struct TYPE_25__ {int prereqRight; int eOperator; } ;
typedef TYPE_6__ WhereTerm ;
struct TYPE_26__ {TYPE_6__* a; } ;
typedef TYPE_7__ WhereClause ;
struct TYPE_27__ {int notReady; int i; struct sqlite3_index_constraint_usage cost; TYPE_2__* aLevel; scalar_t__ pOrderBy; TYPE_5__** ppIdxInfo; struct SrcList_item* pSrc; TYPE_7__* pWC; TYPE_10__* pParse; } ;
typedef TYPE_8__ WhereBestIdx ;
struct TYPE_28__ {scalar_t__* azModuleArg; } ;
typedef TYPE_9__ Table ;
struct TYPE_20__ {int wsFlags; int nOBSat; } ;
struct TYPE_21__ {TYPE_1__ plan; } ;
struct TYPE_19__ {int db; } ;
typedef TYPE_10__ Parse ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_8__*) ;
 double FUNC_3 (double) ;
 int FUNC_4 (struct sqlite3_index_constraint_usage*,int ,int) ;
 int FUNC_5 (int ,TYPE_9__*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_10__*,TYPE_9__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_8(WhereBestIdx *VAR_5){
  Parse *VAR_6 = VAR_5->pParse;
  WhereClause *VAR_7 = VAR_5->pWC;
  struct SrcList_item *VAR_8 = VAR_5->pSrc;
  Table *VAR_9 = VAR_8->pTab;
  sqlite3_index_info *VAR_10;
  struct sqlite3_index_constraint *VAR_11;
  struct sqlite3_index_constraint_usage *VAR_12;
  WhereTerm *VAR_13;
  int VAR_14, VAR_15;
  int VAR_16;
  int VAR_17;
  double VAR_18;





  FUNC_4(&VAR_5->cost, 0, sizeof(VAR_5->cost));
  VAR_5->cost.plan.wsFlags = VAR_3;




  VAR_10 = *VAR_5->ppIdxInfo;
  if( VAR_10==0 ){
    *VAR_5->ppIdxInfo = VAR_10 = FUNC_0(VAR_5);
  }
  if( VAR_10==0 ){
    return;
  }
  FUNC_1( VAR_9->azModuleArg && VAR_9->azModuleArg[0] );
  FUNC_1( FUNC_5(VAR_6->db, VAR_9) );
  for(VAR_17=1; 1; VAR_17--){
    FUNC_1( VAR_17==0 || VAR_17==1 );
    VAR_11 = *(struct sqlite3_index_constraint**)&VAR_10->aConstraint;
    VAR_12 = VAR_10->aConstraintUsage;
    for(VAR_14=0; VAR_14<VAR_10->nConstraint; VAR_14++, VAR_11++){
      VAR_15 = VAR_11->iTermOffset;
      VAR_13 = &VAR_7->a[VAR_15];
      if( (VAR_13->prereqRight&VAR_5->notReady)==0
       && (VAR_17 || (VAR_13->eOperator & VAR_4)==0)
      ){
        VAR_11->usable = 1;
      }else{
        VAR_11->usable = 0;
      }
    }
    FUNC_4(VAR_12, 0, sizeof(VAR_12[0])*VAR_10->nConstraint);
    if( VAR_10->needToFreeIdxStr ){
      FUNC_6(VAR_10->idxStr);
    }
    VAR_10->idxStr = 0;
    VAR_10->idxNum = 0;
    VAR_10->needToFreeIdxStr = 0;
    VAR_10->orderByConsumed = 0;

    VAR_10->estimatedCost = VAR_0 / ((double)2);
    VAR_16 = VAR_10->nOrderBy;
    if( !VAR_5->pOrderBy ){
      VAR_10->nOrderBy = 0;
    }

    if( FUNC_7(VAR_6, VAR_9, VAR_10) ){
      return;
    }

    VAR_11 = *(struct sqlite3_index_constraint**)&VAR_10->aConstraint;
    for(VAR_14=0; VAR_14<VAR_10->nConstraint; VAR_14++, VAR_11++){
      if( VAR_12[VAR_14].argvIndex>0 ){
        VAR_15 = VAR_11->iTermOffset;
        VAR_13 = &VAR_7->a[VAR_15];
        VAR_5->cost.used |= VAR_13->prereqRight;
        if( (VAR_13->eOperator & VAR_4)!=0 ){
          if( VAR_12[VAR_14].omit==0 ){




            break;
          }





          VAR_10->orderByConsumed = 0;
        }
      }
    }
    if( VAR_14>=VAR_10->nConstraint ) break;
  }




  if( VAR_10->orderByConsumed ){
    for(VAR_14=0; VAR_14<VAR_5->i; VAR_14++){
      if( (VAR_5->aLevel[VAR_14].plan.wsFlags & VAR_2)==0 ){
        VAR_10->orderByConsumed = 0;
      }
    }
  }





  VAR_18 = VAR_10->estimatedCost;
  if( VAR_5->pOrderBy && VAR_10->orderByConsumed==0 ){
    VAR_18 += FUNC_3(VAR_18)*VAR_18;
  }
  if( (VAR_0/((double)2))<VAR_18 ){
    VAR_5->cost.rCost = (VAR_0/((double)2));
  }else{
    VAR_5->cost.rCost = VAR_18;
  }
  VAR_5->cost.plan.u.pVtabIdx = VAR_10;
  if( VAR_10->orderByConsumed ){
    VAR_5->cost.plan.wsFlags |= VAR_1;
    VAR_5->cost.plan.nOBSat = VAR_16;
  }else{
    VAR_5->cost.plan.nOBSat = VAR_5->i ? VAR_5->aLevel[VAR_5->i-1].plan.nOBSat : 0;
  }
  VAR_5->cost.plan.nEq = 0;
  VAR_10->nOrderBy = VAR_16;




  FUNC_2(VAR_5);
}
