
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* multiCmds; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ maxSize; int * cmds; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef int HttpSqlCmd ;
typedef TYPE_2__ HttpContext ;



HttpSqlCmd *FUNC_0(HttpContext *VAR_0) {
  HttpSqlCmds *VAR_1 = VAR_0->multiCmds;
  if (VAR_1->size == 0) return ((void*)0);
  if (VAR_1->size > VAR_1->maxSize) return ((void*)0);

  return VAR_1->cmds + VAR_1->size - 1;
}
