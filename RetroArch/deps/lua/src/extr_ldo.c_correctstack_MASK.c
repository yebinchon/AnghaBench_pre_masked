
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int * stack; TYPE_7__* ci; TYPE_6__* openupval; int * top; } ;
typedef TYPE_5__ lua_State ;
struct TYPE_10__ {TYPE_6__* next; } ;
struct TYPE_11__ {TYPE_1__ open; } ;
struct TYPE_15__ {int * v; TYPE_2__ u; } ;
typedef TYPE_6__ UpVal ;
struct TYPE_12__ {int * base; } ;
struct TYPE_13__ {TYPE_3__ l; } ;
struct TYPE_16__ {TYPE_4__ u; int * func; int * top; struct TYPE_16__* previous; } ;
typedef int TValue ;
typedef TYPE_7__ CallInfo ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_1 (lua_State *VAR_0, TValue *VAR_1) {
  CallInfo *VAR_2;
  UpVal *VAR_3;
  VAR_0->top = (VAR_0->top - VAR_1) + VAR_0->stack;
  for (VAR_3 = VAR_0->openupval; VAR_3 != ((void*)0); VAR_3 = VAR_3->u.open.next)
    VAR_3->v = (VAR_3->v - VAR_1) + VAR_0->stack;
  for (VAR_2 = VAR_0->ci; VAR_2 != ((void*)0); VAR_2 = VAR_2->previous) {
    VAR_2->top = (VAR_2->top - VAR_1) + VAR_0->stack;
    VAR_2->func = (VAR_2->func - VAR_1) + VAR_0->stack;
    if (FUNC_0(VAR_2))
      VAR_2->u.l.base = (VAR_2->u.l.base - VAR_1) + VAR_0->stack;
  }
}
