
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ commitInProcess; } ;
struct TYPE_14__ {scalar_t__ lastKey; scalar_t__ commit; int rows; int payload; } ;
struct TYPE_13__ {scalar_t__ lastKeyOnFile; size_t vnode; } ;
struct TYPE_12__ {scalar_t__ pCachePool; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;
typedef TYPE_3__ SImportInfo ;
typedef TYPE_4__ SCachePool ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *) ;

int FUNC_4(SMeterObj *VAR_1, SImportInfo *VAR_2) {
  int VAR_3 = 0;

  if (VAR_2->lastKey > VAR_1->lastKeyOnFile) {
    VAR_3 = FUNC_1(VAR_2, VAR_2->payload, VAR_2->rows);
  } else if (VAR_2->lastKey < VAR_1->lastKeyOnFile) {
    VAR_3 = FUNC_2(VAR_2, VAR_2->payload, VAR_2->rows);
  } else {
    VAR_3 = FUNC_0(VAR_2, VAR_2->payload, VAR_2->rows);
  }

  SVnodeObj *VAR_4 = &VAR_0[VAR_1->vnode];
  SCachePool *VAR_5 = (SCachePool *)VAR_4->pCachePool;
  VAR_5->commitInProcess = 0;

  if (VAR_2->commit) FUNC_3(VAR_4, ((void*)0));

  return VAR_3;
}
