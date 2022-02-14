
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int user; int ipstr; int fd; TYPE_3__* encodeMethod; TYPE_1__* multiCmds; struct TYPE_16__* signature; } ;
struct TYPE_15__ {int (* buildQueryJsonFp ) (TYPE_4__*,TYPE_2__*,int *,int) ;int (* stopJsonFp ) (TYPE_4__*,TYPE_2__*) ;} ;
struct TYPE_14__ {scalar_t__ cmdReturnType; int sql; } ;
struct TYPE_13__ {int pos; TYPE_2__* cmds; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpSqlCmd ;
typedef TYPE_3__ HttpEncodeMethod ;
typedef TYPE_4__ HttpContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*,int ,int ,int ,int,int,char*) ;
 char* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*,TYPE_4__*,int ,int ,int ,int,int,char*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int *,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_6 (int *,void (*) (void*,int *,int),void*) ;
 int FUNC_7 (int *) ;

void FUNC_8(void *VAR_1, TAOS_RES *VAR_2, int VAR_3) {
  HttpContext *VAR_4 = (HttpContext *)VAR_1;
  if (VAR_4 == ((void*)0) || VAR_4->signature != VAR_4) return;

  HttpSqlCmds * VAR_5 = VAR_4->multiCmds;
  HttpEncodeMethod *VAR_6 = VAR_4->encodeMethod;

  HttpSqlCmd *VAR_7 = VAR_5->cmds + VAR_5->pos;
  char * VAR_8 = FUNC_1(VAR_4, VAR_7->sql);

  bool VAR_9 = 0;

  if (VAR_3 > 0) {
    if (VAR_7->cmdReturnType == VAR_0 && VAR_6->buildQueryJsonFp) {
      VAR_9 = (VAR_6->buildQueryJsonFp)(VAR_4, VAR_7, VAR_2, VAR_3);
    }
  }

  if (VAR_9) {

    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, continue retrieve, numOfRows:%d, sql:%s",
              VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_4->user, VAR_5->pos, VAR_3, VAR_8);
    FUNC_6(VAR_2, FUNC_8, VAR_1);
  } else {
    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, stop retrieve, numOfRows:%d, sql:%s",
              VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_4->user, VAR_5->pos, VAR_3, VAR_8);

    if (VAR_3 < 0) {
      FUNC_0("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, retrieve failed code:%d, sql:%s",
                VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_4->user, VAR_5->pos, -VAR_3, VAR_8);
    } else {
      FUNC_7(VAR_2);
    }

    if (VAR_7->cmdReturnType == VAR_0 && VAR_6->stopJsonFp) {
      (VAR_6->stopJsonFp)(VAR_4, VAR_7);
    }
    VAR_5->pos++;
    FUNC_2(VAR_4);
  }
}
