
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hooks; } ;
typedef TYPE_1__ chassis_shutdown_hooks_t ;
struct TYPE_7__ {scalar_t__ is_called; int udata; int (* func ) (int ) ;} ;
typedef TYPE_2__ chassis_shutdown_hook_t ;
typedef int GString ;
typedef int GHashTableIter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,void**,void**) ;
 int FUNC_4 (int ) ;

void FUNC_5(chassis_shutdown_hooks_t *VAR_1) {
 GHashTableIter VAR_2;
 GString *VAR_3;
 chassis_shutdown_hook_t *VAR_4;

 FUNC_0(VAR_1);
 FUNC_2(&VAR_2, VAR_1->hooks);
 while (FUNC_3(&VAR_2, (void **)&VAR_3, (void **)&VAR_4)) {
  if (VAR_4->func && !VAR_4->is_called) VAR_4->func(VAR_4->udata);
  VAR_4->is_called = VAR_0;
 }
 FUNC_1(VAR_1);
}
