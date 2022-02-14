
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct HttpContext {int ipstr; int fd; TYPE_2__* multiCmds; } ;
typedef void* int16_t ;
struct TYPE_7__ {scalar_t__ cmdState; scalar_t__ cmdType; int tagNum; int cmdReturnType; } ;
struct TYPE_6__ {int pos; TYPE_1__* cmds; } ;
struct TYPE_5__ {scalar_t__ cmdState; } ;
typedef TYPE_2__ HttpSqlCmds ;
typedef TYPE_3__ HttpSqlCmd ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,struct HttpContext*,int ,int ,...) ;

bool FUNC_1(struct HttpContext *VAR_8, HttpSqlCmd *VAR_9, int VAR_10) {
  HttpSqlCmds *VAR_11 = VAR_8->multiCmds;
  FUNC_0("context:%p, fd:%d, ip:%s, check telegraf command, code:%d, state:%d, type:%d, rettype:%d, tags:%d",
            VAR_8, VAR_8->fd, VAR_8->ipstr, VAR_10, VAR_9->cmdState, VAR_9->cmdType, VAR_9->cmdReturnType, VAR_9->tagNum);

  if (VAR_9->cmdType == VAR_4) {
    if (VAR_9->cmdState == VAR_0) {
      if (VAR_10 == VAR_5 || VAR_10 == VAR_6) {
        VAR_9->cmdState = VAR_1;
        if (VAR_11->cmds[0].cmdState == VAR_0) {
          VAR_11->pos = (int16_t)-1;
          FUNC_0("context:%p, fd:%d, ip:%s, import failed, try create database", VAR_8, VAR_8->fd,
                    VAR_8->ipstr);
          return 0;
        }
      } else if (VAR_10 == VAR_7) {
        VAR_9->cmdState = VAR_1;
        if (VAR_11->cmds[VAR_11->pos - 1].cmdState == VAR_0) {
          VAR_11->pos = (int16_t)(VAR_11->pos - 2);
          FUNC_0("context:%p, fd:%d, ip:%s, import failed, try create stable", VAR_8, VAR_8->fd,
                    VAR_8->ipstr);
          return 0;
        }
      } else {
      }
    } else {
    }
  } else if (VAR_9->cmdType == VAR_2) {
    VAR_9->cmdState = VAR_1;
    FUNC_0("context:%p, fd:%d, ip:%s, code:%d, create database failed", VAR_8, VAR_8->fd, VAR_8->ipstr,
              VAR_10);
  } else if (VAR_9->cmdType == VAR_3) {
    VAR_9->cmdState = VAR_1;
    FUNC_0("context:%p, fd:%d, ip:%s, code:%d, create stable failed", VAR_8, VAR_8->fd, VAR_8->ipstr, VAR_10);
  } else {
  }

  return 1;
}
