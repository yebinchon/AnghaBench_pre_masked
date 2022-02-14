
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int16_t ;
struct TYPE_7__ {char* pos; size_t len; } ;
struct TYPE_8__ {char* pLast; TYPE_1__ method; } ;
struct TYPE_9__ {int ipstr; int fd; TYPE_2__ parser; } ;
typedef TYPE_2__ HttpParser ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*,TYPE_3__*,int ,int ,char*) ;
 char* FUNC_2 (char*,char) ;

bool FUNC_3(HttpContext* VAR_1) {
  HttpParser* VAR_2 = &VAR_1->parser;

  char* VAR_3 = FUNC_2(VAR_2->pLast, ' ');
  if (VAR_3 == ((void*)0)) {
    FUNC_0(VAR_1, VAR_0);
    return 0;
  }
  VAR_2->method.pos = VAR_2->pLast;
  VAR_2->method.len = (int16_t)(VAR_3 - VAR_2->pLast);
  VAR_2->method.pos[VAR_2->method.len] = 0;
  VAR_2->pLast = VAR_3 + 1;

  FUNC_1("context:%p, fd:%d, ip:%s, httpMethod:%s", VAR_1, VAR_1->fd, VAR_1->ipstr, VAR_2->method.pos);
  return 1;
}
