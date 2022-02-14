
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pThread; TYPE_2__* session; } ;
struct TYPE_8__ {int serverMutex; scalar_t__ sessionExpire; } ;
struct TYPE_7__ {scalar_t__ expire; struct TYPE_7__* signature; } ;
struct TYPE_6__ {TYPE_3__* pServer; } ;
typedef TYPE_3__ HttpServer ;
typedef TYPE_4__ HttpContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(HttpContext *VAR_0) {
  HttpServer *VAR_1 = VAR_0->pThread->pServer;
  FUNC_0(&VAR_1->serverMutex);
  if (VAR_0->session == VAR_0->session->signature) {
    VAR_0->session->expire = (int) FUNC_2() + VAR_0->pThread->pServer->sessionExpire;
  }
  FUNC_1(&VAR_1->serverMutex);
}
