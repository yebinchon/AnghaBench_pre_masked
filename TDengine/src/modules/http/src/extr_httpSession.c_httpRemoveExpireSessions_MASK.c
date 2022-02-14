
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int serverMutex; int pSessionHash; } ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ HttpSession ;
typedef TYPE_2__ HttpServer ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(HttpServer *VAR_1) {
  int VAR_2 = 0;
  do {
    FUNC_1(&VAR_1->serverMutex);

    HttpSession *VAR_3 = (HttpSession *)FUNC_4(VAR_1->pSessionHash, VAR_0);
    if (VAR_3 == ((void*)0)) {
      FUNC_2(&VAR_1->serverMutex);
      break;
    }

    FUNC_0((char *)VAR_3);
    FUNC_3(VAR_1->pSessionHash, VAR_3->id, VAR_3);

    FUNC_2(&VAR_1->serverMutex);

    if (++VAR_2 > 10) {
      break;
    }
  } while (1);
}
