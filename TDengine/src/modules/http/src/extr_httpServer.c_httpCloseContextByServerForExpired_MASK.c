
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pThread; int ipstr; int fd; } ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,int ,int ,void*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(void *VAR_1, void *VAR_2) {
  HttpContext *VAR_3 = (HttpContext *)VAR_1;
  FUNC_2(VAR_3->pThread, VAR_3);
  FUNC_1("context:%p, fd:%d, ip:%s, read http body error, time expired, timer:%p", VAR_3, VAR_3->fd, VAR_3->ipstr, VAR_2);
  FUNC_3(VAR_3, VAR_0);
  FUNC_0(VAR_3->pThread, VAR_3);
}
