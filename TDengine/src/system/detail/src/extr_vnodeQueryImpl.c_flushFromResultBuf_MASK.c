
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tFilePage ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_14__ {int len; } ;
struct TYPE_13__ {int lastPageId; int groupResultSize; int numOfGroupResultPages; int numOfPages; char* meterOutputMMapBuf; scalar_t__ numOfMeters; } ;
struct TYPE_12__ {int numOfOutputCols; int pointsToRead; TYPE_5__** sdata; } ;
struct TYPE_11__ {TYPE_1__* pCtx; } ;
struct TYPE_10__ {int outputBytes; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterQuerySupportObj ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (char*,TYPE_5__*,int) ;

void FUNC_2(SMeterQuerySupportObj *VAR_1, const SQuery *VAR_2, const SQueryRuntimeEnv *VAR_3) {
  int32_t VAR_4 = VAR_1->lastPageId + 1;
  int64_t VAR_5 = VAR_4 * VAR_0 +
                    VAR_1->groupResultSize * (VAR_1->numOfGroupResultPages + 1);

  int32_t VAR_6 = VAR_1->numOfPages;
  if (VAR_6 * VAR_0 < VAR_5) {
    while (VAR_6 * VAR_0 < VAR_5) {
      VAR_6 += VAR_1->numOfMeters;
    }

    FUNC_0(VAR_1, VAR_6);
  }

  char *VAR_7 = VAR_1->meterOutputMMapBuf + VAR_0 * VAR_4 +
                       VAR_1->groupResultSize * VAR_1->numOfGroupResultPages;

  for (int32_t VAR_8 = 0; VAR_8 < VAR_2->numOfOutputCols; ++VAR_8) {
    int32_t VAR_9 = VAR_3->pCtx[VAR_8].outputBytes * VAR_2->sdata[0]->len + sizeof(tFilePage);
    FUNC_1(VAR_7, VAR_2->sdata[VAR_8], VAR_9);

    VAR_7 += VAR_3->pCtx[VAR_8].outputBytes * VAR_2->pointsToRead + sizeof(tFilePage);
  }

  VAR_1->numOfGroupResultPages += 1;
}
