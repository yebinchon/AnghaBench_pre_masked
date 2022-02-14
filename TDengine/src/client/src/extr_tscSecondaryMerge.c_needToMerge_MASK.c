
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ numOfOrderedCols; } ;
struct TYPE_11__ {scalar_t__ tsOrder; TYPE_1__ orderIdx; } ;
typedef TYPE_2__ tOrderDescriptor ;
struct TYPE_12__ {int data; } ;
typedef TYPE_3__ tFilePage ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_14__ {scalar_t__ functionId; } ;
struct TYPE_13__ {int prevRowOfInput; TYPE_2__* pDesc; } ;
typedef int SSqlCmd ;
typedef TYPE_4__ SLocalReducer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int ,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ,int,int ,int ) ;
 TYPE_5__* FUNC_2 (int *,int ) ;

bool FUNC_3(SSqlCmd *VAR_3, SLocalReducer *VAR_4, tFilePage *VAR_5) {
  int32_t VAR_6 = 0;
  int16_t VAR_7 = FUNC_2(VAR_3, 0)->functionId;

  if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {
    VAR_6 = 1;
  } else {
    tOrderDescriptor *VAR_8 = VAR_4->pDesc;
    if (VAR_8->orderIdx.numOfOrderedCols > 0) {
      if (VAR_8->tsOrder == VAR_2) {

        VAR_6 = FUNC_0(VAR_4->pDesc, 1, 0, VAR_4->prevRowOfInput, 1, 0, VAR_5->data);
      } else {
        VAR_6 = FUNC_1(VAR_4->pDesc, 1, 0, VAR_4->prevRowOfInput, 1, 0, VAR_5->data);
      }
    }
  }


  return (VAR_6 == 0);
}
