
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * timer; int ipstr; } ;
typedef TYPE_1__ HttpContext ;


 int FUNC_0 (char*,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int **) ;

void FUNC_2(HttpContext *VAR_0) {
  if (VAR_0->timer != ((void*)0)) {
    FUNC_1(&VAR_0->timer);
    FUNC_0("context:%p, ip:%s, close timer:%p", VAR_0, VAR_0->ipstr, VAR_0->timer);
    VAR_0->timer = ((void*)0);
  }
}
