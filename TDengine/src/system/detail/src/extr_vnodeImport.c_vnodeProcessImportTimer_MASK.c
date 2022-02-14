
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_18__ {scalar_t__ commitInProcess; int vmutex; } ;
struct TYPE_17__ {void* signature; int retry; struct TYPE_17__* opayload; TYPE_2__* pShell; scalar_t__ importedRows; TYPE_3__* pObj; } ;
struct TYPE_16__ {size_t vnode; scalar_t__ numOfQueries; int meterId; int sid; } ;
struct TYPE_15__ {int code; scalar_t__ count; int numOfTotalPoints; } ;
struct TYPE_14__ {int version; int vmutex; scalar_t__ pCachePool; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SShellObj ;
typedef TYPE_3__ SMeterObj ;
typedef TYPE_4__ SImportInfo ;
typedef TYPE_5__ SCachePool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,size_t,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void (*) (void*,void*),int,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_8 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;
 int VAR_5 ;

void FUNC_10(void *VAR_6, void *VAR_7) {
  SImportInfo *VAR_8 = (SImportInfo *)VAR_6;
  if (VAR_8 == ((void*)0) || VAR_8->signature != VAR_6) {
    FUNC_0("import timer is messed up, signature:%p", VAR_8);
    return;
  }

  SMeterObj *VAR_9 = VAR_8->pObj;
  SVnodeObj *VAR_10 = &VAR_4[VAR_9->vnode];
  SCachePool *VAR_11 = (SCachePool *)VAR_10->pCachePool;
  SShellObj *VAR_12 = VAR_8->pShell;

  VAR_8->retry++;


  int32_t VAR_13 = FUNC_9(VAR_9, VAR_2);
  if (VAR_13 >= VAR_1) {
    FUNC_0("vid:%d sid:%d id:%s, meter is deleted, failed to import, state:%d",
           VAR_9->vnode, VAR_9->sid, VAR_9->meterId, VAR_13);
    return;
  }

  int32_t VAR_14 = 0;
  FUNC_3(&VAR_10->vmutex);
  VAR_14 = VAR_9->numOfQueries;
  FUNC_4(&VAR_10->vmutex);


  int32_t VAR_15 = 0;
  FUNC_3(&VAR_11->vmutex);
  if (((VAR_15 = VAR_11->commitInProcess) == 1) || VAR_14 > 0 || VAR_13 != VAR_3) {
    FUNC_4(&VAR_11->vmutex);
    FUNC_6(VAR_9, VAR_2);

    if (VAR_8->retry < 1000) {
      FUNC_1("vid:%d sid:%d id:%s, import failed, retry later. commit in process or queries on it, or not ready."
             "commitInProcess:%d, numOfQueries:%d, state:%d", VAR_9->vnode, VAR_9->sid, VAR_9->meterId,
             VAR_15, VAR_14, VAR_13);

      FUNC_5(FUNC_10, 10, VAR_8, VAR_5);
      return;
    } else {
      VAR_12->code = VAR_0;
    }
  } else {
    VAR_11->commitInProcess = 1;
    FUNC_4(&VAR_11->vmutex);
    int VAR_16 = FUNC_7(VAR_9, VAR_8);
    if (VAR_12) {
      VAR_12->code = VAR_16;
      VAR_12->numOfTotalPoints += VAR_8->importedRows;
    }
  }

  FUNC_6(VAR_9, VAR_2);

  VAR_10->version++;


  if (VAR_12) {
    VAR_12->count--;
    if (VAR_12->count <= 0) FUNC_8(VAR_8->pShell, VAR_12->code, VAR_12->numOfTotalPoints);
  }

  VAR_8->signature = ((void*)0);
  FUNC_2(VAR_8->opayload);
  FUNC_2(VAR_8);
}
