
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_1__ tFilePage ;
typedef int int64_t ;
typedef size_t int32_t ;
struct TYPE_8__ {int rowIdx; int pageIdx; } ;
struct TYPE_7__ {int * pInfoEx; int pSupporter; TYPE_3__* pPosition; } ;
typedef TYPE_2__ SCompSupporter ;
typedef TYPE_3__ Position ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;

int64_t FUNC_1(SCompSupporter *VAR_1, int32_t VAR_2) {
  Position * VAR_3 = &VAR_1->pPosition[VAR_2];
  tFilePage *VAR_4 = FUNC_0(VAR_1->pSupporter, VAR_1->pInfoEx[VAR_2], VAR_3->pageIdx);
  return *(int64_t *)(VAR_4->data + VAR_0 * VAR_3->rowIdx);
}
