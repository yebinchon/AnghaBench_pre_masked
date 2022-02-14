
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * session; int * taos; int user; int ipstr; int fd; struct TYPE_9__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ,int ,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,TYPE_1__*,int ,int ,int ,int *) ;

void FUNC_7(void *VAR_2, TAOS_RES *VAR_3, int VAR_4) {
  HttpContext *VAR_5 = VAR_2;
  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) return;

  if (VAR_4 < 0) {
    FUNC_2("context:%p, fd:%d, ip:%s, user:%s, login error, code:%d", VAR_5, VAR_5->fd, VAR_5->ipstr,
              VAR_5->user, -VAR_4);
    FUNC_5(VAR_5, -VAR_4);
    return;
  }

  FUNC_6("context:%p, fd:%d, ip:%s, user:%s, connect tdengine success, taos:%p", VAR_5, VAR_5->fd,
            VAR_5->ipstr, VAR_5->user, VAR_5->taos);
  if (VAR_5->taos == ((void*)0)) {
    FUNC_2("context:%p, fd:%d, ip:%s, user:%s, login error, taos is empty", VAR_5, VAR_5->fd, VAR_5->ipstr,
              VAR_5->user);
    FUNC_4(VAR_5, VAR_0);
    return;
  }

  FUNC_1(VAR_5, VAR_5->taos);

  if (VAR_5->session == ((void*)0)) {
    FUNC_4(VAR_5, VAR_1);
    FUNC_0(VAR_5);
  } else {
    FUNC_3(VAR_5);
  }
}
