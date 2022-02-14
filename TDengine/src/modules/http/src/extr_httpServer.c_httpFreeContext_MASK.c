
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fromMemPool; } ;
struct TYPE_7__ {int pContextPool; } ;
typedef TYPE_1__ HttpServer ;
typedef TYPE_2__ HttpContext ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(HttpServer *VAR_0, HttpContext *VAR_1) {
  if (VAR_1->fromMemPool) {
    FUNC_0("context:%p, is freed from mempool", VAR_1);
    FUNC_1(VAR_0->pContextPool, (char *)VAR_1);
  } else {
    FUNC_0("context:%p, is freed from raw memory", VAR_1);
    FUNC_2(VAR_1);
  }
}
