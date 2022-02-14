
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nKeyField; } ;
struct TYPE_8__ {scalar_t__ errCode; int nField; } ;
struct TYPE_7__ {TYPE_4__* pUnpacked; TYPE_1__* pSorter; } ;
struct TYPE_6__ {TYPE_5__* pKeyInfo; } ;
typedef TYPE_2__ SortSubtask ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(SortSubtask *VAR_2){
  if( VAR_2->pUnpacked==0 ){
    VAR_2->pUnpacked = FUNC_0(VAR_2->pSorter->pKeyInfo);
    if( VAR_2->pUnpacked==0 ) return VAR_0;
    VAR_2->pUnpacked->nField = VAR_2->pSorter->pKeyInfo->nKeyField;
    VAR_2->pUnpacked->errCode = 0;
  }
  return VAR_1;
}
