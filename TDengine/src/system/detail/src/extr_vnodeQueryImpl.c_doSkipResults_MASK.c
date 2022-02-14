
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_17__ {scalar_t__ offset; } ;
struct TYPE_12__ {int order; } ;
struct TYPE_19__ {scalar_t__ pointsRead; size_t pointsOffset; size_t pointsToRead; size_t numOfOutputCols; TYPE_6__ limit; TYPE_4__** sdata; TYPE_3__* pSelectExpr; TYPE_1__ order; int over; } ;
struct TYPE_18__ {TYPE_5__* pCtx; TYPE_8__* pQuery; } ;
struct TYPE_16__ {size_t outputBytes; size_t aOutputBuf; size_t ptsOutputBuf; } ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_13__ {size_t functionId; } ;
struct TYPE_14__ {TYPE_2__ pBase; } ;
typedef TYPE_7__ SQueryRuntimeEnv ;
typedef TYPE_8__ SQuery ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_3 (TYPE_7__*) ;

void FUNC_4(SQueryRuntimeEnv *VAR_5) {
  SQuery *VAR_6 = VAR_5->pQuery;
  if (VAR_6->pointsRead == 0 || VAR_6->limit.offset == 0) {
    return;
  }

  if (VAR_6->pointsRead <= VAR_6->limit.offset) {
    VAR_6->limit.offset -= VAR_6->pointsRead;

    VAR_6->pointsRead = 0;
    VAR_6->pointsOffset = VAR_6->pointsToRead;

    FUNC_3(VAR_5);


    VAR_6->over &= (~VAR_0);
  } else {
    int32_t VAR_7 = (int32_t)VAR_6->limit.offset;
    int32_t VAR_8 = VAR_6->pointsRead;

    VAR_6->pointsRead -= VAR_7;

    int32_t VAR_9 = FUNC_0(VAR_6->order.order);

    for (int32_t VAR_10 = 0; VAR_10 < VAR_6->numOfOutputCols; ++VAR_10) {
      int32_t VAR_11 = VAR_6->pSelectExpr[VAR_10].pBase.functionId;

      int32_t VAR_12 = VAR_5->pCtx[VAR_10].outputBytes;

      if (FUNC_1(VAR_6)) {
        FUNC_2(VAR_6->sdata[VAR_10]->data, VAR_6->sdata[VAR_10]->data + VAR_12 * VAR_7, VAR_6->pointsRead * VAR_12);
      } else {
        int32_t VAR_13 = VAR_6->pointsToRead;

        FUNC_2(VAR_6->sdata[VAR_10]->data + (VAR_13 - VAR_6->pointsRead) * VAR_12,
                VAR_6->sdata[VAR_10]->data + (VAR_13 - VAR_8) * VAR_12, VAR_6->pointsRead * VAR_12);
      }

      VAR_5->pCtx[VAR_10].aOutputBuf -= VAR_12 * VAR_7 * VAR_9;

      if (VAR_11 == VAR_2 || VAR_11 == VAR_3 || VAR_11 == VAR_1) {
        VAR_5->pCtx[VAR_10].ptsOutputBuf -= VAR_4 * VAR_7 * VAR_9;
      }
    }

    VAR_6->limit.offset = 0;
  }
}
