
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* encodeMethod; int user; int ipstr; int fd; TYPE_1__* multiCmds; struct TYPE_11__* signature; } ;
struct TYPE_10__ {int (* initJsonFp ) (TYPE_3__*) ;} ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ pos; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpEncodeMethod ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (char*,TYPE_3__*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(HttpContext *VAR_1) {
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1) return;

  HttpSqlCmds *VAR_2 = VAR_1->multiCmds;
  if (VAR_2 == ((void*)0) || VAR_2->size <= 0 || VAR_2->pos >= VAR_2->size || VAR_2->pos < 0) {
    FUNC_1(VAR_1, VAR_0);
    return;
  }

  FUNC_2("context:%p, fd:%d, ip:%s, user:%s, start multi-querys pos:%d, size:%d", VAR_1, VAR_1->fd,
            VAR_1->ipstr, VAR_1->user, VAR_2->pos, VAR_2->size);
  HttpEncodeMethod *VAR_3 = VAR_1->encodeMethod;
  if (VAR_3->initJsonFp) {
    (VAR_3->initJsonFp)(VAR_1);
  }

  FUNC_0(VAR_1);
}
