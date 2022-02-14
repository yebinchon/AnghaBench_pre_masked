
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_attr_t ;
struct TYPE_6__ {int numOfThreads; char* label; int serverPort; int serverIp; int thread; int processData; TYPE_1__* pThreads; } ;
struct TYPE_5__ {char* label; int threadId; scalar_t__ pollFd; int thread; int fdReady; int threadMutex; int processData; TYPE_2__* pServer; } ;
typedef TYPE_1__ HttpThread ;
typedef TYPE_2__ HttpServer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,void*,void*) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (char*,char*,char*,int) ;
 int FUNC_12 (int ) ;

bool FUNC_13(HttpServer *VAR_5) {
  int VAR_6;
  pthread_attr_t VAR_7;
  HttpThread * VAR_8;

  VAR_5->pThreads = (HttpThread *)FUNC_3(sizeof(HttpThread) * (size_t)VAR_5->numOfThreads);
  if (VAR_5->pThreads == ((void*)0)) {
    FUNC_1("init error no enough memory");
    return 0;
  }
  FUNC_4(VAR_5->pThreads, 0, sizeof(HttpThread) * (size_t)VAR_5->numOfThreads);

  FUNC_6(&VAR_7);
  FUNC_7(&VAR_7, VAR_1);
  VAR_8 = VAR_5->pThreads;
  for (VAR_6 = 0; VAR_6 < VAR_5->numOfThreads; ++VAR_6) {
    FUNC_11(VAR_8->label, "%s%d", VAR_5->label, VAR_6);
    VAR_8->pServer = VAR_5;
    VAR_8->processData = VAR_5->processData;
    VAR_8->threadId = VAR_6;

    if (FUNC_10(&(VAR_8->threadMutex), ((void*)0)) < 0) {
      FUNC_1("http thread:%s, failed to init HTTP process data mutex, reason:%s", VAR_8->label, FUNC_12(VAR_2));
      return 0;
    }

    if (FUNC_8(&(VAR_8->fdReady), ((void*)0)) != 0) {
      FUNC_1("http thread:%s, init HTTP condition variable failed, reason:%s", VAR_8->label, FUNC_12(VAR_2));
      return 0;
    }

    VAR_8->pollFd = FUNC_0(VAR_0);
    if (VAR_8->pollFd < 0) {
      FUNC_1("http thread:%s, failed to create HTTP epoll", VAR_8->label);
      return 0;
    }

    if (FUNC_9(&(VAR_8->thread), &VAR_7, (void *)VAR_4, (void *)(VAR_8)) != 0) {
      FUNC_1("http thread:%s, failed to create HTTP process data thread, reason:%s",
                VAR_8->label, FUNC_12(VAR_2));
      return 0;
    }

    FUNC_2("http thread:%p:%s, initialized", VAR_8, VAR_8->label);
    VAR_8++;
  }

  if (FUNC_9(&(VAR_5->thread), &VAR_7, (void *)VAR_3, (void *)(VAR_5)) != 0) {
    FUNC_1("http server:%s, failed to create Http accept thread, reason:%s", VAR_5->label, FUNC_12(VAR_2));
    return 0;
  }

  FUNC_5(&VAR_7);

  FUNC_2("http server:%s, initialized, ip:%s:%u, numOfThreads:%d", VAR_5->label, VAR_5->serverIp,
            VAR_5->serverPort, VAR_5->numOfThreads);
  return 1;
}
