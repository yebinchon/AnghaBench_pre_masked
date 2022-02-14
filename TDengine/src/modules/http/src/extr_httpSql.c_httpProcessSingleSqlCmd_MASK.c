
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* nativSql; } ;
struct TYPE_10__ {int user; int ipstr; int fd; TYPE_2__* session; TYPE_1__ singleCmd; } ;
struct TYPE_9__ {int taos; } ;
typedef TYPE_1__ HttpSqlCmd ;
typedef TYPE_2__ HttpSession ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*,int ,int ,int ,char*) ;
 int FUNC_1 (char*,TYPE_3__*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ,void*) ;

void FUNC_5(HttpContext *VAR_2) {
  HttpSqlCmd * VAR_3 = &VAR_2->singleCmd;
  char * VAR_4 = VAR_3->nativSql;
  HttpSession *VAR_5 = VAR_2->session;

  if (VAR_4 == ((void*)0) || VAR_4[0] == 0) {
    FUNC_1("context:%p, fd:%d, ip:%s, user:%s, error:no sql input", VAR_2, VAR_2->fd, VAR_2->ipstr,
              VAR_2->user);
    FUNC_2(VAR_2, VAR_0);
    return;
  }

  FUNC_0("context:%p, fd:%d, ip:%s, user:%s, start query, sql:%s", VAR_2, VAR_2->fd, VAR_2->ipstr,
           VAR_2->user, VAR_4);
  FUNC_3(VAR_4);
  FUNC_4(VAR_5->taos, VAR_4, VAR_1, (void *)VAR_2);
}
