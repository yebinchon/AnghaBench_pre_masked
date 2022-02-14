
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_22__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef void* int32_t ;
typedef size_t int16_t ;
struct TYPE_40__ {size_t type; size_t bytes; char* name; } ;
struct TYPE_36__ {scalar_t__ numOfGroupCols; TYPE_4__* columnInfo; } ;
struct TYPE_33__ {int numOfOutputCols; } ;
struct TYPE_31__ {void* numOfExprs; } ;
struct TYPE_39__ {TYPE_5__ groupbyExpr; TYPE_2__ fieldsInfo; TYPE_1__ exprsInfo; } ;
struct TYPE_34__ {void* colIdx; int flag; } ;
struct TYPE_38__ {scalar_t__ functionId; TYPE_3__ colInfo; } ;
struct TYPE_37__ {TYPE_8__ cmd; } ;
struct TYPE_35__ {void* colIdx; } ;
struct TYPE_32__ {int uid; } ;
struct TYPE_30__ {size_t columnIndex; int tableIndex; } ;
struct TYPE_29__ {int member_0; } ;
struct TYPE_28__ {TYPE_22__* pMeterMeta; } ;
typedef TYPE_6__ SSqlObj ;
typedef TYPE_7__ SSqlExpr ;
typedef TYPE_8__ SSqlCmd ;
typedef TYPE_9__ SSchema ;
typedef TYPE_10__ SMeterMetaInfo ;
typedef TYPE_11__ SColumnList ;
typedef TYPE_12__ SColumnIndex ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*,void*,int ) ;
 int FUNC_1 (TYPE_8__*,int ,TYPE_11__*,size_t,size_t,char*) ;
 TYPE_9__* FUNC_2 (TYPE_22__*) ;
 size_t FUNC_3 (TYPE_8__*,int ) ;
 TYPE_10__* FUNC_4 (TYPE_8__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_8__*,void*) ;
 TYPE_7__* FUNC_6 (TYPE_8__*,int ,scalar_t__,TYPE_12__*,size_t,size_t,size_t) ;

void FUNC_7(SSqlObj* VAR_2, SSqlObj* VAR_3, int32_t VAR_4) {
  if (VAR_2->cmd.groupbyExpr.numOfGroupCols > 0) {
    int32_t VAR_5 = VAR_3->cmd.exprsInfo.numOfExprs;
    SSqlExpr* VAR_6 = FUNC_5(&VAR_3->cmd, VAR_5 - 1);
    SSqlCmd* VAR_7 = &VAR_3->cmd;

    if (VAR_6->functionId != VAR_1) {
      SMeterMetaInfo* VAR_8 = FUNC_4(&VAR_3->cmd, 0);
      int16_t VAR_9 = FUNC_3(VAR_7, VAR_8->pMeterMeta->uid);
      SColumnIndex VAR_10 = {.tableIndex = 0, .columnIndex = VAR_9};
      SSchema* VAR_11 = FUNC_2(VAR_8->pMeterMeta);

      int16_t VAR_12 = VAR_11[VAR_10.columnIndex].type;
      int16_t VAR_13 = VAR_11[VAR_10.columnIndex].bytes;
      char* VAR_14 = VAR_11[VAR_10.columnIndex].name;

      VAR_6 = FUNC_6(VAR_7, VAR_7->fieldsInfo.numOfOutputCols, VAR_1, &VAR_10, VAR_12, VAR_13, VAR_13);
      VAR_6->colInfo.flag = VAR_0;


      SColumnList VAR_15 = {0};
      FUNC_1(VAR_7, VAR_7->fieldsInfo.numOfOutputCols, &VAR_15, VAR_13, VAR_12, VAR_14);

      int32_t VAR_16 = VAR_10.columnIndex;

      VAR_6->colInfo.colIdx = VAR_16;
      VAR_7->groupbyExpr.columnInfo[0].colIdx = VAR_16;

      FUNC_0(VAR_7, VAR_7->groupbyExpr.columnInfo[0].colIdx, 0);
    }
  }
}
