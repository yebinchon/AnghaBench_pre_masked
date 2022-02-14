
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_30__ {int user; int ipstr; int fd; TYPE_3__* encodeMethod; TYPE_1__* multiCmds; struct TYPE_30__* signature; } ;
struct TYPE_29__ {int (* startJsonFp ) (TYPE_4__*,TYPE_2__*,int *) ;int (* setNextCmdFp ) (TYPE_4__*,TYPE_2__*,int) ;int (* stopJsonFp ) (TYPE_4__*,TYPE_2__*) ;int (* buildAffectRowJsonFp ) (TYPE_4__*,TYPE_2__*,int) ;int (* checkFinishedFp ) (TYPE_4__*,TYPE_2__*,int) ;} ;
struct TYPE_28__ {int code; scalar_t__ cmdReturnType; int sql; } ;
struct TYPE_27__ {int pos; TYPE_2__* cmds; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpSqlCmd ;
typedef TYPE_3__ HttpEncodeMethod ;
typedef TYPE_4__ HttpContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_4__*,int ,int ,int ,int,int,char*) ;
 char* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_4__*,int ,int ,int ,int,...) ;
 int FUNC_4 (char*,TYPE_4__*,int ,int ,int ,int,int,char*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_2__*,int *) ;
 int FUNC_13 (int *,int ,TYPE_4__*) ;

void FUNC_14(void *VAR_3, TAOS_RES *VAR_4, int VAR_5) {
  HttpContext *VAR_6 = (HttpContext *)VAR_3;
  if (VAR_6 == ((void*)0) || VAR_6->signature != VAR_6) return;

  HttpSqlCmds * VAR_7 = VAR_6->multiCmds;
  HttpEncodeMethod *VAR_8 = VAR_6->encodeMethod;

  HttpSqlCmd *VAR_9 = VAR_7->cmds + VAR_7->pos;
  char * VAR_10 = FUNC_1(VAR_6, VAR_9->sql);

  if (-VAR_5 == VAR_1) {
    FUNC_4("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, code:%d:inprogress, sql:%s",
             VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_7->pos, -VAR_5, VAR_10);
    return;
  }

  if (VAR_5 < 0) {
    if (VAR_8->checkFinishedFp != ((void*)0) && !VAR_8->checkFinishedFp(VAR_6, VAR_9, VAR_5 >= 0 ? 0 : -VAR_5)) {
      VAR_9->code = -VAR_5;
      FUNC_3("context:%p, fd:%d, ip:%s, user:%s, process pos jump to:%d, last code:%d, last sql:%s",
                VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_7->pos + 1, -VAR_5, VAR_10);
    } else {
      VAR_9->code = -VAR_5;
      FUNC_0("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, error code:%d, sql:%s",
                VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_7->pos, -VAR_5, VAR_10);

      if (VAR_9->cmdReturnType == VAR_0) {
        if (VAR_8->startJsonFp) (VAR_8->startJsonFp)(VAR_6, VAR_9, VAR_4);
        if (VAR_8->stopJsonFp) (VAR_8->stopJsonFp)(VAR_6, VAR_9);
      }
    }
    VAR_7->pos++;
    FUNC_2(VAR_6);
    return;
  }

  if (VAR_4 == ((void*)0)) {

    int VAR_11 = VAR_5;
    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, affect rows:%d, sql:%s",
              VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_7->pos, VAR_11, VAR_10);

    VAR_9->code = 0;

    if (VAR_9->cmdReturnType == VAR_0 && VAR_8->startJsonFp) {
      (VAR_8->startJsonFp)(VAR_6, VAR_9, VAR_4);
    }

    if (VAR_9->cmdReturnType == VAR_0 && VAR_8->buildAffectRowJsonFp) {
      (VAR_8->buildAffectRowJsonFp)(VAR_6, VAR_9, VAR_11);
    }

    if (VAR_9->cmdReturnType == VAR_0 && VAR_8->stopJsonFp) {
      (VAR_8->stopJsonFp)(VAR_6, VAR_9);
    }

    if (VAR_8->setNextCmdFp) {
      (VAR_8->setNextCmdFp)(VAR_6, VAR_9, VAR_5);
    } else {
      VAR_7->pos++;
    }

    FUNC_2(VAR_6);
  } else {
    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, process pos:%d, start retrieve, sql:%s",
              VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_7->pos, VAR_10);

    if (VAR_9->cmdReturnType == VAR_0 && VAR_8->startJsonFp) {
      (VAR_8->startJsonFp)(VAR_6, VAR_9, VAR_4);
    }
    FUNC_13(VAR_4, VAR_2, VAR_6);
  }
}
