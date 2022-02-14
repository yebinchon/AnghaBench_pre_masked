
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int expireTimer; int timerHandle; } ;
typedef TYPE_1__ HttpServer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void (*) (void*,void*),int,TYPE_1__*,int ,int *) ;

void FUNC_2(void *VAR_0, void *VAR_1) {
  HttpServer *VAR_2 = (HttpServer *)VAR_0;
  FUNC_0(VAR_2);
  FUNC_1(FUNC_2, 60000, VAR_2, VAR_2->timerHandle, &VAR_2->expireTimer);
}
