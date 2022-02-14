
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* multiCmds; } ;
struct TYPE_5__ {char* buffer; int bufferSize; int bufferPos; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpContext ;


 int FUNC_0 (TYPE_2__*,int) ;

int32_t FUNC_1(HttpContext *VAR_0) {
  HttpSqlCmds *VAR_1 = VAR_0->multiCmds;
  if (VAR_1->buffer == ((void*)0)) return -1;

  int VAR_2 = VAR_1->bufferSize - VAR_1->bufferPos;
  if (VAR_2 < 4096) {
    if (!FUNC_0(VAR_0, VAR_1->bufferSize * 2)) return -1;
  }

  char *VAR_3 = VAR_1->buffer + VAR_1->bufferPos;
  *VAR_3 = 0;
  VAR_1->bufferPos = VAR_1->bufferPos + 1;

  VAR_2 = VAR_1->bufferSize - VAR_1->bufferPos;
  if (VAR_2 < 4096) {
    if (!FUNC_0(VAR_0, VAR_1->bufferSize * 2)) return -1;
  }

  return (int32_t)(VAR_3 - VAR_1->buffer);
}
