
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct TYPE_10__ {int fd; struct TYPE_10__* prev; struct TYPE_10__* next; TYPE_2__* pThreadObj; } ;
struct TYPE_9__ {int numOfThreads; int label; TYPE_2__* pThreadObj; int port; int ip; } ;
struct TYPE_8__ {int numOfFds; int threadId; int threadMutex; int fdReady; TYPE_4__* pHead; int pollFd; } ;
typedef TYPE_2__ SThreadObj ;
typedef TYPE_3__ SServerObj ;
typedef TYPE_4__ SFdObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int,struct epoll_event*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (char*,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_4__*) ;

void FUNC_13(void *VAR_5) {
  int VAR_6 = -1;
  int VAR_7;
  int VAR_8 = 0;
  SThreadObj * VAR_9;
  SServerObj * VAR_10;
  SFdObj * VAR_11;
  struct epoll_event VAR_12;

  VAR_10 = (SServerObj *)VAR_5;
  VAR_7 = FUNC_11(VAR_10->ip, VAR_10->port);

  if (VAR_7 < 0) {
    FUNC_9("%s failed to open UD socket, ip:%s, port:%u", VAR_10->label, VAR_10->ip, VAR_10->port);
    return;
  } else {
    FUNC_10("%s UD server is ready, ip:%s, port:%u", VAR_10->label, VAR_10->ip, VAR_10->port);
  }

  while (1) {
    VAR_6 = FUNC_0(VAR_7, ((void*)0), ((void*)0));

    if (VAR_6 < 0) {
      FUNC_9("%s UD accept failure, errno:%d, reason:%s", VAR_10->label, VAR_4, FUNC_8(VAR_4));
      continue;
    }


    VAR_9 = VAR_10->pThreadObj + VAR_8;

    VAR_11 = (SFdObj *)FUNC_3(sizeof(SFdObj));
    if (VAR_11 == ((void*)0)) {
      FUNC_9("%s no enough resource to allocate TCP FD IDs", VAR_10->label);
      FUNC_1(VAR_6);
      continue;
    }

    FUNC_4(VAR_11, 0, sizeof(SFdObj));
    VAR_11->fd = VAR_6;
    VAR_11->pThreadObj = VAR_9;

    VAR_12.events = VAR_0 | VAR_1 | VAR_2;
    VAR_12.data.ptr = VAR_11;
    if (FUNC_2(VAR_9->pollFd, VAR_3, VAR_6, &VAR_12) < 0) {
      FUNC_9("%s failed to add UD FD for epoll, error:%s", VAR_10->label, FUNC_8(VAR_4));
      FUNC_12(VAR_11);
      FUNC_1(VAR_6);
      continue;
    }


    FUNC_6(&(VAR_9->threadMutex));

    VAR_11->next = VAR_9->pHead;

    if (VAR_9->pHead) (VAR_9->pHead)->prev = VAR_11;

    VAR_9->pHead = VAR_11;

    VAR_9->numOfFds++;
    FUNC_5(&VAR_9->fdReady);

    FUNC_7(&(VAR_9->threadMutex));

    FUNC_10("%s UD thread:%d, a new connection, numOfFds:%d", VAR_10->label, VAR_9->threadId,
           VAR_9->numOfFds);


    VAR_8++;
    VAR_8 = VAR_8 % VAR_10->numOfThreads;
  }
}
