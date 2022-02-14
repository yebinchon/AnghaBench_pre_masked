
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {scalar_t__ pointsToRead; scalar_t__ pointsRead; scalar_t__ numOfOutputCols; TYPE_2__** sdata; } ;
struct TYPE_10__ {TYPE_1__* pCtx; TYPE_4__* pQuery; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {scalar_t__ outputBytes; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_3(SQueryRuntimeEnv *VAR_0) {
  SQuery *VAR_1 = VAR_0->pQuery;
  int32_t VAR_2 = VAR_1->pointsToRead;

  if (FUNC_0(VAR_1) || FUNC_1(VAR_1)) {
    return;
  }

  if (VAR_1->pointsRead > 0 && VAR_1->pointsRead < VAR_2) {
    for (int32_t VAR_3 = 0; VAR_3 < VAR_1->numOfOutputCols; ++VAR_3) {
      int32_t VAR_4 = VAR_0->pCtx[VAR_3].outputBytes;
      FUNC_2(VAR_1->sdata[VAR_3]->data, VAR_1->sdata[VAR_3]->data + (VAR_2 - VAR_1->pointsRead) * VAR_4,
              VAR_1->pointsRead * VAR_4);
    }
  }
}
