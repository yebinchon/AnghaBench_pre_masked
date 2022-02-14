
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int user; int ipstr; int fd; TYPE_2__* session; TYPE_1__* pThread; } ;
struct TYPE_9__ {int serverMutex; scalar_t__ sessionExpire; int pSessionHash; } ;
struct TYPE_8__ {scalar_t__ expire; int access; int taos; int id; struct TYPE_8__* signature; } ;
struct TYPE_7__ {TYPE_3__* pServer; } ;
typedef TYPE_2__ HttpSession ;
typedef TYPE_3__ HttpServer ;
typedef TYPE_4__ HttpContext ;


 int FUNC_0 (char*,TYPE_4__*,int ,int ,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(HttpContext *VAR_0) {
  HttpServer *VAR_1 = VAR_0->pThread->pServer;
  FUNC_1(&VAR_1->serverMutex);

  VAR_0->session = (HttpSession *)FUNC_3(VAR_1->pSessionHash, VAR_0->user);
  if (VAR_0->session != ((void*)0) && VAR_0->session == VAR_0->session->signature) {
    VAR_0->session->access++;
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, find an exist session:%p:%s:%p, access:%d, expire:%d",
              VAR_0, VAR_0->fd, VAR_0->ipstr, VAR_0->user, VAR_0->session, VAR_0->session->id,
              VAR_0->session->taos, VAR_0->session->access, VAR_0->session->expire);
    VAR_0->session->expire = (int)FUNC_4() + VAR_1->sessionExpire;
  } else {
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, session not found", VAR_0, VAR_0->fd, VAR_0->ipstr,
              VAR_0->user);
  }

  FUNC_2(&VAR_1->serverMutex);
}
