
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef int __block_search_fn_t ;
struct TYPE_20__ {scalar_t__ keyLast; int size; scalar_t__ keyFirst; } ;
struct TYPE_17__ {int order; } ;
struct TYPE_19__ {scalar_t__ ekey; size_t pos; scalar_t__ lastKey; scalar_t__ numOfFilterCols; int checkBufferInLoop; scalar_t__ pointsOffset; int pGroupbyExpr; TYPE_1__ order; } ;
struct TYPE_18__ {int * pTSBuf; int blockStatus; TYPE_3__* pQuery; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef int SField ;
typedef TYPE_4__ SBlockInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int,scalar_t__*,char*,int *,TYPE_4__*,int) ;
 int FUNC_5 (int,int ,TYPE_3__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int*,scalar_t__*,char*,int *,TYPE_4__*,int) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_2__*,scalar_t__*,TYPE_4__*) ;

__attribute__((used)) static int32_t FUNC_11(SQueryRuntimeEnv *VAR_1, SBlockInfo *VAR_2, int64_t *VAR_3,
                                     char *VAR_4, SField *VAR_5, __block_search_fn_t VAR_6, int32_t *VAR_7) {
  int32_t VAR_8 = 0;
  SQuery *VAR_9 = VAR_1->pQuery;

  int32_t VAR_10 = FUNC_0(VAR_9->order.order);

  FUNC_10(VAR_1, VAR_3, VAR_2);

  if (FUNC_2(VAR_9)) {
    if (VAR_9->ekey < VAR_2->keyLast) {
      VAR_8 = FUNC_5(VAR_2->size, VAR_6, VAR_9, VAR_3);
      FUNC_3(VAR_8 >= 0);

      if (VAR_8 == 0) {

        FUNC_3(VAR_9->ekey < VAR_3[VAR_9->pos]);
      } else {
        VAR_9->lastKey = VAR_3[VAR_9->pos + (VAR_8 - 1)] + VAR_10;
      }

    } else {
      VAR_8 = VAR_2->size - VAR_9->pos;
      FUNC_3(VAR_8 > 0);

      VAR_9->lastKey = VAR_2->keyLast + VAR_10;
    }
  } else {
    if (VAR_9->ekey > VAR_2->keyFirst) {
      VAR_8 = FUNC_5(VAR_2->size, VAR_6, VAR_9, VAR_3);
      FUNC_3(VAR_8 >= 0);

      if (VAR_8 == 0) {

        FUNC_3(VAR_9->ekey > VAR_3[VAR_9->pos]);
      } else {
        VAR_9->lastKey = VAR_3[VAR_9->pos - (VAR_8 - 1)] + VAR_10;
      }
    } else {
      VAR_8 = VAR_9->pos + 1;
      FUNC_3(VAR_8 > 0);

      VAR_9->lastKey = VAR_2->keyFirst + VAR_10;
    }
  }

  int32_t VAR_11 = FUNC_7(VAR_1, VAR_8);
  FUNC_3(VAR_11 <= VAR_8 && VAR_11 >= 0);


  if (VAR_11 < VAR_8 && VAR_11 > 0) {
    VAR_9->lastKey = VAR_3[VAR_9->pos + (VAR_11 - 1) * VAR_10] + VAR_10;
  }

  bool VAR_12 = FUNC_1(VAR_1->blockStatus);

  if (VAR_9->numOfFilterCols > 0 || VAR_1->pTSBuf != ((void*)0) || FUNC_6(VAR_9->pGroupbyExpr)) {
    *VAR_7 =
        FUNC_8(VAR_1, &VAR_11, VAR_3, VAR_4, VAR_5, VAR_2, VAR_12);
  } else {
    *VAR_7 = FUNC_4(VAR_1, VAR_11, VAR_3, VAR_4, VAR_5, VAR_2,
                                           VAR_12);
  }

  FUNC_3(*VAR_7 >= 0);


  if (*VAR_7 > 0 && VAR_9->checkBufferInLoop == 1) {
    VAR_9->pointsOffset -= *VAR_7;
    if (VAR_9->pointsOffset <= 0) {
      VAR_9->pointsOffset = 0;
      FUNC_9(VAR_9, VAR_0);
    }
  }

  return VAR_11;
}
