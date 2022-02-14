
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


struct TYPE_21__ {int flags; scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_22__ {int iPKey; int nCol; int zName; TYPE_2__* aCol; } ;
typedef TYPE_5__ Table ;
struct TYPE_26__ {scalar_t__ op; int iColumn; scalar_t__ iTable; } ;
struct TYPE_25__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_24__ {int colNamesSet; scalar_t__ explain; TYPE_4__* db; int * pVdbe; } ;
struct TYPE_23__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_20__ {char* zName; int zSpan; TYPE_9__* pExpr; } ;
struct TYPE_19__ {char* zName; } ;
struct TYPE_18__ {scalar_t__ iCursor; TYPE_5__* pTab; } ;
typedef TYPE_6__ SrcList ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*,TYPE_8__*) ;
 char* FUNC_4 (TYPE_4__*,int ) ;
 char* FUNC_5 (TYPE_4__*,char*,int ,char*) ;
 int FUNC_6 (int *,int,int ,char*,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(
  Parse *VAR_7,
  SrcList *VAR_8,
  ExprList *VAR_9
){
  Vdbe *VAR_10 = VAR_7->pVdbe;
  int VAR_11, VAR_12;
  sqlite3 *VAR_13 = VAR_7->db;
  int VAR_14, VAR_15;



  if( VAR_7->explain ){
    return;
  }


  if( VAR_7->colNamesSet || FUNC_1(VAR_10==0) || VAR_13->mallocFailed ) return;
  VAR_7->colNamesSet = 1;
  VAR_14 = (VAR_13->flags & VAR_2)!=0;
  VAR_15 = (VAR_13->flags & VAR_3)!=0;
  FUNC_7(VAR_10, VAR_9->nExpr);
  for(VAR_11=0; VAR_11<VAR_9->nExpr; VAR_11++){
    Expr *VAR_16;
    VAR_16 = VAR_9->a[VAR_11].pExpr;
    if( FUNC_1(VAR_16==0) ) continue;
    if( VAR_9->a[VAR_11].zName ){
      char *VAR_17 = VAR_9->a[VAR_11].zName;
      FUNC_6(VAR_10, VAR_11, VAR_0, VAR_17, VAR_4);
    }else if( (VAR_16->op==VAR_6 || VAR_16->op==VAR_5) && VAR_8 ){
      Table *VAR_18;
      char *VAR_19;
      int VAR_20 = VAR_16->iColumn;
      for(VAR_12=0; FUNC_0(VAR_12<VAR_8->nSrc); VAR_12++){
        if( VAR_8->a[VAR_12].iCursor==VAR_16->iTable ) break;
      }
      FUNC_2( VAR_12<VAR_8->nSrc );
      VAR_18 = VAR_8->a[VAR_12].pTab;
      if( VAR_20<0 ) VAR_20 = VAR_18->iPKey;
      FUNC_2( VAR_20==-1 || (VAR_20>=0 && VAR_20<VAR_18->nCol) );
      if( VAR_20<0 ){
        VAR_19 = "rowid";
      }else{
        VAR_19 = VAR_18->aCol[VAR_20].zName;
      }
      if( !VAR_15 && !VAR_14 ){
        FUNC_6(VAR_10, VAR_11, VAR_0,
            FUNC_4(VAR_13, VAR_9->a[VAR_11].zSpan), VAR_1);
      }else if( VAR_14 ){
        char *VAR_21 = 0;
        VAR_21 = FUNC_5(VAR_13, "%s.%s", VAR_18->zName, VAR_19);
        FUNC_6(VAR_10, VAR_11, VAR_0, VAR_21, VAR_1);
      }else{
        FUNC_6(VAR_10, VAR_11, VAR_0, VAR_19, VAR_4);
      }
    }else{
      FUNC_6(VAR_10, VAR_11, VAR_0,
          FUNC_4(VAR_13, VAR_9->a[VAR_11].zSpan), VAR_1);
    }
  }
  FUNC_3(VAR_7, VAR_8, VAR_9);
}
