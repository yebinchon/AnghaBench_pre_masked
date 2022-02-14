
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int singleCmd; int user; int ipstr; int fd; TYPE_2__* session; TYPE_4__* encodeMethod; struct TYPE_21__* signature; } ;
struct TYPE_20__ {int (* startJsonFp ) (TYPE_5__*,int *,int *) ;int (* stopJsonFp ) (TYPE_5__*,int *) ;int (* buildAffectRowJsonFp ) (TYPE_5__*,int *,int) ;} ;
struct TYPE_17__ {int payload; } ;
struct TYPE_19__ {TYPE_1__ cmd; } ;
struct TYPE_18__ {int taos; } ;
typedef int TAOS_RES ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ HttpEncodeMethod ;
typedef TYPE_5__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,TYPE_5__*,int ,int ,int ,int ,int,TYPE_3__*,...) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (char*,TYPE_5__*,int ,int ,int ,...) ;
 int FUNC_5 (TYPE_5__*,int *,int *) ;
 int FUNC_6 (TYPE_5__*,int *,int) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_5__*,int *,int *) ;
 int FUNC_9 (int *,int ,TYPE_5__*) ;

void FUNC_10(void *VAR_3, TAOS_RES *VAR_4, int VAR_5) {
  HttpContext *VAR_6 = (HttpContext *)VAR_3;
  if (VAR_6 == ((void*)0) || VAR_6->signature != VAR_6) return;

  HttpEncodeMethod *VAR_7 = VAR_6->encodeMethod;

  if (-VAR_5 == VAR_0) {
    FUNC_1("context:%p, fd:%d, ip:%s, user:%s, query error, taos:%p, code:%d:inprogress, sqlObj:%p",
              VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_6->session->taos, -VAR_5, (SSqlObj *)VAR_4);
    return;
  }

  if (VAR_5 < 0) {
    SSqlObj *VAR_8 = (SSqlObj *)VAR_4;
    if (-VAR_5 == VAR_1) {
      FUNC_1("context:%p, fd:%d, ip:%s, user:%s, query error, taos:%p, code:%d:invalidsql, sqlObj:%p, error:%s",
                VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_6->session->taos, -VAR_5, VAR_8, VAR_8->cmd.payload);
      FUNC_3(VAR_6, VAR_8->cmd.payload);
    } else {
      FUNC_1("context:%p, fd:%d, ip:%s, user:%s, query error, taos:%p, code:%d, sqlObj:%p",
                VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_6->session->taos, -VAR_5, VAR_8);
      FUNC_2(VAR_6, -VAR_5);
    }
    return;
  }

  if (VAR_4 == ((void*)0)) {

    int VAR_9 = VAR_5;

    FUNC_4("context:%p, fd:%d, ip:%s, user:%s, affect rows:%d, stop query, sqlObj:%p",
              VAR_6, VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_9, VAR_4);

    if (VAR_7->startJsonFp) {
      (VAR_7->startJsonFp)(VAR_6, &VAR_6->singleCmd, VAR_4);
    }

    if (VAR_7->buildAffectRowJsonFp) {
      (VAR_7->buildAffectRowJsonFp)(VAR_6, &VAR_6->singleCmd, VAR_9);
    }

    if (VAR_7->stopJsonFp) {
      (VAR_7->stopJsonFp)(VAR_6, &VAR_6->singleCmd);
    }

    FUNC_0(VAR_6);
  } else {
    FUNC_4("context:%p, fd:%d, ip:%s, user:%s, start retrieve", VAR_6, VAR_6->fd, VAR_6->ipstr,
              VAR_6->user);

    if (VAR_7->startJsonFp) {
      (VAR_7->startJsonFp)(VAR_6, &VAR_6->singleCmd, VAR_4);
    }

    FUNC_9(VAR_4, VAR_2, VAR_6);
  }
}
