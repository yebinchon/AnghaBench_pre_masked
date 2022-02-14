
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pc; TYPE_1__* f; } ;
struct TYPE_4__ {int* lineinfo; } ;
typedef TYPE_2__ FuncState ;



void FUNC_0 (FuncState *VAR_0, int VAR_1) {
  VAR_0->f->lineinfo[VAR_0->pc - 1] = VAR_1;
}
