
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_29__ {int * pRight; int * pLeft; } ;
typedef TYPE_5__ tSQLExpr ;
typedef scalar_t__ int32_t ;
struct TYPE_33__ {TYPE_3__* pJoinExpr; int member_0; } ;
struct TYPE_32__ {TYPE_4__* pMeterMeta; } ;
struct TYPE_31__ {int type; int etime; scalar_t__ stime; } ;
struct TYPE_30__ {TYPE_7__ cmd; } ;
struct TYPE_28__ {scalar_t__ numOfColumns; } ;
struct TYPE_27__ {TYPE_2__* pRight; TYPE_1__* pLeft; } ;
struct TYPE_26__ {int colInfo; } ;
struct TYPE_25__ {int colInfo; } ;
struct TYPE_24__ {scalar_t__ columnIndex; int tableIndex; int member_0; } ;
typedef TYPE_6__ SSqlObj ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SMeterMetaInfo ;
typedef TYPE_9__ SCondExpr ;
typedef TYPE_10__ SColumnIndex ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_7__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_5__**,TYPE_9__*) ;
 int FUNC_5 (int *,TYPE_7__*,TYPE_10__*) ;
 int FUNC_6 (TYPE_7__*,char const*) ;
 TYPE_8__* FUNC_7 (TYPE_7__*,int ) ;

int32_t FUNC_8(SSqlObj* VAR_3, tSQLExpr** VAR_4) {
  SSqlCmd* VAR_5 = &VAR_3->cmd;

  if (VAR_4 == ((void*)0)) {
    return VAR_2;
  }

  VAR_5->stime = 0;
  VAR_5->etime = VAR_0;

  int32_t VAR_6 = VAR_2;

  const char* VAR_7 = "invalid expression";
  SCondExpr VAR_8 = {0};

  if ((*VAR_4)->pLeft == ((void*)0) || (*VAR_4)->pRight == ((void*)0)) {
    FUNC_6(VAR_5, VAR_7);
    return VAR_1;
  }

  VAR_6 = FUNC_4(VAR_3, VAR_4, &VAR_8);
  if (VAR_6 != VAR_2) {
    return VAR_6;
  }

  SMeterMetaInfo* VAR_9 = FUNC_7(VAR_5, 0);
  if (FUNC_0(VAR_5->type) && FUNC_1(VAR_9)) {
    SColumnIndex VAR_10 = {0};

    FUNC_5(&VAR_8.pJoinExpr->pLeft->colInfo, VAR_5, &VAR_10);
    VAR_9 = FUNC_7(VAR_5, VAR_10.tableIndex);

    int32_t VAR_11 = VAR_10.columnIndex - VAR_9->pMeterMeta->numOfColumns;
    FUNC_2(VAR_5, VAR_11, VAR_10.tableIndex);

    FUNC_5(&VAR_8.pJoinExpr->pRight->colInfo, VAR_5, &VAR_10);
    VAR_9 = FUNC_7(VAR_5, VAR_10.tableIndex);

    VAR_11 = VAR_10.columnIndex - VAR_9->pMeterMeta->numOfColumns;
    FUNC_2(VAR_5, VAR_11, VAR_10.tableIndex);
  }

  FUNC_3(&VAR_8);
  return VAR_6;
}
