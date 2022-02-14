
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct HttpContext {int ipstr; int fd; TYPE_1__* multiCmds; } ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int cmdType; int tagNum; int cmdReturnType; int cmdState; } ;
struct TYPE_4__ {scalar_t__ pos; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpSqlCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct HttpContext*,int ,int ,scalar_t__,int,int ,int ,int ,int ) ;

void FUNC_1(struct HttpContext *VAR_3, HttpSqlCmd *VAR_4, int VAR_5) {
  HttpSqlCmds *VAR_6 = VAR_3->multiCmds;
  FUNC_0("context:%p, fd:%d, ip:%s, get telegraf next command, pos:%d, code:%d, state:%d, type:%d, rettype:%d, tags:%d",
            VAR_3, VAR_3->fd, VAR_3->ipstr, VAR_6->pos, VAR_5, VAR_4->cmdState, VAR_4->cmdType,
            VAR_4->cmdReturnType, VAR_4->tagNum);

  if (VAR_4->cmdType == VAR_2) {
    VAR_6->pos = (int16_t)(VAR_6->pos + 2);
  } else if (VAR_4->cmdType == VAR_0) {
    VAR_6->pos++;
  } else if (VAR_4->cmdType == VAR_1) {
    VAR_6->pos++;
  } else {
    VAR_6->pos++;
  }
}
