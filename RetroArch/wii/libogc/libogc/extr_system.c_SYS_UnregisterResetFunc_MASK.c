
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__ node; } ;
typedef TYPE_1__ sys_resetinfo ;
typedef TYPE_2__ lwp_node ;
struct TYPE_8__ {TYPE_2__* first; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

void FUNC_3(sys_resetinfo *VAR_1) {
 u32 VAR_2;
 lwp_node *VAR_3;

 FUNC_0(VAR_2);
 for (VAR_3 = VAR_0.first; VAR_3->next; VAR_3 = VAR_3->next) {
  if (VAR_3 == &VAR_1->node) {
   FUNC_2(VAR_3);
   break;
  }
 }
 FUNC_1(VAR_2);
}
