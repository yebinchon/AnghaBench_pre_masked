
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ reqType; int taos; int user; int ipstr; int fd; int pass; TYPE_1__* session; } ;
struct TYPE_8__ {struct TYPE_8__* signature; } ;
typedef TYPE_2__ HttpContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,char*,int ,int ,void*,int *) ;

void FUNC_5(HttpContext *VAR_2) {
  if (VAR_2->session == ((void*)0)) {
    FUNC_2(VAR_2);
  }

  if (VAR_2->session == ((void*)0) || VAR_2->session != VAR_2->session->signature ||
      VAR_2->reqType == VAR_0) {
    FUNC_4(((void*)0), VAR_2->user, VAR_2->pass, "", 0, VAR_1, (void *)VAR_2,
                   &(VAR_2->taos));
    FUNC_3("context:%p, fd:%d, ip:%s, user:%s, try connect tdengine, taos:%p", VAR_2, VAR_2->fd,
              VAR_2->ipstr, VAR_2->user, VAR_2->taos);
  } else {
    FUNC_0(VAR_2);
    FUNC_1(VAR_2);
  }
}
