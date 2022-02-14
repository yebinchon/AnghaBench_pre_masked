
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int user; int ipstr; int fd; } ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char*,TYPE_1__*,int ,int ,int ,char*) ;

void FUNC_4(HttpContext *VAR_1) {
  char VAR_2[128] = {0};
  if (!FUNC_0(VAR_1, VAR_2, 128)) {
    FUNC_1(VAR_1, VAR_0);
  } else {
    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, login via http, return token:%s",
              VAR_1, VAR_1->fd, VAR_1->ipstr, VAR_1->user, VAR_2);
    FUNC_2(VAR_1, VAR_2);
  }
}
