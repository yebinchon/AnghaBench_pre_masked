
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {size_t vnode; scalar_t__ lastKeyOnFile; } ;
struct TYPE_9__ {int fileId; } ;
struct TYPE_8__ {scalar_t__ numOfFiles; int cfg; int fileId; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SMeterObj ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,scalar_t__*) ;
 TYPE_1__* VAR_0 ;

bool FUNC_2(SQuery *VAR_1, SMeterObj *VAR_2) {
  SVnodeObj *VAR_3 = &VAR_0[VAR_2->vnode];
  if (VAR_3->numOfFiles <= 0) {
    VAR_1->fileId = -1;
    return 0;
  }

  int64_t VAR_4 = VAR_2->lastKeyOnFile;
  int64_t VAR_5 = FUNC_0(VAR_3->numOfFiles, VAR_3->fileId, &VAR_3->cfg);

  TSKEY VAR_6, VAR_7;
  FUNC_1(VAR_1, &VAR_6, &VAR_7);


  if ((VAR_6 > VAR_4) || (VAR_7 < VAR_5)) {
    VAR_1->fileId = -1;
    return 0;
  }

  return 1;
}
