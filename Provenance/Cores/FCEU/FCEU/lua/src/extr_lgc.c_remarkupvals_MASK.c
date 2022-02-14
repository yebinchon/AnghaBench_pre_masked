
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* next; TYPE_4__* prev; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct TYPE_11__ {int v; TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_4__ uvhead; } ;
typedef TYPE_3__ global_State ;
typedef TYPE_4__ UpVal ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4 (global_State *VAR_0) {
  UpVal *VAR_1;
  for (VAR_1 = VAR_0->uvhead.u.l.next; VAR_1 != &VAR_0->uvhead; VAR_1 = VAR_1->u.l.next) {
    FUNC_1(VAR_1->u.l.next->u.l.prev == VAR_1 && VAR_1->u.l.prev->u.l.next == VAR_1);
    if (FUNC_0(FUNC_3(VAR_1)))
      FUNC_2(VAR_0, VAR_1->v);
  }
}
