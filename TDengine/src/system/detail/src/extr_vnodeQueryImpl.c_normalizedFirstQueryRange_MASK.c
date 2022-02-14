
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int __block_search_fn_t ;
struct TYPE_21__ {scalar_t__ numOfBlocks; int * cacheBlocks; } ;
struct TYPE_20__ {size_t searchAlgorithm; scalar_t__ pCache; } ;
struct TYPE_17__ {TYPE_4__* pMeterObj; TYPE_2__* pQuery; } ;
struct TYPE_19__ {TYPE_1__ runtimeEnv; } ;
struct TYPE_18__ {scalar_t__ skey; int fileId; scalar_t__ ekey; int pos; int slot; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef int SPointInterpoSupporter ;
typedef TYPE_3__ SMeterQuerySupportObj ;
typedef TYPE_4__ SMeterObj ;
typedef TYPE_5__ SCacheInfo ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int * VAR_2 ;

bool FUNC_9(bool VAR_3, bool VAR_4, SMeterQuerySupportObj *VAR_5,
                               SPointInterpoSupporter *VAR_6) {
  SQueryRuntimeEnv * VAR_7 = &VAR_5->runtimeEnv;
  SQuery * VAR_8 = VAR_7->pQuery;
  SMeterObj * VAR_9 = VAR_7->pMeterObj;
  __block_search_fn_t VAR_10 = VAR_2[VAR_9->searchAlgorithm];

  if (FUNC_0(VAR_8)) {

    if (VAR_3 && FUNC_5(VAR_9, VAR_7, VAR_0, VAR_10)) {
      TSKEY VAR_11 = FUNC_7(VAR_7, VAR_8->pos);
      FUNC_1(VAR_11 >= VAR_8->skey);

      return FUNC_2(VAR_11, VAR_5, VAR_6);
    }


    VAR_8->fileId = -1;
    SCacheInfo *VAR_12 = (SCacheInfo *)VAR_9->pCache;


    if (VAR_12 == ((void*)0) || VAR_12->cacheBlocks == ((void*)0) || VAR_12->numOfBlocks == 0 || !VAR_4) {
      return 0;
    }

    TSKEY VAR_13 = FUNC_6(VAR_7, &VAR_8->slot, &VAR_8->pos, 0);
    return FUNC_2(VAR_13, VAR_5, VAR_6);

  } else {
    if (VAR_4) {
      TSKEY VAR_14 = FUNC_6(VAR_7, &VAR_8->slot, &VAR_8->pos, 0);
      FUNC_1(VAR_14 == -1 || VAR_14 <= VAR_8->skey);


      if (VAR_14 != -1) {
        if (VAR_14 >= VAR_8->ekey) {
          if (FUNC_8(VAR_8)) {
            return FUNC_4(VAR_5, VAR_9, VAR_6);
          } else {
            FUNC_3(VAR_8, VAR_14, VAR_8->skey, VAR_8->ekey);
            return 1;
          }
        } else {





          return 0;
        }
      } else {
      }
    }

    if (VAR_3 && FUNC_5(VAR_9, VAR_7, VAR_1, VAR_10)) {
      TSKEY VAR_15 = FUNC_7(VAR_7, VAR_8->pos);
      FUNC_1(VAR_15 <= VAR_8->skey);


      if (VAR_15 >= VAR_8->ekey) {
        if (FUNC_8(VAR_8)) {
          return FUNC_4(VAR_5, VAR_9, VAR_6);
        } else {
          FUNC_3(VAR_8, VAR_15, VAR_8->skey, VAR_8->ekey);
          return 1;
        }
      } else {

        if (FUNC_8(VAR_8)) {
          return FUNC_4(VAR_5, VAR_9, VAR_6);
        }
      }
    }
  }

  return 0;
}
