
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_23__ ;
typedef struct TYPE_40__ TYPE_22__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_12__ ;
typedef struct TYPE_37__ TYPE_11__ ;
typedef struct TYPE_36__ TYPE_10__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_49__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_48__ {int bytes; int type; } ;
struct TYPE_40__ {size_t numOfCols; int * pColList; } ;
struct TYPE_47__ {int type; TYPE_22__ colList; int groupbyExpr; int limit; scalar_t__ nAggTimeInterval; scalar_t__ numOfCols; int tagCond; int fieldsInfo; int exprsInfo; } ;
struct TYPE_46__ {int numOfParams; TYPE_4__* param; } ;
struct TYPE_39__ {int qhandle; scalar_t__ numOfRows; } ;
struct TYPE_45__ {TYPE_7__ cmd; int numOfSubs; struct TYPE_45__** pSubs; TYPE_1__ res; } ;
struct TYPE_44__ {int i64Key; } ;
struct TYPE_43__ {int uid; } ;
struct TYPE_42__ {int numOfTotal; } ;
struct TYPE_41__ {size_t numOfCols; TYPE_12__* pColList; } ;
struct TYPE_38__ {scalar_t__ numOfFilters; } ;
struct TYPE_37__ {int member_1; int member_0; } ;
struct TYPE_36__ {TYPE_23__ colList; int groupbyExpr; int tagCond; int fieldsInfo; int uid; int exprsInfo; TYPE_2__* pState; } ;
typedef TYPE_5__ SSqlObj ;
typedef int SSqlGroupbyExpr ;
typedef TYPE_6__ SSqlExpr ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SSchema ;
typedef TYPE_9__ SMeterMetaInfo ;
typedef int SLimitVal ;
typedef TYPE_10__ SJoinSubquerySupporter ;
typedef TYPE_11__ SColumnIndex ;
typedef TYPE_12__ SColumnBase ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ) ;
 TYPE_5__* FUNC_3 (TYPE_5__*,int ,int ,int ,TYPE_10__*,int *) ;
 TYPE_5__** FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_7__*,int ,int ,TYPE_11__*,TYPE_8__*,int ) ;
 int FUNC_7 (int *,TYPE_12__*) ;
 int FUNC_8 (TYPE_23__*,TYPE_22__*,int ) ;
 int FUNC_9 (TYPE_22__*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*,int ) ;
 TYPE_9__* FUNC_13 (TYPE_7__*,int ) ;
 int VAR_7 ;
 size_t FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (int *,int *,int ) ;
 TYPE_6__* FUNC_16 (TYPE_7__*,int ) ;
 int FUNC_17 (int *,int *) ;

int32_t FUNC_18(SSqlObj *VAR_8, int16_t VAR_9, int16_t VAR_10, SJoinSubquerySupporter *VAR_11) {
  SSqlCmd *VAR_12 = &VAR_8->cmd;

  VAR_8->res.qhandle = 0x1;
  VAR_8->res.numOfRows = 0;

  if (VAR_8->pSubs == ((void*)0)) {
    VAR_8->pSubs = FUNC_4(VAR_0 * VAR_11->pState->numOfTotal);
    if (VAR_8->pSubs == ((void*)0)) {
      return VAR_2;
    }
  }

  SSqlObj *VAR_13 = FUNC_3(VAR_8, VAR_10, VAR_9, VAR_7, VAR_11, ((void*)0));
  if (VAR_13 == ((void*)0)) {
    return VAR_2;
  }

  VAR_8->pSubs[VAR_8->numOfSubs++] = VAR_13;

  if (FUNC_0(VAR_12->type)) {
    FUNC_1(VAR_8, VAR_13, VAR_9);


    FUNC_9(&VAR_13->cmd.colList, 0);
    FUNC_8(&VAR_11->colList, &VAR_13->cmd.colList, 0);

    FUNC_15(&VAR_11->exprsInfo, &VAR_13->cmd.exprsInfo, VAR_11->uid);

    FUNC_10(&VAR_13->cmd.fieldsInfo, &VAR_11->fieldsInfo);
    FUNC_17(&VAR_11->tagCond, &VAR_13->cmd.tagCond);
    VAR_11->groupbyExpr = VAR_13->cmd.groupbyExpr;

    VAR_13->cmd.numOfCols = 0;
    VAR_13->cmd.nAggTimeInterval = 0;
    FUNC_5(&VAR_13->cmd.limit, 0, sizeof(SLimitVal));
    FUNC_5(&VAR_13->cmd.groupbyExpr, 0, sizeof(SSqlGroupbyExpr));


    FUNC_11(&VAR_13->cmd);

    SSchema VAR_14 = {.type = VAR_4, .bytes = 1};
    SColumnIndex VAR_15 = {0, VAR_1};

    FUNC_6(&VAR_13->cmd, 0, VAR_5, &VAR_15, &VAR_14, VAR_3);


    SSqlExpr *VAR_16 = FUNC_16(&VAR_13->cmd, 0);

    SMeterMetaInfo *VAR_17 = FUNC_13(&VAR_13->cmd, 0);
    int16_t VAR_18 = FUNC_12(&VAR_13->cmd, VAR_17->pMeterMeta->uid);

    VAR_16->param->i64Key = VAR_18;
    VAR_16->numOfParams = 1;

    FUNC_2(VAR_12, VAR_18, 0);


    for (int32_t VAR_19 = 0; VAR_19 < VAR_11->colList.numOfCols; ++VAR_19) {
      SColumnBase *VAR_20 = &VAR_11->colList.pColList[VAR_19];
      if (VAR_20->numOfFilters > 0) {
        FUNC_7(&VAR_13->cmd.colList.pColList[VAR_13->cmd.colList.numOfCols], VAR_20);
        VAR_13->cmd.colList.numOfCols++;
      }
    }
  } else {
    VAR_13->cmd.type |= VAR_6;
  }

  return FUNC_14(VAR_13);
}
