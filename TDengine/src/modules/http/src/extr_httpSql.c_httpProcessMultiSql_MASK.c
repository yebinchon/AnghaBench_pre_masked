
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* session; int user; int ipstr; int fd; TYPE_4__* encodeMethod; TYPE_2__* multiCmds; } ;
struct TYPE_15__ {int (* cleanJsonFp ) (TYPE_5__*) ;} ;
struct TYPE_14__ {int sql; } ;
struct TYPE_13__ {scalar_t__ pos; scalar_t__ size; TYPE_3__* cmds; } ;
struct TYPE_12__ {int taos; } ;
typedef TYPE_2__ HttpSqlCmds ;
typedef TYPE_3__ HttpSqlCmd ;
typedef TYPE_4__ HttpEncodeMethod ;
typedef TYPE_5__ HttpContext ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,TYPE_5__*,int ,int ,int ,int,char*) ;
 char* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,TYPE_5__*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int ,void*) ;

void FUNC_7(HttpContext *VAR_1) {
  HttpSqlCmds * VAR_2 = VAR_1->multiCmds;
  HttpEncodeMethod *VAR_3 = VAR_1->encodeMethod;

  if (VAR_2->pos >= VAR_2->size) {
    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, size:%d, stop mulit-querys",
              VAR_1, VAR_1->fd, VAR_1->ipstr, VAR_1->user, VAR_2->pos, VAR_2->size);
    if (VAR_3->cleanJsonFp) {
      (VAR_3->cleanJsonFp)(VAR_1);
    }
    FUNC_0(VAR_1);
    return;
  }

  HttpSqlCmd *VAR_4 = VAR_2->cmds + VAR_2->pos;

  char *VAR_5 = FUNC_2(VAR_1, VAR_4->sql);
  FUNC_1("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, start query, sql:%s", VAR_1, VAR_1->fd,
           VAR_1->ipstr, VAR_1->user, VAR_2->pos, VAR_5);
  FUNC_5(VAR_5);
  FUNC_6(VAR_1->session->taos, VAR_5, VAR_0, (void *)VAR_1);
}
