
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * encodeMethod; int reqType; int ipstr; int fd; } ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ) ;

bool FUNC_1(HttpContext* VAR_2) {
  FUNC_0("context:%p, fd:%d, ip:%s, process grafana heartbeat msg", VAR_2, VAR_2->fd, VAR_2->ipstr);
  VAR_2->reqType = VAR_0;
  VAR_2->encodeMethod = &VAR_1;
  return 1;
}
