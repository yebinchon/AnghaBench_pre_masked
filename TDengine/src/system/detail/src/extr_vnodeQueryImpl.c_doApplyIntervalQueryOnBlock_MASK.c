
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
typedef size_t (* __block_search_fn_t ) (char*,size_t,scalar_t__,int ) ;
struct TYPE_23__ {size_t size; scalar_t__ keyLast; scalar_t__ keyFirst; } ;
struct TYPE_22__ {size_t lastResRows; } ;
struct TYPE_19__ {TYPE_3__* pQuery; } ;
struct TYPE_21__ {scalar_t__ rawEKey; int rawSKey; TYPE_2__ runtimeEnv; } ;
struct TYPE_18__ {int order; } ;
struct TYPE_20__ {size_t pos; scalar_t__ lastKey; scalar_t__ ekey; scalar_t__ skey; TYPE_1__ order; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterQuerySupportObj ;
typedef TYPE_5__ SMeterQueryInfo ;
typedef int SField ;
typedef TYPE_6__ SBlockInfo ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 size_t FUNC_2 (TYPE_2__*,TYPE_6__*,scalar_t__*,char*,int *,size_t (*) (char*,size_t,scalar_t__,int ),size_t*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_7(SMeterQuerySupportObj *VAR_0, SMeterQueryInfo *VAR_1,
                                        SBlockInfo *VAR_2, int64_t *VAR_3, char *VAR_4, SField *VAR_5,
                                        __block_search_fn_t VAR_6) {
  SQueryRuntimeEnv *VAR_7 = &VAR_0->runtimeEnv;
  SQuery * VAR_8 = VAR_7->pQuery;
  int32_t VAR_9 = FUNC_0(VAR_8->order.order);

  int64_t VAR_10 = -1;
  bool VAR_11 = 0;

  while (1) {
    int32_t VAR_12 = 0;
    int32_t VAR_13 = FUNC_2(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_12);
    FUNC_3(VAR_13 > 0);


    if (VAR_1->lastResRows == 0) {
      VAR_1->lastResRows = VAR_12;
    } else {
      FUNC_3(VAR_1->lastResRows == 1);
    }

    int32_t VAR_14 = VAR_8->pos + VAR_13 * VAR_9;


    if ((VAR_14 < VAR_2->size && FUNC_1(VAR_8)) || (VAR_14 >= 0 && !FUNC_1(VAR_8))) {
      VAR_10 = VAR_3[VAR_14];
    } else {
      FUNC_3((VAR_8->lastKey > VAR_2->keyLast && FUNC_1(VAR_8)) ||
             (VAR_8->lastKey < VAR_2->keyFirst && !FUNC_1(VAR_8)));
    }


    if (FUNC_1(VAR_8)) {
      VAR_11 = (VAR_10 > VAR_8->ekey || VAR_8->ekey <= VAR_2->keyLast);
    } else {
      VAR_11 = (VAR_10 < VAR_8->ekey || VAR_8->ekey >= VAR_2->keyFirst);
    }






    if (FUNC_1(VAR_8)) {
      if (VAR_8->lastKey > VAR_2->keyLast || VAR_8->lastKey > VAR_0->rawEKey ||
          VAR_10 > VAR_0->rawEKey) {




        if (VAR_8->lastKey > VAR_2->keyLast) {
          FUNC_3(VAR_8->ekey >= VAR_2->keyLast);
        }

        if (VAR_8->lastKey > VAR_0->rawEKey || VAR_10 > VAR_0->rawEKey) {

          FUNC_3(VAR_11);
          FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);


          FUNC_5(VAR_7, VAR_1);
        } else if (VAR_8->ekey == VAR_2->keyLast) {

          int64_t VAR_15 = VAR_8->ekey;

          FUNC_4(VAR_8, VAR_8->lastKey, VAR_0->rawSKey, VAR_0->rawEKey);
          FUNC_5(VAR_7, VAR_1);

          FUNC_3(VAR_11 && VAR_15 < VAR_8->skey);
          if (VAR_1->lastResRows > 0) {
            FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);
          }
        } else {
          FUNC_5(VAR_7, VAR_1);
          FUNC_3(VAR_8->lastKey > VAR_2->keyLast && VAR_8->lastKey <= VAR_8->ekey);





          if (VAR_11) {
            FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);
          }
        }

        break;
      }
    } else {
      if (VAR_8->lastKey < VAR_2->keyFirst || VAR_8->lastKey < VAR_0->rawEKey ||
          VAR_10 < VAR_0->rawEKey) {
        if (VAR_8->lastKey < VAR_2->keyFirst) {
          FUNC_3(VAR_8->ekey <= VAR_2->keyFirst);
        }

        if (VAR_8->lastKey < VAR_0->rawEKey || (VAR_10 < VAR_0->rawEKey && VAR_10 != -1)) {

          FUNC_3(VAR_11);
          FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);





          FUNC_5(VAR_7, VAR_1);
        } else if (VAR_8->ekey == VAR_2->keyFirst) {

          int64_t VAR_16 = VAR_8->ekey;

          FUNC_4(VAR_8, VAR_8->lastKey, VAR_0->rawSKey, VAR_0->rawEKey);
          FUNC_5(VAR_7, VAR_1);

          FUNC_3(VAR_11 && VAR_16 > VAR_8->skey);
          if (VAR_1->lastResRows > 0) {
            FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);
          }
        } else {
          FUNC_5(VAR_7, VAR_1);
          FUNC_3(VAR_8->lastKey < VAR_2->keyFirst && VAR_8->lastKey >= VAR_8->ekey);





          if (VAR_11) {
            FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);
          }
        }

        break;
      }
    }

    FUNC_3(VAR_11);
    FUNC_6(VAR_0, VAR_1, VAR_1->lastResRows);

    FUNC_3((VAR_10 >= VAR_8->lastKey && FUNC_1(VAR_8)) ||
           (VAR_10 <= VAR_8->lastKey && !FUNC_1(VAR_8)));


    FUNC_4(VAR_8, VAR_10, VAR_0->rawSKey, VAR_0->rawEKey);
    FUNC_5(VAR_7, VAR_1);

    int32_t VAR_17 = VAR_6((char *)VAR_3, VAR_2->size, VAR_8->skey, VAR_8->order.order);
    FUNC_3(VAR_17 == VAR_8->pos + VAR_13 * VAR_9);

    VAR_8->pos = VAR_17;
  }
}
