
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cmds; struct TYPE_5__* buffer; } ;
struct TYPE_4__ {TYPE_3__* multiCmds; } ;
typedef TYPE_1__ HttpContext ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(HttpContext *VAR_0) {
  if (VAR_0->multiCmds != ((void*)0)) {
    if (VAR_0->multiCmds->buffer != ((void*)0)) FUNC_0(VAR_0->multiCmds->buffer);
    if (VAR_0->multiCmds->cmds != ((void*)0)) FUNC_0(VAR_0->multiCmds->cmds);
    FUNC_0(VAR_0->multiCmds);
    VAR_0->multiCmds = ((void*)0);
  }
}
