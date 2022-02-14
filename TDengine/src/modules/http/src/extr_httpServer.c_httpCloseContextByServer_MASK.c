
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int parsed; int state; int ipstr; int fd; } ;
typedef int HttpThread ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_1__*,int ,int ) ;

void FUNC_5(HttpThread *VAR_4, HttpContext *VAR_5) {
  FUNC_3(VAR_4, VAR_5);
  VAR_5->parsed = 0;

  if (FUNC_0(VAR_5, VAR_2, VAR_1)) {
    FUNC_4("context:%p, fd:%d, ip:%s, epoll finished, still used by app", VAR_5, VAR_5->fd, VAR_5->ipstr);
  } else if (FUNC_0(VAR_5, VAR_1, VAR_1)) {
    FUNC_4("context:%p, fd:%d, ip:%s, epoll already finished, wait app finished", VAR_5, VAR_5->fd, VAR_5->ipstr);
  } else if (FUNC_0(VAR_5, VAR_3, VAR_0)) {
    FUNC_4("context:%p, fd:%d, ip:%s, epoll finished, close context", VAR_5, VAR_5->fd, VAR_5->ipstr);
    FUNC_1(VAR_4, VAR_5);
  } else if (FUNC_0(VAR_5, VAR_0, VAR_0)) {
    FUNC_4("context:%p, fd:%d, ip:%s, epoll finished, will be closed soon", VAR_5, VAR_5->fd, VAR_5->ipstr);
    FUNC_1(VAR_4, VAR_5);
  } else {
    FUNC_2("context:%p, fd:%d, ip:%s, unknown state:%d", VAR_5, VAR_5->fd, VAR_5->ipstr, VAR_5->state);
    FUNC_1(VAR_4, VAR_5);
  }
}
