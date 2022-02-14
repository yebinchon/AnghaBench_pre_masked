
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nKey; void* aKey; } ;
typedef TYPE_2__ VdbeSorterIter ;
struct TYPE_7__ {size_t* aTree; TYPE_1__* pRecord; TYPE_2__* aIter; } ;
typedef TYPE_3__ VdbeSorter ;
struct TYPE_5__ {int nVal; void* pVal; } ;



__attribute__((used)) static void *FUNC_0(
  const VdbeSorter *VAR_0,
  int *VAR_1
){
  void *VAR_2;
  if( VAR_0->aTree ){
    VdbeSorterIter *VAR_3;
    VAR_3 = &VAR_0->aIter[ VAR_0->aTree[1] ];
    *VAR_1 = VAR_3->nKey;
    VAR_2 = VAR_3->aKey;
  }else{
    *VAR_1 = VAR_0->pRecord->nVal;
    VAR_2 = VAR_0->pRecord->pVal;
  }
  return VAR_2;
}
