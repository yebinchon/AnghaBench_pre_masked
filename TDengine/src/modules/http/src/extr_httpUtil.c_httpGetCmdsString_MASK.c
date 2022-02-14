
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* multiCmds; } ;
struct TYPE_4__ {int bufferSize; char* buffer; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpContext ;



char *FUNC_0(HttpContext *VAR_0, int VAR_1) {
  HttpSqlCmds *VAR_2 = VAR_0->multiCmds;
  if (VAR_1 < 0 || VAR_1 >= VAR_2->bufferSize) {
    return "";
  }

  return VAR_2->buffer + VAR_1;
}
