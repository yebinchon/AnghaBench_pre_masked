
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_26__ {int numOfElems; scalar_t__ data; } ;
typedef TYPE_5__ tFilePage ;
struct TYPE_27__ {int* colOffset; TYPE_4__* pFields; int maxCapacity; } ;
typedef TYPE_6__ tColModel ;
typedef size_t int32_t ;
struct TYPE_24__ {size_t numOfGroupCols; } ;
struct TYPE_23__ {size_t numOfOutputCols; } ;
struct TYPE_22__ {scalar_t__ offset; } ;
struct TYPE_30__ {int interpoType; TYPE_3__ groupbyExpr; TYPE_2__ fieldsInfo; TYPE_1__ slimit; } ;
struct TYPE_28__ {scalar_t__ numOfRows; int code; } ;
struct TYPE_29__ {TYPE_7__ res; TYPE_9__ cmd; } ;
struct TYPE_25__ {int bytes; } ;
struct TYPE_21__ {scalar_t__* pTags; } ;
struct TYPE_20__ {int discard; TYPE_11__ interpolationInfo; scalar_t__ pBufForInterpo; TYPE_6__* resColModel; int nResultBufSize; TYPE_5__* pResultBuf; } ;
typedef TYPE_7__ SSqlRes ;
typedef TYPE_8__ SSqlObj ;
typedef TYPE_9__ SSqlCmd ;
typedef TYPE_10__ SLocalReducer ;
typedef TYPE_11__ SInterpolationInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,TYPE_10__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_6__*,scalar_t__,int,int) ;
 int FUNC_5 (TYPE_11__*,int,int ) ;

bool FUNC_6(SSqlObj *VAR_1, SLocalReducer *VAR_2, bool VAR_3) {
  SSqlCmd * VAR_4 = &VAR_1->cmd;
  SSqlRes * VAR_5 = &VAR_1->res;
  tFilePage *VAR_6 = VAR_2->pResultBuf;
  tColModel *VAR_7 = VAR_2->resColModel;

  VAR_5->code = VAR_0;





  if (VAR_4->slimit.offset > 0) {
    VAR_5->numOfRows = 0;
    VAR_4->slimit.offset -= 1;
    VAR_2->discard = !VAR_3;
    return 0;
  }

  FUNC_3(VAR_7, VAR_6, VAR_7->maxCapacity);
  FUNC_1(VAR_2->pBufForInterpo, VAR_6->data, VAR_2->nResultBufSize);






  SInterpolationInfo *VAR_8 = &VAR_2->interpolationInfo;
  int32_t VAR_9 = VAR_4->fieldsInfo.numOfOutputCols - VAR_4->groupbyExpr.numOfGroupCols;

  for (int32_t VAR_10 = 0; VAR_10 < VAR_4->groupbyExpr.numOfGroupCols; ++VAR_10) {
    FUNC_1(VAR_8->pTags[VAR_10],
           VAR_2->pBufForInterpo + VAR_7->colOffset[VAR_9 + VAR_10] * VAR_6->numOfElems,
           VAR_7->pFields[VAR_9 + VAR_10].bytes);
  }

  FUNC_5(&VAR_2->interpolationInfo, VAR_6->numOfElems, VAR_4->interpoType);
  FUNC_0(VAR_1, VAR_2, VAR_3);

  return 1;
}
