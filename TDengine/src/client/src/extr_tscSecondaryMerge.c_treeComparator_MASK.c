
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tOrderDescriptor ;
typedef size_t int32_t ;
struct TYPE_6__ {scalar_t__ groupOrderType; int numOfElems; TYPE_2__** pLocalData; int * pDesc; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {int rowIdx; TYPE_1__ filePage; } ;
typedef TYPE_2__ SLocalDataSource ;
typedef TYPE_3__ SCompareParam ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *,int ,int,int ,int ,int,int ) ;
 size_t FUNC_1 (int *,int ,int,int ,int ,int,int ) ;

int32_t FUNC_2(const void *VAR_1, const void *VAR_2, void *VAR_3) {
  int32_t VAR_4 = *(int32_t *)VAR_1;
  int32_t VAR_5 = *(int32_t *)VAR_2;

  SCompareParam * VAR_6 = (SCompareParam *)VAR_3;
  tOrderDescriptor * VAR_7 = VAR_6->pDesc;
  SLocalDataSource **VAR_8 = VAR_6->pLocalData;


  if (VAR_8[VAR_4]->rowIdx == -1) {
    return 1;
  }

  if (VAR_8[VAR_5]->rowIdx == -1) {
    return -1;
  }

  if (VAR_6->groupOrderType == VAR_0) {
    return FUNC_1(VAR_7, VAR_6->numOfElems, VAR_8[VAR_4]->rowIdx, VAR_8[VAR_4]->filePage.data,
                     VAR_6->numOfElems, VAR_8[VAR_5]->rowIdx, VAR_8[VAR_5]->filePage.data);
  } else {
    return FUNC_0(VAR_7, VAR_6->numOfElems, VAR_8[VAR_4]->rowIdx, VAR_8[VAR_4]->filePage.data,
                     VAR_6->numOfElems, VAR_8[VAR_5]->rowIdx, VAR_8[VAR_5]->filePage.data);
  }
}
