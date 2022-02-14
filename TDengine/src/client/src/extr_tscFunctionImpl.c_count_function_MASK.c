
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {int hasResult; } ;
struct TYPE_8__ {scalar_t__ numOfNull; scalar_t__ isSet; } ;
struct TYPE_9__ {int hasNull; scalar_t__ size; scalar_t__ aOutputBuf; TYPE_1__ preAggVals; int inputType; int blockStatus; } ;
typedef TYPE_2__ SQLFunctionCtx ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = 0;

  if (FUNC_2(VAR_1->blockStatus)) {






    if (VAR_1->hasNull) {
      for (int32_t VAR_3 = 0; VAR_3 < VAR_1->size; ++VAR_3) {
        char *VAR_4 = FUNC_0(VAR_1, VAR_3);
        if (FUNC_5(VAR_4, VAR_1->inputType)) {
          continue;
        }

        VAR_2 += 1;
      }
    } else {
      VAR_2 = VAR_1->size;
    }
  } else {





    if (VAR_1->preAggVals.isSet) {
      VAR_2 = VAR_1->size - VAR_1->preAggVals.numOfNull;
    } else {
      FUNC_4(VAR_1->hasNull == 0);
      VAR_2 = VAR_1->size;
    }
  }

  if (VAR_2 > 0) {
    FUNC_1(VAR_1)->hasResult = VAR_0;
  }

  *((int64_t *)VAR_1->aOutputBuf) += VAR_2;
  FUNC_3(VAR_1, VAR_2, 1);
}
