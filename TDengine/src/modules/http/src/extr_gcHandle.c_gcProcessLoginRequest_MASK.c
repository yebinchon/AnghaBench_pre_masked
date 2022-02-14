
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reqType; int user; int ipstr; int fd; } ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ,int ) ;

bool FUNC_1(HttpContext* VAR_1) {
  FUNC_0("context:%p, fd:%d, ip:%s, user:%s, process grafana login msg", VAR_1, VAR_1->fd, VAR_1->ipstr,
            VAR_1->user);
  VAR_1->reqType = VAR_0;
  return 1;
}
