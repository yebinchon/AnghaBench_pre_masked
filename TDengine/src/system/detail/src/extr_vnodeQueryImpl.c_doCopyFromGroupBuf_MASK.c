
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ data; } ;
typedef TYPE_2__ tFilePage ;
typedef scalar_t__ int32_t ;
struct TYPE_16__ {TYPE_4__* pQuery; TYPE_1__* pCtx; } ;
struct TYPE_19__ {scalar_t__ subgroupIdx; int offset; TYPE_3__ runtimeEnv; } ;
struct TYPE_18__ {scalar_t__ numOfRows; TYPE_2__** result; } ;
struct TYPE_17__ {scalar_t__ pointsToRead; scalar_t__ numOfOutputCols; TYPE_10__** sdata; } ;
struct TYPE_14__ {scalar_t__ outputBytes; } ;
struct TYPE_13__ {char* data; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SOutputRes ;
typedef TYPE_6__ SMeterQuerySupportObj ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_10__**,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_6(SMeterQuerySupportObj *VAR_1, SOutputRes *VAR_2, int32_t VAR_3) {
  SQueryRuntimeEnv *VAR_4 = &VAR_1->runtimeEnv;
  SQuery * VAR_5 = VAR_4->pQuery;

  int32_t VAR_6 = 0;
  int32_t VAR_7 = 0;
  int32_t VAR_8 = 1;

  FUNC_2("QInfo:%p start to copy data to dest buf", FUNC_0(VAR_1->runtimeEnv.pQuery));

  int32_t VAR_9 = FUNC_4(VAR_1);

  if (VAR_3 == VAR_0) {
    VAR_7 = VAR_1->subgroupIdx;
  } else {
    VAR_7 = VAR_9 - VAR_1->subgroupIdx - 1;
    VAR_8 = -1;
  }

  for (int32_t VAR_10 = VAR_7; (VAR_10 < VAR_9) && (VAR_10 >= 0); VAR_10 += VAR_8) {
    if (VAR_2[VAR_10].numOfRows == 0) {
      VAR_1->offset = 0;
      VAR_1->subgroupIdx += 1;
      continue;
    }

    FUNC_1(VAR_2[VAR_10].numOfRows >= 0 && VAR_1->offset <= 1);

    tFilePage **VAR_11 = VAR_2[VAR_10].result;

    int32_t VAR_12 = VAR_2[VAR_10].numOfRows - VAR_1->offset;
    int32_t VAR_13 = VAR_1->offset;

    if (VAR_12 > VAR_5->pointsToRead - VAR_6) {

      VAR_12 = VAR_5->pointsToRead - VAR_6;
      VAR_1->offset += VAR_12;
    } else {
      VAR_1->offset = 0;
      VAR_1->subgroupIdx += 1;
    }

    for (int32_t VAR_14 = 0; VAR_14 < VAR_5->numOfOutputCols; ++VAR_14) {
      int32_t VAR_15 = VAR_4->pCtx[VAR_14].outputBytes;
      char * VAR_16 = VAR_5->sdata[VAR_14]->data + VAR_6 * VAR_15;

      FUNC_5(VAR_16, VAR_11[VAR_14]->data + VAR_13 * VAR_15, VAR_15 * VAR_12);
    }

    VAR_6 += VAR_12;
    if (VAR_6 == VAR_5->pointsToRead) {
      break;
    }
  }

  FUNC_2("QInfo:%p done copy data to dst buf", FUNC_0(VAR_1->runtimeEnv.pQuery));




  return VAR_6;
}
