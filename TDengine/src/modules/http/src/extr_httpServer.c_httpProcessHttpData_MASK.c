
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {TYPE_4__* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int sigset_t ;
struct TYPE_19__ {scalar_t__ fd; int accessTimes; int state; int ipstr; TYPE_3__* pThread; struct TYPE_19__* signature; } ;
struct TYPE_18__ {int numOfFds; TYPE_2__* pServer; int (* processData ) (TYPE_4__*) ;int pollFd; int threadMutex; int fdReady; } ;
struct TYPE_17__ {int requestNum; int online; } ;
typedef TYPE_3__ HttpThread ;
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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,struct epoll_event*,int,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (char*,TYPE_4__*,scalar_t__,int ,int ,...) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_4__*) ;

void FUNC_17(void *VAR_9) {
  HttpThread *VAR_10 = (HttpThread *)VAR_9;
  HttpContext *VAR_11;
  int VAR_12;

  sigset_t VAR_13;
  FUNC_15(&VAR_13);
  FUNC_14(&VAR_13, VAR_7);
  FUNC_13(VAR_8, &VAR_13, ((void*)0));

  while (1) {
    FUNC_11(&VAR_10->threadMutex);
    if (VAR_10->numOfFds < 1) {
      FUNC_10(&VAR_10->fdReady, &VAR_10->threadMutex);
    }
    FUNC_12(&VAR_10->threadMutex);

    struct epoll_event VAR_14[VAR_5];

    VAR_12 = FUNC_1(VAR_10->pollFd, VAR_14, VAR_5, 1);
    if (VAR_12 <= 0) continue;

    for (int VAR_15 = 0; VAR_15 < VAR_12; ++VAR_15) {
      VAR_11 = VAR_14[VAR_15].data.ptr;
      if (VAR_11->signature != VAR_11 || VAR_11->pThread != VAR_10 || VAR_11->fd <= 0) {
        continue;
      }

      if (VAR_14[VAR_15].events & VAR_2) {
        FUNC_9("context:%p, fd:%d, ip:%s, state:%s, EPOLLPRI events occured, accessed:%d, close connect",
                  VAR_11, VAR_11->fd, VAR_11->ipstr, FUNC_4(VAR_11->state), VAR_11->accessTimes);
        FUNC_7(VAR_10, VAR_11);
        FUNC_3(VAR_10, VAR_11);
        continue;
      }

      if (VAR_14[VAR_15].events & VAR_3) {
        FUNC_9("context:%p, fd:%d, ip:%s, state:%s, EPOLLRDHUP events occured, accessed:%d, close connect",
                  VAR_11, VAR_11->fd, VAR_11->ipstr, FUNC_4(VAR_11->state), VAR_11->accessTimes);
        FUNC_7(VAR_10, VAR_11);
        FUNC_3(VAR_10, VAR_11);
        continue;
      }

      if (VAR_14[VAR_15].events & VAR_0) {
        FUNC_9("context:%p, fd:%d, ip:%s, state:%s, EPOLLERR events occured, accessed:%d, close connect",
                  VAR_11, VAR_11->fd, VAR_11->ipstr, FUNC_4(VAR_11->state), VAR_11->accessTimes);
        FUNC_7(VAR_10, VAR_11);
        FUNC_3(VAR_10, VAR_11);
        continue;
      }

      if (VAR_14[VAR_15].events & VAR_1) {
        FUNC_9("context:%p, fd:%d, ip:%s, state:%s, EPOLLHUP events occured, accessed:%d, close connect",
                  VAR_11, VAR_11->fd, VAR_11->ipstr, FUNC_4(VAR_11->state), VAR_11->accessTimes);
        FUNC_7(VAR_10, VAR_11);
        FUNC_3(VAR_10, VAR_11);
        continue;
      }

      if (!FUNC_2(VAR_11, VAR_4, VAR_4)) {
        FUNC_9("context:%p, fd:%d, ip:%s, state:%s, not in ready state, ignore read events",
                VAR_11, VAR_11->fd, VAR_11->ipstr, FUNC_4(VAR_11->state));
        continue;
      }

      if (!VAR_11->pThread->pServer->online) {
        FUNC_9("context:%p, fd:%d, ip:%s, state:%s, server is not online, accessed:%d, close connect",
                  VAR_11, VAR_11->fd, VAR_11->ipstr, FUNC_4(VAR_11->state), VAR_11->accessTimes);
        FUNC_7(VAR_10, VAR_11);
        FUNC_6(VAR_11);
        FUNC_8(VAR_11, VAR_6);
        FUNC_3(VAR_10, VAR_11);
        continue;
      } else {
        if (FUNC_5(VAR_10, VAR_11)) {
          (*(VAR_10->processData))(VAR_11);
          FUNC_0(&VAR_10->pServer->requestNum, 1);
        }
      }
    }
  }
}
