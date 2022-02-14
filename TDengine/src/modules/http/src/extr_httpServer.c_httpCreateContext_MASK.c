
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fromMemPool; int state; int lastAccessTime; int httpVersion; struct TYPE_8__* signature; } ;
struct TYPE_7__ {int pContextPool; } ;
typedef TYPE_1__ HttpServer ;
typedef TYPE_2__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

HttpContext *FUNC_5(HttpServer *VAR_2) {
  HttpContext *VAR_3 = (HttpContext *)FUNC_4(VAR_2->pContextPool);
  if (VAR_3 != ((void*)0)) {
    VAR_3->fromMemPool = 1;
    FUNC_0("context:%p, is malloced from mempool", VAR_3);
  } else {
    VAR_3 = (HttpContext *)FUNC_1(sizeof(HttpContext));
    if (VAR_3 == ((void*)0)) {
      return ((void*)0);
    } else {
      FUNC_2(VAR_3, 0, sizeof(HttpContext));
    }
    FUNC_0("context:%p, is malloced from raw memory", VAR_3);
  }

  VAR_3->signature = VAR_3;
  VAR_3->httpVersion = VAR_1;
  VAR_3->lastAccessTime = FUNC_3();
  VAR_3->state = VAR_0;
  return VAR_3;
}
