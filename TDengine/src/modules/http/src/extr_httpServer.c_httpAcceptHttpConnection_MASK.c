
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_9__ {TYPE_4__* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int socklen_t ;
typedef int sigset_t ;
typedef int clientAddr ;
struct TYPE_12__ {int fd; struct TYPE_12__* prev; struct TYPE_12__* next; TYPE_2__* pThread; int ipstr; } ;
struct TYPE_11__ {int online; int numOfThreads; TYPE_2__* pThreads; int label; int serverPort; int serverIp; } ;
struct TYPE_10__ {int threadMutex; int fdReady; scalar_t__ numOfFds; TYPE_4__* pHead; int pServer; int label; int pollFd; } ;
typedef TYPE_2__ HttpThread ;
typedef TYPE_3__ HttpServer ;
typedef TYPE_4__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int,struct epoll_event*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,TYPE_4__*,int,char*,int,int ,scalar_t__,int) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,char*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int,int) ;
 int FUNC_21 (int) ;
 int VAR_10 ;

void FUNC_22(void *VAR_11) {
  int VAR_12 = -1;
  struct sockaddr_in VAR_13;
  int VAR_14;
  int VAR_15 = 0;
  HttpThread * VAR_16;
  HttpServer * VAR_17;
  HttpContext * VAR_18;
  int VAR_19;

  VAR_17 = (HttpServer *)VAR_11;

  sigset_t VAR_20;
  FUNC_14(&VAR_20);
  FUNC_13(&VAR_20, VAR_7);
  FUNC_12(VAR_8, &VAR_20, ((void*)0));

  VAR_14 = FUNC_19(VAR_17->serverIp, VAR_17->serverPort);

  if (VAR_14 < 0) {
    FUNC_4("http server:%s, failed to open http socket, ip:%s:%u", VAR_17->label, VAR_17->serverIp,
              VAR_17->serverPort);
    return;
  } else {
    FUNC_6("http service init success at ip:%s:%u", VAR_17->serverIp, VAR_17->serverPort);
    VAR_17->online = 1;
  }

  while (1) {
    socklen_t VAR_21 = sizeof(VAR_13);
    VAR_12 = (int)FUNC_0(VAR_14, (struct sockaddr *)&VAR_13, &VAR_21);

    if (VAR_12 < 3) {
      FUNC_4("http server:%s, accept connect failure, errno:%d, reason:%s", VAR_17->label, VAR_9, FUNC_16(VAR_9));
      continue;
    }

    VAR_19 = 1;
    for (int VAR_22 = 0; VAR_22 < VAR_17->numOfThreads; ++VAR_22) {
      VAR_19 += VAR_17->pThreads[VAR_22].numOfFds;
    }

    if (VAR_19 > VAR_10 * 20) {
      FUNC_4("fd:%d, ip:%s:%u, totalFds:%d larger than httpCacheSessions:%d*20, refuse connection",
              VAR_12, FUNC_8(VAR_13.sin_addr), FUNC_2(VAR_13.sin_port), VAR_19, VAR_10);
      FUNC_17(VAR_12);
      continue;
    }

    FUNC_18(VAR_12);
    FUNC_20(VAR_12, 1);


    VAR_16 = VAR_17->pThreads + VAR_15;

    VAR_18 = FUNC_3(VAR_17);
    if (VAR_18 == ((void*)0)) {
      FUNC_4("fd:%d, ip:%s:%u, no enough resource to allocate http context", VAR_12, FUNC_8(VAR_13.sin_addr),
                FUNC_2(VAR_13.sin_port));
      FUNC_17(VAR_12);
      continue;
    }

    FUNC_7("context:%p, fd:%d, ip:%s:%u, thread:%s, numOfFds:%d, totalFds:%d, accept a new connection",
            VAR_18, VAR_12, FUNC_8(VAR_13.sin_addr), FUNC_2(VAR_13.sin_port), VAR_16->label,
            VAR_16->numOfFds, VAR_19);

    VAR_18->fd = VAR_12;
    FUNC_15(VAR_18->ipstr, "%s:%d", FUNC_8(VAR_13.sin_addr), FUNC_2(VAR_13.sin_port));
    VAR_18->pThread = VAR_16;

    struct epoll_event VAR_23;
    VAR_23.events = VAR_2 | VAR_3 | VAR_5 | VAR_0 | VAR_1 | VAR_4;

    VAR_23.data.ptr = VAR_18;
    if (FUNC_1(VAR_16->pollFd, VAR_6, VAR_12, &VAR_23) < 0) {
      FUNC_4("context:%p, fd:%d, ip:%s:%u, thread:%s, failed to add http fd for epoll, error:%s",
                VAR_18, VAR_12, FUNC_8(VAR_13.sin_addr), FUNC_2(VAR_13.sin_port), VAR_16->label,
                FUNC_16(VAR_9));
      FUNC_5(VAR_16->pServer, VAR_18);
      FUNC_21(VAR_12);
      continue;
    }


    FUNC_10(&(VAR_16->threadMutex));

    VAR_18->next = VAR_16->pHead;

    if (VAR_16->pHead) (VAR_16->pHead)->prev = VAR_18;

    VAR_16->pHead = VAR_18;

    VAR_16->numOfFds++;
    FUNC_9(&VAR_16->fdReady);

    FUNC_11(&(VAR_16->threadMutex));


    VAR_15++;
    VAR_15 = VAR_15 % VAR_17->numOfThreads;
  }
}
