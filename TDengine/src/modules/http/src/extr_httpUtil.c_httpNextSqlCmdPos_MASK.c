
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* multiCmds; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpContext ;



int FUNC_0(HttpContext *VAR_0) {
  HttpSqlCmds *VAR_1 = VAR_0->multiCmds;
  return VAR_1->size;
}
