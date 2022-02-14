
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int __block_search_fn_t ;
struct TYPE_34__ {int pos; int slot; int fileId; } ;
struct TYPE_33__ {scalar_t__ numOfPoints; } ;
struct TYPE_32__ {size_t searchAlgorithm; } ;
struct TYPE_28__ {TYPE_9__ startPos; TYPE_3__* pQuery; } ;
struct TYPE_31__ {scalar_t__ rawEKey; scalar_t__ rawSKey; TYPE_2__ runtimeEnv; } ;
struct TYPE_30__ {scalar_t__* pNextPoint; scalar_t__* pPrevPoint; } ;
struct TYPE_29__ {scalar_t__ skey; scalar_t__ ekey; scalar_t__ fileId; size_t slot; scalar_t__ pos; scalar_t__ lastKey; TYPE_1__* pBlock; int over; } ;
struct TYPE_27__ {scalar_t__ numOfPoints; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SPointInterpoSupporter ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterObj ;
typedef TYPE_7__ SCacheBlock ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_7__* FUNC_6 (TYPE_6__*,TYPE_3__*,size_t) ;
 int FUNC_7 (TYPE_2__*,TYPE_6__*,TYPE_7__*,scalar_t__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int) ;
 int FUNC_13 (char*,int ,scalar_t__,size_t,scalar_t__,...) ;
 int FUNC_14 (TYPE_9__*,scalar_t__,size_t,scalar_t__) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int * VAR_4 ;

__attribute__((used)) static bool FUNC_16(SMeterQuerySupportObj *VAR_5, SMeterObj *VAR_6,
                              SPointInterpoSupporter *VAR_7) {
  SQueryRuntimeEnv *VAR_8 = &VAR_5->runtimeEnv;
  SQuery * VAR_9 = VAR_8->pQuery;

  if (!FUNC_11(VAR_9)) {
    return 0;
  }




  if (FUNC_10(VAR_9)) {
    FUNC_4(!FUNC_2(VAR_9));
  } else {
    FUNC_4(FUNC_2(VAR_9));
  }
  FUNC_4(VAR_7 != ((void*)0) && VAR_9->skey == VAR_9->ekey);

  SCacheBlock *VAR_10 = ((void*)0);

  FUNC_13("QInfo:%p get next data point, fileId:%d, slot:%d, pos:%d", FUNC_0(VAR_9), VAR_9->fileId,
         VAR_9->slot, VAR_9->pos);


  if (FUNC_1(VAR_9)) {
    FUNC_8(VAR_8, VAR_7->pNextPoint, VAR_9->pos);
  } else {
    VAR_10 = FUNC_6(VAR_6, VAR_9, VAR_9->slot);
    __block_search_fn_t VAR_11 = VAR_4[VAR_6->searchAlgorithm];

    while (VAR_10 == ((void*)0)) {

      FUNC_9(VAR_8, VAR_11);


      if (FUNC_1(VAR_9)) {
        FUNC_8(VAR_8, VAR_7->pNextPoint, VAR_9->pos);
        break;
      } else {
        VAR_10 = FUNC_6(VAR_6, VAR_9, VAR_9->slot);
      }
    }

    if (!FUNC_1(VAR_9)) {
      FUNC_7(VAR_8, VAR_6, VAR_10, VAR_7->pNextPoint, VAR_9->pos);
    }
  }






  TSKEY VAR_12 = *(TSKEY *)VAR_7->pNextPoint[0];
  if (FUNC_10(VAR_9) || VAR_12 == VAR_9->skey) {
    FUNC_15(VAR_9, VAR_2);





    if (VAR_9->ekey != VAR_12) {
      VAR_9->skey = VAR_12;
      VAR_9->ekey = VAR_12;
      VAR_9->lastKey = VAR_12;
      VAR_5->rawSKey = VAR_12;
      VAR_5->rawEKey = VAR_12;
    }
    return 1;
  }


  if (VAR_9->pos > 0) {
    int32_t VAR_13 = VAR_9->pos - 1;

    if (FUNC_1(VAR_9)) {

      FUNC_8(VAR_8, VAR_7->pPrevPoint, VAR_13);
    } else {
      FUNC_7(VAR_8, VAR_6, VAR_10, VAR_7->pPrevPoint, VAR_13);
    }
  } else {
    __block_search_fn_t VAR_14 = VAR_4[VAR_6->searchAlgorithm];

    FUNC_14(&VAR_8->startPos, VAR_9->fileId, VAR_9->slot, VAR_9->pos);


    FUNC_12(VAR_8, VAR_1, VAR_14, 1);




    if (FUNC_3(VAR_9->over, VAR_3)) {
      FUNC_5("QInfo:%p no previous data block, start fileId:%d, slot:%d, pos:%d, qrange:%lld-%lld, out of range",
             FUNC_0(VAR_9), VAR_8->startPos.fileId, VAR_8->startPos.slot,
             VAR_8->startPos.pos, VAR_9->skey, VAR_9->ekey);


      FUNC_15(VAR_9, VAR_0);
      return 0;
    } else {
      if (VAR_9->fileId >= 0) {
        VAR_9->pos = VAR_9->pBlock[VAR_9->slot].numOfPoints - 1;
        FUNC_8(VAR_8, VAR_7->pPrevPoint, VAR_9->pos);

        FUNC_13("QInfo:%p get prev data point, fileId:%d, slot:%d, pos:%d, pQuery->pos:%d", FUNC_0(VAR_9),
               VAR_9->fileId, VAR_9->slot, VAR_9->pos, VAR_9->pos);
      } else {
        VAR_10 = FUNC_6(VAR_6, VAR_9, VAR_9->slot);
        if (VAR_10 == ((void*)0)) {

        } else {
          VAR_9->pos = VAR_10->numOfPoints - 1;
          FUNC_7(VAR_8, VAR_6, VAR_10, VAR_7->pPrevPoint, VAR_9->pos);

          FUNC_13("QInfo:%p get prev data point, fileId:%d, slot:%d, pos:%d, pQuery->pos:%d", FUNC_0(VAR_9),
                 VAR_9->fileId, VAR_9->slot, VAR_10->numOfPoints - 1, VAR_9->pos);
        }
      }
    }
  }

  VAR_9->skey = *(TSKEY *)VAR_7->pPrevPoint[0];
  VAR_9->ekey = *(TSKEY *)VAR_7->pNextPoint[0];
  VAR_9->lastKey = VAR_9->skey;

  return 1;
}
