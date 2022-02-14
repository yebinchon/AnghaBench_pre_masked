
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
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int u8 ;
struct SrcList_item {scalar_t__ iCursor; int pTab; } ;
struct TYPE_38__ {TYPE_10__* pNC; } ;
struct TYPE_43__ {TYPE_9__* pParse; TYPE_2__ u; } ;
typedef TYPE_7__ Walker ;
struct TYPE_45__ {scalar_t__ nTab; TYPE_20__* db; scalar_t__ nErr; } ;
struct TYPE_44__ {scalar_t__ nAlloc; int nSrc; struct SrcList_item* a; } ;
struct TYPE_42__ {char const* zToken; } ;
struct TYPE_41__ {int pSelect; TYPE_12__* pList; } ;
struct TYPE_39__ {char* zToken; } ;
struct TYPE_40__ {TYPE_3__ u; } ;
struct TYPE_36__ {int busy; } ;
struct TYPE_37__ {scalar_t__ mallocFailed; TYPE_1__ init; } ;
struct TYPE_35__ {int op; scalar_t__ iTable; int iColumn; TYPE_5__ x; int op2; TYPE_6__ u; struct TYPE_35__* pRight; TYPE_4__* pLeft; int affinity; int pTab; } ;
struct TYPE_34__ {int nExpr; } ;
struct TYPE_33__ {int zName; int xFunc; } ;
struct TYPE_32__ {int ncFlags; int nRef; struct TYPE_32__* pNext; TYPE_8__* pSrcList; int nErr; TYPE_9__* pParse; } ;
typedef TYPE_8__ SrcList ;
typedef TYPE_9__ Parse ;
typedef TYPE_10__ NameContext ;
typedef TYPE_11__ FuncDef ;
typedef TYPE_12__ ExprList ;
typedef TYPE_13__ Expr ;


 int FUNC_0 (TYPE_20__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_13__*,int ) ;
 int FUNC_2 (TYPE_13__*,int ) ;
 int FUNC_3 (TYPE_13__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;
 int VAR_11 ;






 int const VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_9__*,char const*,char const*,char const*,TYPE_10__*,TYPE_13__*) ;
 int FUNC_6 (TYPE_9__*,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_9__*,char*,...) ;
 TYPE_11__* FUNC_8 (TYPE_20__*,char const*,int,int,int ,int ) ;
 int FUNC_9 (TYPE_13__*,TYPE_8__*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (TYPE_7__*,TYPE_12__*) ;
 int FUNC_12 (TYPE_7__*,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(Walker *VAR_16, Expr *VAR_17){
  NameContext *VAR_18;
  Parse *VAR_19;

  VAR_18 = VAR_16->u.pNC;
  FUNC_4( VAR_18!=0 );
  VAR_19 = VAR_18->pParse;
  FUNC_4( VAR_19==VAR_16->pParse );

  if( FUNC_1(VAR_17, VAR_0) ) return VAR_15;
  FUNC_3(VAR_17, VAR_0);

  if( VAR_18->pSrcList && VAR_18->pSrcList->nAlloc>0 ){
    SrcList *VAR_20 = VAR_18->pSrcList;
    int VAR_21;
    for(VAR_21=0; VAR_21<VAR_18->pSrcList->nSrc; VAR_21++){
      FUNC_4( VAR_20->a[VAR_21].iCursor>=0 && VAR_20->a[VAR_21].iCursor<VAR_19->nTab);
    }
  }

  switch( VAR_17->op ){
    case 132: {
      return FUNC_5(VAR_19, 0, 0, VAR_17->u.zToken, VAR_18, VAR_17);
    }




    case 135: {
      const char *VAR_22;
      const char *VAR_23;
      const char *VAR_24;
      Expr *VAR_25;


      VAR_25 = VAR_17->pRight;
      if( VAR_25->op==132 ){
        VAR_24 = 0;
        VAR_23 = VAR_17->pLeft->u.zToken;
        VAR_22 = VAR_25->u.zToken;
      }else{
        FUNC_4( VAR_25->op==135 );
        VAR_24 = VAR_17->pLeft->u.zToken;
        VAR_23 = VAR_25->pLeft->u.zToken;
        VAR_22 = VAR_25->pRight->u.zToken;
      }
      return FUNC_5(VAR_19, VAR_24, VAR_23, VAR_22, VAR_18, VAR_17);
    }



    case 136:
    case 133: {
      ExprList *VAR_26 = VAR_17->x.pList;
      int VAR_27 = VAR_26 ? VAR_26->nExpr : 0;
      int VAR_28 = 0;
      int VAR_29 = 0;
      int VAR_30 = 0;
      int VAR_31;
      int VAR_32;
      const char *VAR_33;
      FuncDef *VAR_34;
      u8 VAR_35 = FUNC_0(VAR_19->db);

      FUNC_13( VAR_17->op==136 );
      FUNC_4( !FUNC_2(VAR_17, VAR_2) );
      VAR_33 = VAR_17->u.zToken;
      VAR_32 = FUNC_10(VAR_33);
      VAR_34 = FUNC_8(VAR_19->db, VAR_33, VAR_32, VAR_27, VAR_35, 0);
      if( VAR_34==0 ){
        VAR_34 = FUNC_8(VAR_19->db, VAR_33, VAR_32, -2, VAR_35, 0);
        if( VAR_34==0 ){
          VAR_28 = 1;
        }else{
          VAR_29 = 1;
        }
      }else{
        VAR_30 = VAR_34->xFunc==0;
      }

      if( VAR_34 ){
        VAR_31 = FUNC_6(VAR_19, VAR_8, 0, VAR_34->zName, 0);
        if( VAR_31!=VAR_9 ){
          if( VAR_31==VAR_7 ){
            FUNC_7(VAR_19, "not authorized to use function: %s",
                                    VAR_34->zName);
            VAR_18->nErr++;
          }
          VAR_17->op = VAR_12;
          return VAR_15;
        }
      }

      if( VAR_30 && (VAR_18->ncFlags & VAR_3)==0 ){
        FUNC_7(VAR_19, "misuse of aggregate function %.*s()", VAR_32,VAR_33);
        VAR_18->nErr++;
        VAR_30 = 0;
      }else if( VAR_28 && VAR_19->db->init.busy==0 ){
        FUNC_7(VAR_19, "no such function: %.*s", VAR_32, VAR_33);
        VAR_18->nErr++;
      }else if( VAR_29 ){
        FUNC_7(VAR_19,"wrong number of arguments to function %.*s()",
             VAR_32, VAR_33);
        VAR_18->nErr++;
      }
      if( VAR_30 ) VAR_18->ncFlags &= ~VAR_3;
      FUNC_11(VAR_16, VAR_26);
      if( VAR_30 ){
        NameContext *VAR_36 = VAR_18;
        VAR_17->op = VAR_10;
        VAR_17->op2 = 0;
        while( VAR_36 && !FUNC_9(VAR_17, VAR_36->pSrcList) ){
          VAR_17->op2++;
          VAR_36 = VAR_36->pNext;
        }
        if( VAR_36 ) VAR_36->ncFlags |= VAR_4;
        VAR_18->ncFlags |= VAR_3;
      }



      return VAR_15;
    }

    case 129:
    case 134: FUNC_13( VAR_17->op==134 );

    case 131: {
      FUNC_13( VAR_17->op==131 );
      if( FUNC_2(VAR_17, VAR_2) ){
        int VAR_37 = VAR_18->nRef;

        if( (VAR_18->ncFlags & VAR_5)!=0 ){
          FUNC_7(VAR_19,"subqueries prohibited in CHECK constraints");
        }

        FUNC_12(VAR_16, VAR_17->x.pSelect);
        FUNC_4( VAR_18->nRef>=VAR_37 );
        if( VAR_37!=VAR_18->nRef ){
          FUNC_3(VAR_17, VAR_1);
        }
      }
      break;
    }

    case 128: {
      if( (VAR_18->ncFlags & VAR_5)!=0 ){
        FUNC_7(VAR_19,"parameters prohibited in CHECK constraints");
      }
      break;
    }

  }
  return (VAR_19->nErr || VAR_19->db->mallocFailed) ? VAR_13 : VAR_14;
}
