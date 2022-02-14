
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int __block_search_fn_t ;
struct TYPE_22__ {scalar_t__ size; scalar_t__ keyLast; scalar_t__ keyFirst; } ;
struct TYPE_21__ {size_t searchAlgorithm; } ;
struct TYPE_18__ {scalar_t__ offset; } ;
struct TYPE_17__ {int order; } ;
struct TYPE_20__ {scalar_t__ pos; scalar_t__ ekey; scalar_t__ lastKey; TYPE_2__ limit; int slot; int over; TYPE_1__ order; } ;
struct TYPE_19__ {TYPE_4__* pQuery; TYPE_5__* pMeterObj; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SMeterObj ;
typedef TYPE_6__ SBlockInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 TYPE_6__ FUNC_6 (void*,scalar_t__) ;
 void* FUNC_7 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,int ,int) ;
 int FUNC_9 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,TYPE_6__*,void*) ;
 int * VAR_3 ;

__attribute__((used)) static int32_t FUNC_11(SQueryRuntimeEnv *VAR_4) {
  SMeterObj * VAR_5 = VAR_4->pMeterObj;
  SQuery * VAR_6 = VAR_4->pQuery;
  int32_t VAR_7 = FUNC_0(VAR_6->order.order);
  __block_search_fn_t VAR_8 = VAR_3[VAR_5->searchAlgorithm];

  while (1) {
    FUNC_8(VAR_4, VAR_7, VAR_8, 0);
    if (FUNC_4(VAR_6->over, VAR_2)) {
      break;
    }

    void *VAR_9 = FUNC_7(VAR_5, VAR_6, VAR_6->slot);
    FUNC_5(VAR_9 != ((void*)0));

    int32_t VAR_10 = FUNC_2(VAR_6) ? VAR_1 : VAR_0;
    SBlockInfo VAR_11 = FUNC_6(VAR_9, VAR_10);

    int32_t VAR_12 = (FUNC_3(VAR_6)) ? VAR_11.size - VAR_6->pos : VAR_6->pos + 1;
    FUNC_5(VAR_12 >= 0);

    if (VAR_6->limit.offset < VAR_12 || (VAR_6->ekey <= VAR_11.keyLast && FUNC_3(VAR_6)) ||
        (VAR_6->ekey >= VAR_11.keyFirst && !FUNC_3(VAR_6))) {
      FUNC_10(VAR_4, &VAR_11, VAR_9);
      break;
    } else {
      VAR_6->limit.offset -= VAR_12;
      VAR_6->lastKey = (FUNC_3(VAR_6)) ? VAR_11.keyLast : VAR_11.keyFirst;
      VAR_6->lastKey += VAR_7;

      FUNC_9("QInfo:%p skip rows:%d, offset:%lld", FUNC_1(VAR_6), VAR_12, VAR_6->limit.offset);
    }
  }

  return 0;
}
