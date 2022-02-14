
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_5__ {int queueSize; char* label; int numOfThreads; int * qthread; scalar_t__ emptySlot; scalar_t__ fullSlot; struct TYPE_5__* queue; int fullSem; int emptySem; int queueMutex; } ;
typedef TYPE_1__ SSchedQueue ;
typedef TYPE_1__ SSchedMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (int *,int ,unsigned int) ;

void *FUNC_12(int VAR_3, int VAR_4, const char *VAR_5) {
  pthread_attr_t VAR_6;
  SSchedQueue * VAR_7 = (SSchedQueue *)FUNC_0(sizeof(SSchedQueue));
  if (VAR_7 == ((void*)0)) {
    FUNC_2("%s: no enough memory for pSched, reason: %s", VAR_5, FUNC_8(VAR_1));
    goto _error;
  }

  FUNC_1(VAR_7, 0, sizeof(SSchedQueue));
  VAR_7->queueSize = VAR_3;
  FUNC_9(VAR_7->label, VAR_5, sizeof(VAR_7->label));
  VAR_7->label[sizeof(VAR_7->label)-1] = '\0';

  if (FUNC_7(&VAR_7->queueMutex, ((void*)0)) < 0) {
    FUNC_2("init %s:queueMutex failed, reason:%s", VAR_7->label, FUNC_8(VAR_1));
    goto _error;
  }

  if (FUNC_11(&VAR_7->emptySem, 0, (unsigned int)VAR_7->queueSize) != 0) {
    FUNC_2("init %s:empty semaphore failed, reason:%s", VAR_7->label, FUNC_8(VAR_1));
    goto _error;
  }

  if (FUNC_11(&VAR_7->fullSem, 0, 0) != 0) {
    FUNC_2("init %s:full semaphore failed, reason:%s", VAR_7->label, FUNC_8(VAR_1));
    goto _error;
  }

  if ((VAR_7->queue = (SSchedMsg *)FUNC_0((size_t)VAR_7->queueSize * sizeof(SSchedMsg))) == ((void*)0)) {
    FUNC_2("%s: no enough memory for queue, reason:%s", VAR_7->label, FUNC_8(VAR_1));
    goto _error;
  }

  FUNC_1(VAR_7->queue, 0, (size_t)VAR_7->queueSize * sizeof(SSchedMsg));
  VAR_7->fullSlot = 0;
  VAR_7->emptySlot = 0;

  VAR_7->qthread = FUNC_0(sizeof(pthread_t) * (size_t)VAR_4);
  if (VAR_7->qthread == ((void*)0)) {
    FUNC_2("%s: no enough memory for qthread, reason: %s", VAR_7->label, FUNC_8(VAR_1));
    goto _error;
  }

  FUNC_4(&VAR_6);
  FUNC_5(&VAR_6, VAR_0);

  for (int VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
    if (FUNC_6(VAR_7->qthread + VAR_8, &VAR_6, VAR_2, (void *)VAR_7) != 0) {
      FUNC_2("%s: failed to create rpc thread, reason:%s", VAR_7->label, FUNC_8(VAR_1));
      goto _error;
    }
    ++VAR_7->numOfThreads;
  }

  FUNC_3("%s scheduler is initialized, numOfThreads:%d", VAR_7->label, VAR_7->numOfThreads);

  return (void *)VAR_7;

_error:
  FUNC_10(VAR_7);
  return ((void*)0);
}
