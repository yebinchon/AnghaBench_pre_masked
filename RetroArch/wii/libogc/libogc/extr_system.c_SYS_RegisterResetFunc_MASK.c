
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int prev; int * next; } ;
struct TYPE_6__ {scalar_t__ prio; TYPE_4__ node; } ;
typedef TYPE_1__ sys_resetinfo ;
struct TYPE_7__ {scalar_t__ first; } ;
typedef TYPE_2__ lwp_queue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 TYPE_2__ VAR_0 ;

void FUNC_3(sys_resetinfo *VAR_1)
{
 u32 VAR_2;
 sys_resetinfo *VAR_3;
 lwp_queue *VAR_4 = &VAR_0;

 FUNC_0(VAR_2);
 for(VAR_3=(sys_resetinfo*)VAR_4->first;VAR_3->node.next!=((void*)0) && VAR_1->prio>=VAR_3->prio;VAR_3=(sys_resetinfo*)VAR_3->node.next);
 FUNC_2(VAR_3->node.prev,&VAR_1->node);
 FUNC_1(VAR_2);
}
