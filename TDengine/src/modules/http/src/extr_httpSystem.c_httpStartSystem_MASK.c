
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * timerHandle; int * pContextPool; int cacheContext; } ;
typedef int HttpContext ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_5 (int ,int) ;
 int * FUNC_6 (int,int,int,char*) ;
 int VAR_1 ;

int FUNC_7() {
  FUNC_4("starting to initialize http service ...");

  if (VAR_0 == ((void*)0)) {
    FUNC_0("http server is null");
    FUNC_3();
  }

  if (VAR_0->pContextPool == ((void*)0)) {
    VAR_0->pContextPool = FUNC_5(VAR_0->cacheContext, sizeof(HttpContext));
  }
  if (VAR_0->pContextPool == ((void*)0)) {
    FUNC_0("http init context pool failed");
    return -1;
  }

  if (VAR_0->timerHandle == ((void*)0)) {
    VAR_0->timerHandle = FUNC_6(VAR_1 * 20 + 100, 1000, 60000, "http");
  }
  if (VAR_0->timerHandle == ((void*)0)) {
    FUNC_0("http init timer failed");
    return -1;
  }

  if (!FUNC_1(VAR_0)) {
    FUNC_0("http init session failed");
    return -1;
  }

  if (!FUNC_2(VAR_0)) {
    FUNC_0("http init server failed");
    return -1;
  }

  return 0;
}
