
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_17__ {int * pState; } ;
struct TYPE_12__ {int numOfExprs; } ;
struct TYPE_16__ {TYPE_1__ exprsInfo; } ;
struct TYPE_14__ {scalar_t__ numOfRows; void** tsrow; scalar_t__ row; scalar_t__ code; TYPE_2__* pColumnIndex; } ;
struct TYPE_15__ {size_t numOfSubs; TYPE_3__ res; struct TYPE_15__** pSubs; scalar_t__ param; TYPE_5__ cmd; } ;
struct TYPE_13__ {size_t tableIndex; size_t columnIndex; } ;
typedef scalar_t__ TSKEY ;
typedef int SSubqueryState ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SJoinSubquerySupporter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 void** FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,TYPE_4__*,int) ;

__attribute__((used)) static void **FUNC_7(SSqlObj *VAR_1) {
  SSqlCmd *VAR_2 = &VAR_1->cmd;
  SSqlRes *VAR_3 = &VAR_1->res;

  while (1) {
    bool VAR_4 = 1;

    for (int32_t VAR_5 = 0; VAR_5 < VAR_1->numOfSubs; ++VAR_5) {
      SSqlRes *VAR_6 = &VAR_1->pSubs[VAR_5]->res;


      if (VAR_6->numOfRows == 0) {
        VAR_4 = 0;
        break;
      }
    }

    if (!VAR_4) {
      FUNC_6("%p one subquery exhausted, free other %d subquery", VAR_1, VAR_1->numOfSubs - 1);

      SSubqueryState *VAR_7 = ((void*)0);

      for (int32_t VAR_8 = 0; VAR_8 < VAR_1->numOfSubs; ++VAR_8) {
        SSqlObj * VAR_9 = VAR_1->pSubs[VAR_8];
        SJoinSubquerySupporter *VAR_10 = (SJoinSubquerySupporter *)VAR_9->param;
        VAR_7 = VAR_10->pState;

        FUNC_4(VAR_9->param);
        FUNC_3(VAR_9);
      }

      FUNC_1(VAR_7);
      return ((void*)0);
    }

    if (VAR_3->tsrow == ((void*)0)) {
      VAR_3->tsrow = FUNC_2(sizeof(void *) * VAR_2->exprsInfo.numOfExprs);
    }

    bool VAR_11 = 0;
    if (VAR_1->numOfSubs >= 2) {

      SSqlRes *VAR_12 = &VAR_1->pSubs[0]->res;
      SSqlRes *VAR_13 = &VAR_1->pSubs[1]->res;

      while (VAR_12->row < VAR_12->numOfRows && VAR_13->row < VAR_13->numOfRows) {
        FUNC_0(VAR_1->pSubs[0]);
        FUNC_0(VAR_1->pSubs[1]);

        TSKEY VAR_14 = *(TSKEY *)VAR_12->tsrow[0];
        TSKEY VAR_15 = *(TSKEY *)VAR_13->tsrow[0];

        if (VAR_14 == VAR_15) {
          VAR_11 = 1;
          VAR_12->row++;
          VAR_13->row++;
          break;
        } else if (VAR_14 < VAR_15) {
          VAR_12->row++;
        } else if (VAR_14 > VAR_15) {
          VAR_13->row++;
        }
      }
    } else {
      SSqlRes *VAR_16 = &VAR_1->pSubs[0]->res;
      FUNC_0(VAR_1->pSubs[0]);

      VAR_11 = (VAR_16->row++ < VAR_16->numOfRows);
    }

    if (VAR_11) {
      for (int32_t VAR_17 = 0; VAR_17 < VAR_2->exprsInfo.numOfExprs; ++VAR_17) {
        int32_t VAR_18 = VAR_3->pColumnIndex[VAR_17].tableIndex;
        int32_t VAR_19 = VAR_3->pColumnIndex[VAR_17].columnIndex;

        SSqlRes *VAR_20 = &VAR_1->pSubs[VAR_18]->res;
        VAR_3->tsrow[VAR_17] = VAR_20->tsrow[VAR_19];
      }

      break;
    } else {
      FUNC_5(VAR_1);
      if (VAR_3->code != VAR_0) {
        return ((void*)0);
      }
    }
  }

  return VAR_3->tsrow;
}
