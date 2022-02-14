
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * signature; int * taos; int id; } ;
typedef TYPE_1__ HttpSession ;


 int FUNC_0 (char*,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(char *VAR_0) {
  HttpSession *VAR_1 = (HttpSession *)VAR_0;
  FUNC_0("close session:%p:%s:%p", VAR_1, VAR_1->id, VAR_1->taos);
  if (VAR_1->taos != ((void*)0)) {
    FUNC_1(VAR_1->taos);
    VAR_1->taos = ((void*)0);
  }
  VAR_1->signature = ((void*)0);
}
