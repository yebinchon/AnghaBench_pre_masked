
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* multiCmds; } ;
struct TYPE_5__ {char* buffer; int bufferPos; int bufferSize; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpContext ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (char*,int ,size_t) ;

int32_t FUNC_2(HttpContext *VAR_0, int VAR_1) {
  HttpSqlCmds *VAR_2 = VAR_0->multiCmds;
  if (VAR_2->buffer == ((void*)0)) return -1;

  if (VAR_2->bufferPos + VAR_1 >= VAR_2->bufferSize) {
    if (!FUNC_0(VAR_0, VAR_2->bufferSize * 2)) return -1;
  }

  char *VAR_3 = VAR_2->buffer + VAR_2->bufferPos;
  FUNC_1(VAR_2->buffer + VAR_2->bufferPos, 0, (size_t)VAR_1);
  VAR_2->bufferPos = VAR_2->bufferPos + VAR_1;

  return (int32_t)(VAR_3 - VAR_2->buffer);
}
