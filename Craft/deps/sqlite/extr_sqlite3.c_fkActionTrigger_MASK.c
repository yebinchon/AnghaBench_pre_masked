
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_69__ TYPE_9__ ;
typedef struct TYPE_68__ TYPE_8__ ;
typedef struct TYPE_67__ TYPE_7__ ;
typedef struct TYPE_66__ TYPE_6__ ;
typedef struct TYPE_65__ TYPE_5__ ;
typedef struct TYPE_64__ TYPE_4__ ;
typedef struct TYPE_63__ TYPE_3__ ;
typedef struct TYPE_62__ TYPE_2__ ;
typedef struct TYPE_61__ TYPE_1__ ;
typedef struct TYPE_60__ TYPE_15__ ;
typedef struct TYPE_59__ TYPE_14__ ;
typedef struct TYPE_58__ TYPE_13__ ;
typedef struct TYPE_57__ TYPE_12__ ;
typedef struct TYPE_56__ TYPE_11__ ;
typedef struct TYPE_55__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_62__ {int bEnabled; } ;
struct TYPE_67__ {int mallocFailed; TYPE_2__ lookaside; } ;
typedef TYPE_7__ sqlite3 ;
struct TYPE_61__ {char* z; int n; } ;
struct TYPE_68__ {TYPE_9__* pTrig; void* op; int pSelect; int pExprList; void* pWhere; TYPE_1__ target; } ;
typedef TYPE_8__ TriggerStep ;
struct TYPE_69__ {void* op; int pTabSchema; int pSchema; void* pWhen; TYPE_8__* step_list; } ;
typedef TYPE_9__ Trigger ;
struct TYPE_55__ {char* member_0; int member_1; char* z; int n; } ;
typedef TYPE_10__ Token ;
struct TYPE_56__ {int pSchema; TYPE_4__* aCol; } ;
typedef TYPE_11__ Table ;
struct TYPE_66__ {char* zName; TYPE_5__* aCol; } ;
struct TYPE_65__ {char* zName; TYPE_15__* pDflt; } ;
struct TYPE_64__ {char* zName; } ;
struct TYPE_63__ {int iFrom; } ;
struct TYPE_60__ {int affinity; } ;
struct TYPE_59__ {int* aAction; int nCol; TYPE_9__** apTrigger; TYPE_6__* pFrom; TYPE_3__* aCol; } ;
struct TYPE_58__ {size_t* aiColumn; } ;
struct TYPE_57__ {TYPE_7__* db; } ;
typedef int Select ;
typedef TYPE_12__ Parse ;
typedef TYPE_13__ Index ;
typedef TYPE_14__ FKey ;
typedef int ExprList ;
typedef TYPE_15__ Expr ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,TYPE_9__*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (TYPE_7__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int) ;
 TYPE_15__* FUNC_5 (TYPE_7__*,int ,char*) ;
 TYPE_15__* FUNC_6 (TYPE_7__*,TYPE_15__*,TYPE_15__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_15__*) ;
 void* FUNC_8 (TYPE_7__*,TYPE_15__*,int ) ;
 int * FUNC_9 (TYPE_12__*,int *,TYPE_15__*) ;
 int FUNC_10 (TYPE_7__*,int *) ;
 int FUNC_11 (TYPE_7__*,int *,int ) ;
 int FUNC_12 (TYPE_12__*,int *,TYPE_10__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_12__*,TYPE_11__*,TYPE_14__*,TYPE_13__**,int**) ;
 TYPE_15__* FUNC_14 (TYPE_12__*,int ,TYPE_15__*,TYPE_15__*,TYPE_10__*) ;
 int FUNC_15 (TYPE_7__*,int *) ;
 int FUNC_16 (TYPE_7__*,int *,int ) ;
 int * FUNC_17 (TYPE_12__*,int *,int ,TYPE_15__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_18 (TYPE_7__*,int ,TYPE_10__*,int ) ;
 void* FUNC_19 (char const*) ;

__attribute__((used)) static Trigger *FUNC_20(
  Parse *VAR_14,
  Table *VAR_15,
  FKey *VAR_16,
  ExprList *VAR_17
){
  sqlite3 *VAR_18 = VAR_14->db;
  int VAR_19;
  Trigger *VAR_20;
  int VAR_21 = (VAR_17!=0);

  VAR_19 = VAR_16->aAction[VAR_21];
  VAR_20 = VAR_16->apTrigger[VAR_21];

  if( VAR_19!=VAR_2 && !VAR_20 ){
    u8 VAR_22;
    char const *VAR_23;
    int VAR_24;
    Index *VAR_25 = 0;
    int *VAR_26 = 0;
    TriggerStep *VAR_27 = 0;
    Expr *VAR_28 = 0;
    ExprList *VAR_29 = 0;
    Select *VAR_30 = 0;
    int VAR_31;
    Expr *VAR_32 = 0;

    if( FUNC_13(VAR_14, VAR_15, VAR_16, &VAR_25, &VAR_26) ) return 0;
    FUNC_0( VAR_26 || VAR_16->nCol==1 );

    for(VAR_31=0; VAR_31<VAR_16->nCol; VAR_31++){
      Token VAR_33 = { "old", 3 };
      Token VAR_34 = { "new", 3 };
      Token VAR_35;
      Token VAR_36;
      int VAR_37;
      Expr *VAR_38;

      VAR_37 = VAR_26 ? VAR_26[VAR_31] : VAR_16->aCol[0].iFrom;
      FUNC_0( VAR_37>=0 );
      VAR_36.z = VAR_25 ? VAR_15->aCol[VAR_25->aiColumn[VAR_31]].zName : "oid";
      VAR_35.z = VAR_16->pFrom->aCol[VAR_37].zName;

      VAR_36.n = FUNC_19(VAR_36.z);
      VAR_35.n = FUNC_19(VAR_35.z);





      VAR_38 = FUNC_14(VAR_14, VAR_6,
          FUNC_14(VAR_14, VAR_5,
            FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_33),
            FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_36)
          , 0),
          FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_35)
      , 0);
      VAR_28 = FUNC_6(VAR_18, VAR_28, VAR_38);






      if( VAR_17 ){
        VAR_38 = FUNC_14(VAR_14, VAR_8,
            FUNC_14(VAR_14, VAR_5,
              FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_33),
              FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_36),
              0),
            FUNC_14(VAR_14, VAR_5,
              FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_34),
              FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_36),
              0),
            0);
        VAR_32 = FUNC_6(VAR_18, VAR_32, VAR_38);
      }

      if( VAR_19!=128 && (VAR_19!=129 || VAR_17) ){
        Expr *VAR_39;
        if( VAR_19==129 ){
          VAR_39 = FUNC_14(VAR_14, VAR_5,
            FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_34),
            FUNC_14(VAR_14, VAR_7, 0, 0, &VAR_36)
          , 0);
        }else if( VAR_19==VAR_3 ){
          Expr *VAR_40 = VAR_16->pFrom->aCol[VAR_37].pDflt;
          if( VAR_40 ){
            VAR_39 = FUNC_8(VAR_18, VAR_40, 0);
          }else{
            VAR_39 = FUNC_14(VAR_14, VAR_10, 0, 0, 0);
          }
        }else{
          VAR_39 = FUNC_14(VAR_14, VAR_10, 0, 0, 0);
        }
        VAR_29 = FUNC_9(VAR_14, VAR_29, VAR_39);
        FUNC_12(VAR_14, VAR_29, &VAR_35, 0);
      }
    }
    FUNC_3(VAR_18, VAR_26);

    VAR_23 = VAR_16->pFrom->zName;
    VAR_24 = FUNC_19(VAR_23);

    if( VAR_19==128 ){
      Token VAR_41;
      Expr *VAR_42;

      VAR_41.z = VAR_23;
      VAR_41.n = VAR_24;
      VAR_42 = FUNC_5(VAR_18, VAR_11, "foreign key constraint failed");
      if( VAR_42 ){
        VAR_42->affinity = VAR_1;
      }
      VAR_30 = FUNC_17(VAR_14,
          FUNC_9(VAR_14, 0, VAR_42),
          FUNC_18(VAR_18, 0, &VAR_41, 0),
          VAR_28,
          0, 0, 0, 0, 0, 0
      );
      VAR_28 = 0;
    }


    VAR_22 = VAR_18->lookaside.bEnabled;
    VAR_18->lookaside.bEnabled = 0;

    VAR_20 = (Trigger *)FUNC_4(VAR_18,
        sizeof(Trigger) +
        sizeof(TriggerStep) +
        VAR_24 + 1
    );
    if( VAR_20 ){
      VAR_27 = VAR_20->step_list = (TriggerStep *)&VAR_20[1];
      VAR_27->target.z = (char *)&VAR_27[1];
      VAR_27->target.n = VAR_24;
      FUNC_2((char *)VAR_27->target.z, VAR_23, VAR_24);

      VAR_27->pWhere = FUNC_8(VAR_18, VAR_28, VAR_0);
      VAR_27->pExprList = FUNC_11(VAR_18, VAR_29, VAR_0);
      VAR_27->pSelect = FUNC_16(VAR_18, VAR_30, VAR_0);
      if( VAR_32 ){
        VAR_32 = FUNC_14(VAR_14, VAR_9, VAR_32, 0, 0);
        VAR_20->pWhen = FUNC_8(VAR_18, VAR_32, VAR_0);
      }
    }


    VAR_18->lookaside.bEnabled = VAR_22;

    FUNC_7(VAR_18, VAR_28);
    FUNC_7(VAR_18, VAR_32);
    FUNC_10(VAR_18, VAR_29);
    FUNC_15(VAR_18, VAR_30);
    if( VAR_18->mallocFailed==1 ){
      FUNC_1(VAR_18, VAR_20);
      return 0;
    }
    FUNC_0( VAR_27!=0 );

    switch( VAR_19 ){
      case 128:
        VAR_27->op = VAR_12;
        break;
      case 129:
        if( !VAR_17 ){
          VAR_27->op = VAR_4;
          break;
        }
      default:
        VAR_27->op = VAR_13;
    }
    VAR_27->pTrig = VAR_20;
    VAR_20->pSchema = VAR_15->pSchema;
    VAR_20->pTabSchema = VAR_15->pSchema;
    VAR_16->apTrigger[VAR_21] = VAR_20;
    VAR_20->op = (VAR_17 ? VAR_13 : VAR_4);
  }

  return VAR_20;
}
