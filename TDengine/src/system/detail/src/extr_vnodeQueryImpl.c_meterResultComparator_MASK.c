
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ tFilePage ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_7__ {int pageIdx; int rowIdx; } ;
struct TYPE_6__ {int * pInfoEx; int pSupporter; TYPE_3__* pPosition; } ;
typedef TYPE_2__ SCompSupporter ;
typedef TYPE_3__ Position ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int) ;

int32_t FUNC_1(const void *VAR_1, const void *VAR_2, void *VAR_3) {
  int32_t VAR_4 = *(int32_t *)VAR_1;
  int32_t VAR_5 = *(int32_t *)VAR_2;

  SCompSupporter *VAR_6 = (SCompSupporter *)VAR_3;

  Position VAR_7 = VAR_6->pPosition[VAR_4];
  Position VAR_8 = VAR_6->pPosition[VAR_5];


  if (VAR_7.pageIdx == -1 && VAR_7.rowIdx == -1) {
    return 1;
  }


  if (VAR_8.pageIdx == -1 && VAR_8.rowIdx == -1) {
    return -1;
  }

  tFilePage *VAR_9 = FUNC_0(VAR_6->pSupporter, VAR_6->pInfoEx[VAR_4], VAR_7.pageIdx);
  int64_t VAR_10 = *(int64_t *)(VAR_9->data + VAR_0 * VAR_7.rowIdx);

  tFilePage *VAR_11 = FUNC_0(VAR_6->pSupporter, VAR_6->pInfoEx[VAR_5], VAR_8.pageIdx);
  int64_t VAR_12 = *(int64_t *)(VAR_11->data + VAR_0 * VAR_8.rowIdx);

  if (VAR_10 == VAR_12) {
    return 0;
  }

  return VAR_10 > VAR_12 ? 1 : -1;
}
