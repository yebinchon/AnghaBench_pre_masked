
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* session; int user; int ipstr; TYPE_1__* pThread; } ;
struct TYPE_10__ {int serverMutex; } ;
struct TYPE_9__ {int expire; int access; int taos; int id; struct TYPE_9__* signature; } ;
struct TYPE_8__ {TYPE_3__* pServer; } ;
typedef TYPE_2__ HttpSession ;
typedef TYPE_3__ HttpServer ;
typedef TYPE_4__ HttpContext ;


 int FUNC_0 (char*,TYPE_4__*,int ,int ,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(HttpContext *VAR_0) {
  HttpServer * VAR_1 = VAR_0->pThread->pServer;


  FUNC_1(&VAR_1->serverMutex);
  HttpSession *VAR_2 = VAR_0->session;
  if (VAR_2 == ((void*)0) || VAR_2 != VAR_2->signature) {
    FUNC_2(&VAR_1->serverMutex);
    return;
  }
  VAR_2->access--;
  FUNC_0("context:%p, ip:%s, user:%s, restore session:%p:%s:%p, access:%d, expire:%d",
            VAR_0, VAR_0->ipstr, VAR_0->user, VAR_2, VAR_2->id, VAR_2->taos,
            VAR_2->access, VAR_0->session->expire);
  FUNC_2(&VAR_1->serverMutex);
}
