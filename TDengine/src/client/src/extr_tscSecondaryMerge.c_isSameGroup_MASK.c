
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int numOfOrderedCols; scalar_t__* pData; } ;
struct TYPE_13__ {TYPE_1__ orderIdx; } ;
typedef TYPE_2__ tOrderDescriptor ;
struct TYPE_14__ {int data; } ;
typedef TYPE_3__ tFilePage ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_17__ {scalar_t__ functionId; } ;
struct TYPE_16__ {TYPE_2__* pDesc; } ;
struct TYPE_15__ {scalar_t__ nAggTimeInterval; } ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SLocalReducer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int ,char*,int,int ,int ) ;
 TYPE_6__* FUNC_2 (TYPE_4__*,int ) ;

bool FUNC_3(SSqlCmd *VAR_3, SLocalReducer *VAR_4, char *VAR_5, tFilePage *VAR_6) {
  int16_t VAR_7 = FUNC_2(VAR_3, 0)->functionId;


  if (VAR_7 == VAR_2 || VAR_7 == VAR_1) {
    return 0;
  }

  tOrderDescriptor *VAR_8 = VAR_4->pDesc;
  int32_t VAR_9 = VAR_8->orderIdx.numOfOrderedCols;


  if (VAR_9 <= 0) {
    return 1;
  }

  if (VAR_8->orderIdx.pData[VAR_9 - 1] == VAR_0) {

    FUNC_0(VAR_3->nAggTimeInterval > 0);
    VAR_8->orderIdx.numOfOrderedCols -= 1;
  } else {
    FUNC_0(VAR_3->nAggTimeInterval == 0);
  }


  int32_t VAR_10 = FUNC_1(VAR_8, 1, 0, VAR_5, 1, 0, VAR_6->data);
  VAR_8->orderIdx.numOfOrderedCols = VAR_9;

  return (VAR_10 == 0);
}
