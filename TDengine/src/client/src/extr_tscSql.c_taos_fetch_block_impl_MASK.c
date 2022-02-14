
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int order; } ;
struct TYPE_12__ {int numOfOutputCols; } ;
struct TYPE_16__ {scalar_t__ command; TYPE_10__ order; TYPE_1__ fieldsInfo; } ;
struct TYPE_14__ {scalar_t__ qhandle; int numOfRows; int numOfTotal; int* bytes; scalar_t__* tsrow; } ;
struct TYPE_15__ {TYPE_2__* pTscObj; TYPE_3__ res; TYPE_5__ cmd; } ;
struct TYPE_13__ {TYPE_4__* pSql; } ;
typedef scalar_t__* TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__*,int,TYPE_10__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(TAOS_RES *VAR_6, TAOS_ROW *VAR_7) {
  SSqlObj *VAR_8 = (SSqlObj *)VAR_6;
  SSqlCmd *VAR_9 = &VAR_8->cmd;
  SSqlRes *VAR_10 = &VAR_8->res;
  STscObj *VAR_11 = VAR_8->pTscObj;

  if (VAR_10->qhandle == 0 || VAR_11->pSql != VAR_8) {
    *VAR_7 = ((void*)0);
    return 0;
  }


  FUNC_2(VAR_10);
  if (VAR_9->command < VAR_1) {
    VAR_9->command = (VAR_9->command > VAR_2) ? VAR_3 : VAR_0;
  }

  FUNC_1(VAR_8);
  if (VAR_10->numOfRows == 0) {
    *VAR_7 = ((void*)0);
    return 0;
  }


  if (VAR_9->command != VAR_4) {
    VAR_10->numOfTotal += VAR_10->numOfRows;
  }

  for (int VAR_12 = 0; VAR_12 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_12) {
    VAR_10->tsrow[VAR_12] = FUNC_0(VAR_10, VAR_9, VAR_12, VAR_9->order) +
                     VAR_10->bytes[VAR_12] * (1 - VAR_9->order.order) * (VAR_10->numOfRows - 1);
  }

  *VAR_7 = VAR_10->tsrow;

  return (VAR_9->order.order == VAR_5) ? VAR_10->numOfRows : -VAR_10->numOfRows;
}
