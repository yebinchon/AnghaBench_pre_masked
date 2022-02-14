
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_28__ {int pSchema; int iPKey; int nCol; char* zName; TYPE_2__* aCol; } ;
typedef TYPE_8__ Table ;
struct TYPE_29__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_27__ {TYPE_13__* db; } ;
struct TYPE_26__ {int nExpr; TYPE_5__* a; } ;
struct TYPE_25__ {TYPE_12__* pExpr; } ;
struct TYPE_24__ {TYPE_10__* pSelect; } ;
struct TYPE_23__ {char* zName; } ;
struct TYPE_22__ {char* zType; char* zName; } ;
struct TYPE_21__ {TYPE_10__* pSelect; TYPE_8__* pTab; int iCursor; } ;
struct TYPE_20__ {TYPE_3__* aDb; } ;
struct TYPE_19__ {int op; int iColumn; TYPE_4__ x; TYPE_8__* pTab; int iTable; } ;
struct TYPE_18__ {scalar_t__ pSrcList; TYPE_7__* pParse; struct TYPE_18__* pNext; } ;
struct TYPE_17__ {TYPE_9__* pSrc; TYPE_6__* pEList; } ;
typedef TYPE_9__ SrcList ;
typedef TYPE_10__ Select ;
typedef TYPE_11__ NameContext ;
typedef TYPE_12__ Expr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_12__*,int ) ;
 scalar_t__ FUNC_2 (int) ;



 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_13__*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static const char *FUNC_6(
  NameContext *VAR_1,
  Expr *VAR_2,
  const char **VAR_3,
  const char **VAR_4,
  const char **VAR_5
){
  char const *VAR_6 = 0;
  char const *VAR_7 = 0;
  char const *VAR_8 = 0;
  char const *VAR_9 = 0;
  int VAR_10;
  if( FUNC_2(VAR_2==0) || VAR_1->pSrcList==0 ) return 0;

  switch( VAR_2->op ){
    case 130:
    case 129: {




      Table *VAR_11 = 0;
      Select *VAR_12 = 0;
      int VAR_13 = VAR_2->iColumn;
      FUNC_5( VAR_2->op==130 );
      FUNC_5( VAR_2->op==129 );
      while( VAR_1 && !VAR_11 ){
        SrcList *VAR_14 = VAR_1->pSrcList;
        for(VAR_10=0;VAR_10<VAR_14->nSrc && VAR_14->a[VAR_10].iCursor!=VAR_2->iTable;VAR_10++);
        if( VAR_10<VAR_14->nSrc ){
          VAR_11 = VAR_14->a[VAR_10].pTab;
          VAR_12 = VAR_14->a[VAR_10].pSelect;
        }else{
          VAR_1 = VAR_1->pNext;
        }
      }

      if( VAR_11==0 ){
        break;
      }

      FUNC_3( VAR_11 && VAR_2->pTab==VAR_11 );
      if( VAR_12 ){




        if( VAR_13>=0 && FUNC_0(VAR_13<VAR_12->pEList->nExpr) ){




          NameContext VAR_15;
          Expr *VAR_16 = VAR_12->pEList->a[VAR_13].pExpr;
          VAR_15.pSrcList = VAR_12->pSrc;
          VAR_15.pNext = VAR_1;
          VAR_15.pParse = VAR_1->pParse;
          VAR_6 = FUNC_6(&VAR_15, VAR_16, &VAR_7, &VAR_8, &VAR_9);
        }
      }else if( FUNC_0(VAR_11->pSchema) ){

        FUNC_3( !VAR_12 );
        if( VAR_13<0 ) VAR_13 = VAR_11->iPKey;
        FUNC_3( VAR_13==-1 || (VAR_13>=0 && VAR_13<VAR_11->nCol) );
        if( VAR_13<0 ){
          VAR_6 = "INTEGER";
          VAR_9 = "rowid";
        }else{
          VAR_6 = VAR_11->aCol[VAR_13].zType;
          VAR_9 = VAR_11->aCol[VAR_13].zName;
        }
        VAR_8 = VAR_11->zName;
        if( VAR_1->pParse ){
          int VAR_17 = FUNC_4(VAR_1->pParse->db, VAR_11->pSchema);
          VAR_7 = VAR_1->pParse->db->aDb[VAR_17].zName;
        }
      }
      break;
    }

    case 128: {




      NameContext VAR_18;
      Select *VAR_19 = VAR_2->x.pSelect;
      Expr *VAR_20 = VAR_19->pEList->a[0].pExpr;
      FUNC_3( FUNC_1(VAR_2, VAR_0) );
      VAR_18.pSrcList = VAR_19->pSrc;
      VAR_18.pNext = VAR_1;
      VAR_18.pParse = VAR_1->pParse;
      VAR_6 = FUNC_6(&VAR_18, VAR_20, &VAR_7, &VAR_8, &VAR_9);
      break;
    }

  }

  if( VAR_3 ){
    FUNC_3( VAR_4 && VAR_5 );
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_8;
    *VAR_5 = VAR_9;
  }
  return VAR_6;
}
