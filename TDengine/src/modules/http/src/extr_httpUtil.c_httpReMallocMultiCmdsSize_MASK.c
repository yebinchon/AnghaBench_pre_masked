
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int user; int ipstr; int fd; TYPE_1__* multiCmds; } ;
struct TYPE_5__ {int maxSize; int * cmds; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef int HttpSqlCmd ;
typedef TYPE_2__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int ,int ,int,...) ;
 int FUNC_1 (int *,int ,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t) ;

bool FUNC_3(HttpContext *VAR_1, int VAR_2) {
  HttpSqlCmds *VAR_3 = VAR_1->multiCmds;

  if (VAR_2 > VAR_0) {
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, mulitcmd size:%d large then %d", VAR_1, VAR_1->fd,
              VAR_1->ipstr, VAR_1->user, VAR_2, VAR_0);
    return 0;
  }

  VAR_3->cmds = (HttpSqlCmd *)FUNC_2(VAR_3->cmds, (size_t)VAR_2 * sizeof(HttpSqlCmd));
  if (VAR_3->cmds == ((void*)0)) {
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, malloc cmds:%d error", VAR_1, VAR_1->fd, VAR_1->ipstr,
              VAR_1->user, VAR_2);
    return 0;
  }
  FUNC_1(VAR_3->cmds + VAR_3->maxSize * (int16_t)sizeof(HttpSqlCmd), 0,
         (size_t)(VAR_2 - VAR_3->maxSize) * sizeof(HttpSqlCmd));
  VAR_3->maxSize = (int16_t)VAR_2;

  return 1;
}
