
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef size_t int32_t ;
struct TYPE_31__ {int num; TYPE_10__* ids; int member_0; } ;
struct TYPE_30__ {int pMeterMeta; } ;
struct TYPE_29__ {int name; int type; int bytes; } ;
struct TYPE_22__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_24__ {TYPE_1__* columnInfo; } ;
struct TYPE_28__ {TYPE_16__ fieldsInfo; TYPE_2__ groupbyExpr; } ;
struct TYPE_25__ {int flag; } ;
struct TYPE_27__ {int numOfParams; TYPE_4__* param; TYPE_3__ colInfo; } ;
struct TYPE_26__ {int i64Key; } ;
struct TYPE_23__ {size_t colIdx; } ;
struct TYPE_21__ {size_t columnIndex; int tableIndex; } ;
typedef TYPE_5__ SSqlExpr ;
typedef TYPE_6__ SSqlCmd ;
typedef TYPE_7__ SSchema ;
typedef TYPE_8__ SMeterMetaInfo ;
typedef TYPE_9__ SColumnList ;
typedef TYPE_10__ SColumnIndex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,scalar_t__,TYPE_9__*,int ,int ,int ) ;
 TYPE_7__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (TYPE_16__*,scalar_t__,int) ;
 TYPE_8__* FUNC_3 (TYPE_6__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_6__*,scalar_t__,int ,TYPE_10__*,int ,int ,int ) ;

void FUNC_5(SSqlCmd* VAR_2, int32_t VAR_3) {
  int32_t VAR_4 = VAR_2->groupbyExpr.columnInfo[VAR_3].colIdx;

  SMeterMetaInfo* VAR_5 = FUNC_3(VAR_2, 0);

  SSchema* VAR_6 = FUNC_1(VAR_5->pMeterMeta, VAR_4);
  SColumnIndex VAR_7 = {.tableIndex = 0, .columnIndex = VAR_4};

  SSqlExpr* VAR_8 = FUNC_4(VAR_2, VAR_2->fieldsInfo.numOfOutputCols, VAR_1, &VAR_7, VAR_6->type,
                                     VAR_6->bytes, VAR_6->bytes);

  VAR_8->colInfo.flag = VAR_0;
  VAR_8->param[0].i64Key = 1;
  VAR_8->numOfParams = 1;


  SColumnList VAR_9 = {0};
  VAR_9.num = 1;
  VAR_9.ids[0] = VAR_7;

  FUNC_0(VAR_2, VAR_2->fieldsInfo.numOfOutputCols, &VAR_9, VAR_6->bytes, VAR_6->type, VAR_6->name);
  FUNC_2(&VAR_2->fieldsInfo, VAR_2->fieldsInfo.numOfOutputCols - 1, 0);
}
