
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sqlite3_index_orderby {int desc; int iColumn; } ;
struct sqlite3_index_constraint_usage {int dummy; } ;
struct sqlite3_index_constraint {int iColumn; int iTermOffset; int op; } ;
struct SrcList_item {scalar_t__ iCursor; } ;
struct HiddenIndexInfo {TYPE_7__* pParse; TYPE_6__* pWC; } ;
struct TYPE_19__ {int aConstraintUsage; int aOrderBy; int aConstraint; int nOrderBy; int nConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_17__ {int leftColumn; } ;
struct TYPE_20__ {scalar_t__ leftCursor; int prereqRight; int eOperator; int wtFlags; int eMatchOp; TYPE_1__* pExpr; TYPE_2__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_21__ {int nTerm; TYPE_5__* a; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_24__ {scalar_t__ op; scalar_t__ iTable; int iColumn; } ;
struct TYPE_23__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_22__ {int db; } ;
struct TYPE_18__ {int sortOrder; TYPE_9__* pExpr; } ;
struct TYPE_16__ {int pRight; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;
typedef int Bitmask ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static sqlite3_index_info *FUNC_6(
  Parse *VAR_20,
  WhereClause *VAR_21,
  Bitmask VAR_22,
  struct SrcList_item *VAR_23,
  ExprList *VAR_24,
  u16 *VAR_25
){
  int VAR_26, VAR_27;
  int VAR_28;
  struct sqlite3_index_constraint *VAR_29;
  struct sqlite3_index_orderby *VAR_30;
  struct sqlite3_index_constraint_usage *VAR_31;
  struct HiddenIndexInfo *VAR_32;
  WhereTerm *VAR_33;
  int VAR_34;
  sqlite3_index_info *VAR_35;
  u16 VAR_36 = 0;



  for(VAR_26=VAR_28=0, VAR_33=VAR_21->a; VAR_26<VAR_21->nTerm; VAR_26++, VAR_33++){
    if( VAR_33->leftCursor != VAR_23->iCursor ) continue;
    if( VAR_33->prereqRight & VAR_22 ) continue;
    FUNC_1( FUNC_0(VAR_33->eOperator & ~VAR_12) );
    FUNC_5( VAR_33->eOperator & VAR_15 );
    FUNC_5( VAR_33->eOperator & VAR_17 );
    FUNC_5( VAR_33->eOperator & VAR_16 );
    FUNC_5( VAR_33->eOperator & VAR_9 );
    if( (VAR_33->eOperator & ~(VAR_12))==0 ) continue;
    if( VAR_33->wtFlags & VAR_7 ) continue;
    FUNC_1( VAR_33->u.leftColumn>=(-1) );
    VAR_28++;
  }





  VAR_34 = 0;
  if( VAR_24 ){
    int VAR_37 = VAR_24->nExpr;
    for(VAR_26=0; VAR_26<VAR_37; VAR_26++){
      Expr *VAR_38 = VAR_24->a[VAR_26].pExpr;
      if( VAR_38->op!=VAR_8 || VAR_38->iTable!=VAR_23->iCursor ) break;
    }
    if( VAR_26==VAR_37){
      VAR_34 = VAR_37;
    }
  }



  VAR_35 = FUNC_2(VAR_20->db, sizeof(*VAR_35)
                           + (sizeof(*VAR_29) + sizeof(*VAR_31))*VAR_28
                           + sizeof(*VAR_30)*VAR_34 + sizeof(*VAR_32) );
  if( VAR_35==0 ){
    FUNC_3(VAR_20, "out of memory");
    return 0;
  }






  VAR_32 = (struct HiddenIndexInfo*)&VAR_35[1];
  VAR_29 = (struct sqlite3_index_constraint*)&VAR_32[1];
  VAR_30 = (struct sqlite3_index_orderby*)&VAR_29[VAR_28];
  VAR_31 = (struct sqlite3_index_constraint_usage*)&VAR_30[VAR_34];
  *(int*)&VAR_35->nConstraint = VAR_28;
  *(int*)&VAR_35->nOrderBy = VAR_34;
  *(struct sqlite3_index_constraint**)&VAR_35->aConstraint = VAR_29;
  *(struct sqlite3_index_orderby**)&VAR_35->aOrderBy = VAR_30;
  *(struct sqlite3_index_constraint_usage**)&VAR_35->aConstraintUsage =
                                                                   VAR_31;

  VAR_32->pWC = VAR_21;
  VAR_32->pParse = VAR_20;
  for(VAR_26=VAR_27=0, VAR_33=VAR_21->a; VAR_26<VAR_21->nTerm; VAR_26++, VAR_33++){
    u16 VAR_39;
    if( VAR_33->leftCursor != VAR_23->iCursor ) continue;
    if( VAR_33->prereqRight & VAR_22 ) continue;
    FUNC_1( FUNC_0(VAR_33->eOperator & ~VAR_12) );
    FUNC_5( VAR_33->eOperator & VAR_15 );
    FUNC_5( VAR_33->eOperator & VAR_16 );
    FUNC_5( VAR_33->eOperator & VAR_17 );
    FUNC_5( VAR_33->eOperator & VAR_9 );
    if( (VAR_33->eOperator & ~(VAR_12))==0 ) continue;
    if( VAR_33->wtFlags & VAR_7 ) continue;
    FUNC_1( VAR_33->u.leftColumn>=(-1) );
    VAR_29[VAR_27].iColumn = VAR_33->u.leftColumn;
    VAR_29[VAR_27].iTermOffset = VAR_26;
    VAR_39 = VAR_33->eOperator & VAR_9;
    if( VAR_39==VAR_15 ) VAR_39 = VAR_11;
    if( VAR_39==VAR_10 ){
      VAR_29[VAR_27].op = VAR_33->eMatchOp;
    }else if( VAR_39 & (VAR_17|VAR_16) ){
      if( VAR_39==VAR_17 ){
        VAR_29[VAR_27].op = VAR_4;
      }else{
        VAR_29[VAR_27].op = VAR_3;
      }
    }else{
      VAR_29[VAR_27].op = (u8)VAR_39;



      FUNC_1( VAR_11==VAR_0 );
      FUNC_1( VAR_19==VAR_6 );
      FUNC_1( VAR_18==VAR_5 );
      FUNC_1( VAR_14==VAR_2 );
      FUNC_1( VAR_13==VAR_1 );
      FUNC_1( VAR_33->eOperator&(VAR_15|VAR_11|VAR_19|VAR_18|VAR_14|VAR_13|VAR_10) );

      if( VAR_39 & (VAR_19|VAR_18|VAR_14|VAR_13)
       && FUNC_4(VAR_33->pExpr->pRight)
      ){
        if( VAR_26<16 ) VAR_36 |= (1 << VAR_26);
        if( VAR_39==VAR_19 ) VAR_29[VAR_27].op = VAR_18;
        if( VAR_39==VAR_14 ) VAR_29[VAR_27].op = VAR_13;
      }
    }

    VAR_27++;
  }
  for(VAR_26=0; VAR_26<VAR_34; VAR_26++){
    Expr *VAR_40 = VAR_24->a[VAR_26].pExpr;
    VAR_30[VAR_26].iColumn = VAR_40->iColumn;
    VAR_30[VAR_26].desc = VAR_24->a[VAR_26].sortOrder;
  }

  *VAR_25 = VAR_36;
  return VAR_35;
}
