
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int user; int ipstr; int fd; TYPE_1__* multiCmds; } ;
struct TYPE_5__ {char* buffer; int bufferSize; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int ,int ,int,...) ;
 int FUNC_1 (char*,int ,size_t) ;
 scalar_t__ FUNC_2 (char*,size_t) ;

bool FUNC_3(HttpContext *VAR_1, int VAR_2) {
  HttpSqlCmds *VAR_3 = VAR_1->multiCmds;

  if (VAR_2 > VAR_0) {
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, mulitcmd buffer size:%d large then %d",
              VAR_1, VAR_1->fd, VAR_1->ipstr, VAR_1->user, VAR_2, VAR_0);
    return 0;
  }

  VAR_3->buffer = (char *)FUNC_2(VAR_3->buffer, (size_t)VAR_2);
  if (VAR_3->buffer == ((void*)0)) {
    FUNC_0("context:%p, fd:%d, ip:%s, user:%s, malloc buffer:%d error", VAR_1, VAR_1->fd, VAR_1->ipstr,
              VAR_1->user, VAR_2);
    return 0;
  }
  FUNC_1(VAR_3->buffer + VAR_3->bufferSize, 0, (size_t)(VAR_2 - VAR_3->bufferSize));
  VAR_3->bufferSize = VAR_2;

  return 1;
}
