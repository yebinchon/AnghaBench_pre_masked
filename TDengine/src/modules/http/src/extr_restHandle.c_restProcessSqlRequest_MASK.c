
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* nativSql; } ;
struct TYPE_8__ {char* pos; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
struct TYPE_11__ {int * encodeMethod; int reqType; TYPE_3__ singleCmd; TYPE_2__ parser; int user; int ipstr; int fd; } ;
typedef TYPE_3__ HttpSqlCmd ;
typedef TYPE_4__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (char*,TYPE_4__*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_3(HttpContext* VAR_9, int VAR_10) {
  FUNC_2("context:%p, fd:%d, ip:%s, user:%s, process restful sql msg", VAR_9, VAR_9->fd, VAR_9->ipstr,
            VAR_9->user);

  char* VAR_11 = VAR_9->parser.data.pos;
  if (VAR_11 == ((void*)0)) {
    FUNC_1(VAR_9, VAR_1);
    return 0;
  }

  if (FUNC_0(VAR_11)) {
    FUNC_1(VAR_9, VAR_0);
    return 0;
  }

  HttpSqlCmd* VAR_12 = &(VAR_9->singleCmd);
  VAR_12->nativSql = VAR_11;

  VAR_9->reqType = VAR_2;
  if (VAR_10 == VAR_3) {
    VAR_9->encodeMethod = &VAR_6;
  } else if (VAR_10 == VAR_4) {
    VAR_9->encodeMethod = &VAR_7;
  } else if (VAR_10 == VAR_5) {
    VAR_9->encodeMethod = &VAR_8;
  }

  return 1;
}
