
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef char u8 ;
typedef int sqlite3_value ;
struct TYPE_25__ {int flags; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_24__ {char* zToken; } ;
struct TYPE_22__ {TYPE_6__* pList; } ;
struct TYPE_28__ {int op; int iColumn; TYPE_3__ u; int pTab; TYPE_1__ x; } ;
struct TYPE_27__ {TYPE_2__* a; } ;
struct TYPE_26__ {int * pVdbe; int * pReprepare; TYPE_4__* db; } ;
struct TYPE_23__ {TYPE_7__* pExpr; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ ExprList ;
typedef TYPE_7__ Expr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 TYPE_7__* FUNC_2 (TYPE_4__*,int,char*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*,int) ;
 TYPE_7__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_7__*,int*,char*) ;
 scalar_t__ FUNC_8 (char const) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int * FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int) ;
 char* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(
  Parse *VAR_8,
  Expr *VAR_9,
  Expr **VAR_10,
  int *VAR_11,
  int *VAR_12
){
  const u8 *VAR_13 = 0;
  Expr *VAR_14, *VAR_15;
  ExprList *VAR_16;
  int VAR_17;
  int VAR_18;
  char VAR_19[4];
  sqlite3 *VAR_20 = VAR_8->db;
  sqlite3_value *VAR_21 = 0;
  int VAR_22;
  int VAR_23;

  if( !FUNC_7(VAR_20, VAR_9, VAR_12, VAR_19) ){
    return 0;
  }



  VAR_16 = VAR_9->x.pList;
  VAR_15 = VAR_16->a[1].pExpr;

  VAR_14 = FUNC_5(VAR_16->a[0].pExpr);
  VAR_22 = VAR_14->op;
  if( VAR_22==VAR_7 && (VAR_20->flags & VAR_2)==0 ){
    Vdbe *VAR_24 = VAR_8->pReprepare;
    int VAR_25 = VAR_14->iColumn;
    VAR_21 = FUNC_13(VAR_24, VAR_25, VAR_0);
    if( VAR_21 && FUNC_16(VAR_21)==VAR_3 ){
      VAR_13 = FUNC_15(VAR_21);
    }
    FUNC_14(VAR_8->pVdbe, VAR_25);
    FUNC_1( VAR_14->op==VAR_7 || VAR_14->op==VAR_5 );
  }else if( VAR_22==VAR_6 ){
    VAR_13 = (u8*)VAR_14->u.zToken;
  }
  if( VAR_13 ){
    if( FUNC_8(VAR_13[0]) || VAR_13[0]=='-' ){
      if( VAR_15->op!=VAR_4
       || FUNC_3(VAR_15)!=VAR_1
       || FUNC_0(VAR_15->pTab)
      ){
        FUNC_10(VAR_21);
        return 0;
      }
    }


    VAR_18 = 0;
    while( (VAR_17=VAR_13[VAR_18])!=0 && VAR_17!=VAR_19[0] && VAR_17!=VAR_19[1] && VAR_17!=VAR_19[2] ){
      VAR_18++;
      if( VAR_17==VAR_19[3] && VAR_13[VAR_18]!=0 ) VAR_18++;
    }







    if( VAR_18!=0 && 255!=(u8)VAR_13[VAR_18-1] ){
      Expr *VAR_26;


      *VAR_11 = VAR_17==VAR_19[0] && VAR_13[VAR_18+1]==0;


      VAR_26 = FUNC_2(VAR_20, VAR_6, (char*)VAR_13);
      if( VAR_26 ){
        int VAR_27, VAR_28;
        char *VAR_29 = VAR_26->u.zToken;
        VAR_29[VAR_18] = 0;
        for(VAR_27=VAR_28=0; VAR_27<VAR_18; VAR_27++){
          if( VAR_29[VAR_27]==VAR_19[3] ) VAR_27++;
          VAR_29[VAR_28++] = VAR_29[VAR_27];
        }
        VAR_29[VAR_28] = 0;
      }
      *VAR_10 = VAR_26;



      if( VAR_22==VAR_7 ){
        Vdbe *VAR_30 = VAR_8->pVdbe;
        FUNC_14(VAR_30, VAR_14->iColumn);
        if( *VAR_11 && VAR_14->u.zToken[1] ){






          int VAR_31 = FUNC_6(VAR_8);
          FUNC_4(VAR_8, VAR_14, VAR_31);
          FUNC_11(VAR_30, FUNC_12(VAR_30)-1, 0);
          FUNC_9(VAR_8, VAR_31);
        }
      }
    }else{
      VAR_13 = 0;
    }
  }

  VAR_23 = (VAR_13!=0);
  FUNC_10(VAR_21);
  return VAR_23;
}
