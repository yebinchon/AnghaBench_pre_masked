
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {scalar_t__ numOfElems; } ;
typedef TYPE_3__ tFilePage ;
typedef size_t int32_t ;
struct TYPE_13__ {TYPE_2__* pCtx; } ;
struct TYPE_15__ {scalar_t__ offset; scalar_t__ numOfGroupResultPages; scalar_t__ subgroupIdx; char* meterOutputMMapBuf; int lastPageId; int groupResultSize; TYPE_4__ runtimeEnv; TYPE_1__* pSidSet; int meterIdx; } ;
struct TYPE_14__ {scalar_t__ pointsToRead; size_t numOfOutputCols; int pointsRead; int * sdata; } ;
struct TYPE_11__ {scalar_t__ outputBytes; } ;
struct TYPE_10__ {scalar_t__ numOfSubSet; int numOfSids; } ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SMeterQuerySupportObj ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;

void FUNC_3(SMeterQuerySupportObj *VAR_1, SQuery *VAR_2) {
  if (VAR_1->offset == VAR_1->numOfGroupResultPages) {
    VAR_1->numOfGroupResultPages = 0;


    FUNC_2(VAR_1);


    if (VAR_1->numOfGroupResultPages == 0 && VAR_1->subgroupIdx == VAR_1->pSidSet->numOfSubSet) {
      VAR_1->meterIdx = VAR_1->pSidSet->numOfSids;
      return;
    }
  }

  SQueryRuntimeEnv *VAR_3 = &VAR_1->runtimeEnv;
  char * VAR_4 = VAR_1->meterOutputMMapBuf + VAR_0 * (VAR_1->lastPageId + 1) +
                 VAR_1->groupResultSize * VAR_1->offset;

  uint64_t VAR_5 = ((tFilePage *)VAR_4)->numOfElems;
  FUNC_0(VAR_5 <= VAR_2->pointsToRead);

  for (int32_t VAR_6 = 0; VAR_6 < VAR_2->numOfOutputCols; ++VAR_6) {
    FUNC_1(VAR_2->sdata[VAR_6], VAR_4, VAR_3->pCtx[VAR_6].outputBytes * VAR_5 + sizeof(tFilePage));
    VAR_4 += VAR_3->pCtx[VAR_6].outputBytes * VAR_2->pointsToRead + sizeof(tFilePage);
  }

  VAR_2->pointsRead += VAR_5;
  VAR_1->offset += 1;
}
