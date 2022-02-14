
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* multiCmds; } ;
struct TYPE_8__ {int cmdState; int cmdReturnType; int cmdType; } ;
struct TYPE_7__ {int size; int maxSize; TYPE_2__* cmds; } ;
typedef TYPE_1__ HttpSqlCmds ;
typedef TYPE_2__ HttpSqlCmd ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;

HttpSqlCmd *FUNC_1(HttpContext *VAR_3) {
  HttpSqlCmds *VAR_4 = VAR_3->multiCmds;
  if (VAR_4->size >= VAR_4->maxSize) {
    if (!FUNC_0(VAR_3, 2 * VAR_4->maxSize)) return ((void*)0);
  }

  HttpSqlCmd *VAR_5 = VAR_4->cmds + VAR_4->size++;
  VAR_5->cmdType = VAR_2;
  VAR_5->cmdReturnType = VAR_0;
  VAR_5->cmdState = VAR_1;

  return VAR_5;
}
