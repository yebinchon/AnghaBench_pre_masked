
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t int32_t ;
struct TYPE_7__ {int vnodeIndex; } ;
struct TYPE_10__ {size_t numOfAlloc; int * resultInfo; TYPE_1__ cur; scalar_t__ lastResRows; void* pageList; scalar_t__ numOfPages; void* lastKey; void* ekey; void* skey; } ;
struct TYPE_9__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_8__ {int interResBytes; } ;
typedef void* TSKEY ;
typedef int SResultInfo ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterQueryInfo ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (int *,int ,int) ;

SMeterQueryInfo *FUNC_2(SQuery *VAR_1, TSKEY VAR_2, TSKEY VAR_3) {
  SMeterQueryInfo *VAR_4 = FUNC_0(1, sizeof(SMeterQueryInfo));

  VAR_4->skey = VAR_2;
  VAR_4->ekey = VAR_3;
  VAR_4->lastKey = VAR_2;

  VAR_4->numOfPages = 0;
  VAR_4->numOfAlloc = VAR_0;
  VAR_4->pageList = FUNC_0(VAR_4->numOfAlloc, sizeof(uint32_t));
  VAR_4->lastResRows = 0;

  VAR_4->cur.vnodeIndex = -1;

  VAR_4->resultInfo = FUNC_0((size_t)VAR_1->numOfOutputCols, sizeof(SResultInfo));
  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->numOfOutputCols; ++VAR_5) {
    SResultInfo *VAR_6 = &VAR_4->resultInfo[VAR_5];
    FUNC_1(VAR_6, VAR_1->pSelectExpr[VAR_5].interResBytes, 1);
  }

  return VAR_4;
}
