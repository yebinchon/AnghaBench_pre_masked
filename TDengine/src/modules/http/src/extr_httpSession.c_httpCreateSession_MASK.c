
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* session; int user; int ipstr; int fd; TYPE_1__* pThread; } ;
struct TYPE_11__ {int serverMutex; int pSessionHash; scalar_t__ sessionExpire; } ;
struct TYPE_10__ {int access; void* taos; int id; struct TYPE_10__* signature; scalar_t__ expire; } ;
struct TYPE_9__ {TYPE_3__* pServer; } ;
typedef TYPE_2__ HttpSession ;
typedef TYPE_3__ HttpServer ;
typedef TYPE_4__ HttpContext ;


 size_t VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*,int ,int ,int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (char*,TYPE_4__*,int ,int ,int ,TYPE_2__*,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (void*) ;

void FUNC_8(HttpContext *VAR_2, void *VAR_3) {
  HttpServer *VAR_4 = VAR_2->pThread->pServer;
  FUNC_2(&VAR_4->serverMutex);

  if (VAR_2->session != ((void*)0) && VAR_2->session == VAR_2->session->signature) {
    FUNC_1("context:%p, fd:%d, ip:%s, user:%s, set exist session:%p:%s:%p expired", VAR_2, VAR_2->fd,
              VAR_2->ipstr, VAR_2->user, VAR_2->session, VAR_2->session->id, VAR_2->session->taos);
    VAR_2->session->expire = 0;
    VAR_2->session->access--;
  }

  HttpSession VAR_5;
  VAR_5.taos = VAR_3;
  VAR_5.expire = (int)FUNC_6() + VAR_4->sessionExpire;
  VAR_5.access = 1;
  FUNC_4(VAR_5.id, VAR_2->user);
  VAR_2->session = (HttpSession *)FUNC_5(VAR_4->pSessionHash, VAR_5.id, (char *)(&VAR_5));
  if (VAR_2->session == ((void*)0)) {
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, error:%s", VAR_2, VAR_2->fd, VAR_2->ipstr, VAR_2->user,
              VAR_1[VAR_0]);
    FUNC_7(VAR_3);
    FUNC_3(&VAR_4->serverMutex);
    return;
  }

  VAR_2->session->signature = VAR_2->session;
  FUNC_1("context:%p, fd:%d, ip:%s, user:%s, create a new session:%p:%s:%p", VAR_2, VAR_2->fd, VAR_2->ipstr,
            VAR_2->user, VAR_2->session, VAR_2->session->id, VAR_2->session->taos);
  FUNC_3(&VAR_4->serverMutex);
}
