
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


struct TYPE_35__ {TYPE_22__* pFuncArg; } ;
struct TYPE_39__ {int isCorrelated; scalar_t__ isTabFunc; } ;
struct SrcList_item {char* zName; TYPE_8__* pSelect; TYPE_1__ u1; TYPE_4__ fg; } ;
struct ExprList_item {int pExpr; } ;
struct TYPE_41__ {scalar_t__ mallocFailed; } ;
typedef TYPE_6__ sqlite3 ;
typedef int sNC ;
struct TYPE_38__ {TYPE_10__* pNC; } ;
struct TYPE_42__ {TYPE_9__* pParse; TYPE_3__ u; } ;
typedef TYPE_7__ Walker ;
struct TYPE_44__ {char* zAuthContext; scalar_t__ nErr; TYPE_6__* db; } ;
struct TYPE_43__ {int selFlags; scalar_t__ pOrderBy; struct TYPE_43__* pPrior; TYPE_13__* pNext; TYPE_22__* pEList; TYPE_5__* pSrc; int pWhere; int pHaving; TYPE_11__* pGroupBy; int pLimit; } ;
struct TYPE_40__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_37__ {scalar_t__ nExpr; } ;
struct TYPE_36__ {scalar_t__ nExpr; } ;
struct TYPE_34__ {TYPE_2__* pEList; } ;
struct TYPE_33__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_32__ {int ncFlags; struct TYPE_32__* pNext; TYPE_22__* pEList; TYPE_5__* pSrcList; scalar_t__ nRef; TYPE_9__* pParse; } ;
typedef TYPE_8__ Select ;
typedef TYPE_9__ Parse ;
typedef TYPE_10__ NameContext ;
typedef TYPE_11__ ExprList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_10__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*,TYPE_8__*,TYPE_11__*,char*) ;
 int FUNC_5 (TYPE_9__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_10__*,TYPE_22__*) ;
 scalar_t__ FUNC_7 (TYPE_10__*,int ) ;
 int FUNC_8 (TYPE_9__*,TYPE_8__*,TYPE_10__*) ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*,TYPE_10__*) ;
 int FUNC_10 (TYPE_9__*,TYPE_13__*) ;

