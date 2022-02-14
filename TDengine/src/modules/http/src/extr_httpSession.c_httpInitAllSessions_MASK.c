
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * expireTimer; int timerHandle; int * pSessionHash; } ;
typedef int HttpSession ;
typedef TYPE_1__ HttpServer ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,int,TYPE_1__*,int ,int **) ;

bool FUNC_3(HttpServer *VAR_2) {
  if (VAR_2->pSessionHash == ((void*)0)) {
    VAR_2->pSessionHash = FUNC_1(100, sizeof(HttpSession), VAR_1);
  }
  if (VAR_2->pSessionHash == ((void*)0)) {
    FUNC_0("http init session pool failed");
    return 0;
  }
  if (VAR_2->expireTimer == ((void*)0)) {
    FUNC_2(VAR_0, 50000, VAR_2, VAR_2->timerHandle, &VAR_2->expireTimer);
  }

  return 1;
}
