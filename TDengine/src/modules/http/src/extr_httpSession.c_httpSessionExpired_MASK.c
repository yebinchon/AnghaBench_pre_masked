
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ expire; scalar_t__ access; int * taos; int id; } ;
typedef TYPE_1__ HttpSession ;


 int FUNC_0 (char*,TYPE_1__*,int ,int *,scalar_t__,...) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(char *VAR_0) {
  HttpSession *VAR_1 = (HttpSession *)VAR_0;
  time_t VAR_2 = FUNC_1();

  if (VAR_1->taos != ((void*)0)) {
    if (VAR_1->expire > VAR_2) {
      return 0;
    }
    if (VAR_1->access > 0) {
      FUNC_0("session:%p:%s:%p is expired, but still access:%d", VAR_1, VAR_1->id, VAR_1->taos,
                VAR_1->access);
      return 0;
    }
    FUNC_0("need close session:%p:%s:%p for it expired, cur:%d, expire:%d, invertal:%d",
              VAR_1, VAR_1->id, VAR_1->taos, VAR_2, VAR_1->expire, VAR_2 - VAR_1->expire);
  }

  return 1;
}