__attribute__((used)) static int FUNC_11(Walker *VAR_11, Select *VAR_12){
  NameContext *VAR_13;
  NameContext VAR_14;
  int VAR_15;
  int VAR_16;
  Parse *VAR_17;
  int VAR_18;
  ExprList *VAR_19;
  Select *VAR_20;
  sqlite3 *VAR_21;


  FUNC_1( VAR_12!=0 );
  if( VAR_12->selFlags & VAR_8 ){
    return VAR_10;
  }
  VAR_13 = VAR_11->u.pNC;
  VAR_17 = VAR_11->pParse;
  VAR_21 = VAR_17->db;
  if( (VAR_12->selFlags & VAR_6)==0 ){
    FUNC_9(VAR_17, VAR_12, VAR_13);
    return (VAR_17->nErr || VAR_21->mallocFailed) ? VAR_9 : VAR_10;
  }

  VAR_15 = VAR_12->pPrior!=0;
  VAR_16 = 0;
  VAR_20 = VAR_12;
  while( VAR_12 ){
    FUNC_1( (VAR_12->selFlags & VAR_6)!=0 );
    FUNC_1( (VAR_12->selFlags & VAR_8)==0 );
    VAR_12->selFlags |= VAR_8;




    FUNC_2(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.pParse = VAR_17;
    if( FUNC_7(&VAR_14, VAR_12->pLimit) ){
      return VAR_9;
    }







    if( VAR_12->selFlags & VAR_5 ){
      Select *VAR_22 = VAR_12->pSrc->a[0].pSelect;
      FUNC_1( VAR_12->pSrc->nSrc==1 && VAR_12->pOrderBy );
      FUNC_1( VAR_22->pPrior && VAR_22->pOrderBy==0 );
      VAR_22->pOrderBy = VAR_12->pOrderBy;
      VAR_12->pOrderBy = 0;
    }



    for(VAR_18=0; VAR_18<VAR_12->pSrc->nSrc; VAR_18++){
      struct SrcList_item *VAR_23 = &VAR_12->pSrc->a[VAR_18];
      if( VAR_23->pSelect ){
        NameContext *VAR_24;
        int VAR_25 = 0;
        const char *VAR_26 = VAR_17->zAuthContext;






        for(VAR_24=VAR_13; VAR_24; VAR_24=VAR_24->pNext) VAR_25 += VAR_24->nRef;

        if( VAR_23->zName ) VAR_17->zAuthContext = VAR_23->zName;
        FUNC_8(VAR_17, VAR_23->pSelect, VAR_13);
        VAR_17->zAuthContext = VAR_26;
        if( VAR_17->nErr || VAR_21->mallocFailed ) return VAR_9;

        for(VAR_24=VAR_13; VAR_24; VAR_24=VAR_24->pNext) VAR_25 -= VAR_24->nRef;
        FUNC_1( VAR_23->fg.isCorrelated==0 && VAR_25<=0 );
        VAR_23->fg.isCorrelated = (VAR_25!=0);
      }
    }




    VAR_14.ncFlags = VAR_1;
    VAR_14.pSrcList = VAR_12->pSrc;
    VAR_14.pNext = VAR_13;


    if( FUNC_6(&VAR_14, VAR_12->pEList) ) return VAR_9;




    FUNC_1( (VAR_12->selFlags & VAR_4)==0 );
    VAR_19 = VAR_12->pGroupBy;
    if( VAR_19 || (VAR_14.ncFlags & VAR_2)!=0 ){
      FUNC_1( VAR_3==VAR_7 );
      VAR_12->selFlags |= VAR_4 | (VAR_14.ncFlags&VAR_3);
    }else{
      VAR_14.ncFlags &= ~VAR_1;
    }



    if( VAR_12->pHaving && !VAR_19 ){
      FUNC_5(VAR_17, "a GROUP BY clause is required before HAVING");
      return VAR_9;
    }
    VAR_14.pEList = VAR_12->pEList;
    if( FUNC_7(&VAR_14, VAR_12->pHaving) ) return VAR_9;
    if( FUNC_7(&VAR_14, VAR_12->pWhere) ) return VAR_9;


    for(VAR_18=0; VAR_18<VAR_12->pSrc->nSrc; VAR_18++){
      struct SrcList_item *VAR_27 = &VAR_12->pSrc->a[VAR_18];
      if( VAR_27->fg.isTabFunc
       && FUNC_6(&VAR_14, VAR_27->u1.pFuncArg)
      ){
        return VAR_9;
      }
    }




    VAR_14.pNext = 0;
    VAR_14.ncFlags |= VAR_1;






    if( VAR_12->selFlags & VAR_5 ){
      Select *VAR_28 = VAR_12->pSrc->a[0].pSelect;
      VAR_12->pOrderBy = VAR_28->pOrderBy;
      VAR_28->pOrderBy = 0;
    }
    if( VAR_15<=VAR_16
     && FUNC_4(&VAR_14, VAR_12, VAR_12->pOrderBy, "ORDER")
    ){
      return VAR_9;
    }
    if( VAR_21->mallocFailed ){
      return VAR_9;
    }




    if( VAR_19 ){
      struct ExprList_item *VAR_29;

      if( FUNC_4(&VAR_14, VAR_12, VAR_19, "GROUP") || VAR_21->mallocFailed ){
        return VAR_9;
      }
      for(VAR_18=0, VAR_29=VAR_19->a; VAR_18<VAR_19->nExpr; VAR_18++, VAR_29++){
        if( FUNC_0(VAR_29->pExpr, VAR_0) ){
          FUNC_5(VAR_17, "aggregate functions are not allowed in "
              "the GROUP BY clause");
          return VAR_9;
        }
      }
    }



    if( VAR_12->pNext && VAR_12->pEList->nExpr!=VAR_12->pNext->pEList->nExpr ){
      FUNC_10(VAR_17, VAR_12->pNext);
      return VAR_9;
    }



    VAR_12 = VAR_12->pPrior;
    VAR_16++;
  }




  if( VAR_15 && FUNC_3(VAR_17, VAR_20) ){
    return VAR_9;
  }

  return VAR_10;
}
