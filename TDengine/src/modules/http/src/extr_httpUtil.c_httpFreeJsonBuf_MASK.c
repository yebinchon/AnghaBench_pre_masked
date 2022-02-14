
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * jsonBuf; } ;
typedef TYPE_1__ HttpContext ;


 int FUNC_0 (int *) ;

void FUNC_1(HttpContext *VAR_0) {
  if (VAR_0->jsonBuf != ((void*)0)) {
    FUNC_0(VAR_0->jsonBuf);
    VAR_0->jsonBuf = 0;
  }
}
