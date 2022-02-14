
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_attr_t ;
struct TYPE_5__ {short port; int numOfThreads; int thread; TYPE_1__* pThreadObj; int label; int ip; } ;
struct TYPE_4__ {scalar_t__ pollFd; int threadId; int thread; int fdReady; int threadMutex; void* shandle; int label; void* processData; } ;
typedef TYPE_1__ SThreadObj ;
typedef TYPE_2__ SServerObj ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,void*,void*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,char*,char*,short,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void *FUNC_13(char *VAR_4, short VAR_5, char *VAR_6, int VAR_7, void *VAR_8, void *VAR_9) {
  int VAR_10;
  SServerObj * VAR_11;
  pthread_attr_t VAR_12;
  SThreadObj * VAR_13;

  VAR_11 = (SServerObj *)FUNC_1(sizeof(SServerObj));
  FUNC_9(VAR_11->ip, VAR_4);
  VAR_11->port = VAR_5;
  FUNC_9(VAR_11->label, VAR_6);
  VAR_11->numOfThreads = VAR_7;

  VAR_11->pThreadObj = (SThreadObj *)FUNC_1(sizeof(SThreadObj) * (size_t)VAR_7);
  if (VAR_11->pThreadObj == ((void*)0)) {
    FUNC_11("TCP:%s no enough memory", VAR_6);
    return ((void*)0);
  }
  FUNC_2(VAR_11->pThreadObj, 0, sizeof(SThreadObj) * (size_t)VAR_7);

  VAR_13 = VAR_11->pThreadObj;
  for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
    VAR_13->processData = VAR_8;
    FUNC_9(VAR_13->label, VAR_6);
    VAR_13->shandle = VAR_9;

    if (FUNC_8(&(VAR_13->threadMutex), ((void*)0)) < 0) {
      FUNC_11("%s failed to init TCP process data mutex, reason:%s", VAR_6, FUNC_10(VAR_1));
      return ((void*)0);
    }

    if (FUNC_6(&(VAR_13->fdReady), ((void*)0)) != 0) {
      FUNC_11("%s init TCP condition variable failed, reason:%s\n", VAR_6, FUNC_10(VAR_1));
      return ((void*)0);
    }

    VAR_13->pollFd = FUNC_0(10);
    if (VAR_13->pollFd < 0) {
      FUNC_11("%s failed to create TCP epoll", VAR_6);
      return ((void*)0);
    }

    FUNC_4(&VAR_12);
    FUNC_5(&VAR_12, VAR_0);
    if (FUNC_7(&(VAR_13->thread), &VAR_12, (void *)VAR_3, (void *)(VAR_13)) != 0) {
      FUNC_11("%s failed to create TCP process data thread, reason:%s", VAR_6, FUNC_10(VAR_1));
      return ((void*)0);
    }

    VAR_13->threadId = VAR_10;
    VAR_13++;
  }

  FUNC_4(&VAR_12);
  FUNC_5(&VAR_12, VAR_0);
  if (FUNC_7(&(VAR_11->thread), &VAR_12, (void *)VAR_2, (void *)(VAR_11)) != 0) {
    FUNC_11("%s failed to create TCP accept thread, reason:%s", VAR_6, FUNC_10(VAR_1));
    return ((void*)0);
  }
  FUNC_3(&VAR_12);
  FUNC_12("%s TCP server is initialized, ip:%s port:%u numOfThreads:%d", VAR_6, VAR_4, VAR_5, VAR_7);

  return (void *)VAR_11;
}
