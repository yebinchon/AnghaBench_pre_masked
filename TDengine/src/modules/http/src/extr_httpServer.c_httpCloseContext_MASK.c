
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int timer; int state; int ipstr; int fd; } ;
struct TYPE_9__ {TYPE_1__* pServer; } ;
struct TYPE_8__ {int timerHandle; } ;
typedef TYPE_2__ HttpThread ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_3__*,int ,int *) ;

void FUNC_3(HttpThread *VAR_2, HttpContext *VAR_3) {
  FUNC_2(VAR_1, VAR_0, VAR_3, VAR_2->pServer->timerHandle, &VAR_3->timer);
  FUNC_1("context:%p, fd:%d, ip:%s, state:%s will be closed after:%d ms, timer:%p",
          VAR_3, VAR_3->fd, VAR_3->ipstr, FUNC_0(VAR_3->state), VAR_0, VAR_3->timer);
}
