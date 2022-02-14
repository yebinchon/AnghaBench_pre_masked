
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_10__ {int rowsInFileBlock; } ;
struct TYPE_16__ {TYPE_1__ cfg; } ;
struct TYPE_15__ {size_t vnode; } ;
struct TYPE_13__ {scalar_t__ rowSize; scalar_t__ numOfOutputCols; TYPE_3__** sdata; TYPE_2__* pSelectExpr; } ;
struct TYPE_14__ {scalar_t__ bufIndex; TYPE_4__ query; TYPE_6__* pObj; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ resBytes; } ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SQInfo ;
typedef TYPE_6__ SMeterObj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (char*,scalar_t__,int,char*,scalar_t__,int ,int ,int ) ;
 TYPE_7__* VAR_2 ;

__attribute__((used)) static void FUNC_5(SQInfo *VAR_3, int32_t VAR_4, char* VAR_5, int32_t* VAR_6) {
  SMeterObj* VAR_7 = VAR_3->pObj;
  SQuery* VAR_8 = &VAR_3->query;

  int VAR_9 = VAR_2[VAR_7->vnode].cfg.rowsInFileBlock;
  int32_t VAR_10 = VAR_3->query.rowSize * VAR_4;

  if (VAR_10 >= VAR_1 && VAR_1 > 0) {
    char* VAR_11 = FUNC_2((size_t) VAR_10);


    char* VAR_12 = VAR_11;
    for (int32_t VAR_13 = 0; VAR_13 < VAR_8->numOfOutputCols; ++VAR_13) {
      int32_t VAR_14 = VAR_8->pSelectExpr[VAR_13].resBytes;

      FUNC_3(VAR_12, VAR_8->sdata[VAR_13]->data + VAR_14 * VAR_9 * VAR_3->bufIndex, VAR_14 * VAR_4);
      VAR_12 += VAR_14 * VAR_4;
    }

    *VAR_6 = FUNC_4(VAR_11, VAR_10, 1, VAR_5, VAR_10 + VAR_0, 0, 0, 0);

    FUNC_0("QInfo:%p compress rsp msg, before:%d, after:%d", VAR_3, VAR_10, *VAR_6);
    FUNC_1(VAR_11);
  } else {
    for (int32_t VAR_15 = 0; VAR_15 < VAR_8->numOfOutputCols; ++VAR_15) {
      int32_t VAR_16 = VAR_8->pSelectExpr[VAR_15].resBytes;

      FUNC_3(VAR_5, VAR_8->sdata[VAR_15]->data + VAR_16 * VAR_9 * VAR_3->bufIndex, VAR_16 * VAR_4);
      VAR_5 += VAR_16 * VAR_4;
    }
  }
}
