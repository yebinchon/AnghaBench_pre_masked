
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ next; } ;
struct TYPE_7__ {scalar_t__ (* func ) (int) ;TYPE_1__ node; } ;
typedef TYPE_2__ sys_resetinfo ;
typedef int s32 ;
struct TYPE_8__ {scalar_t__ first; } ;
typedef TYPE_3__ lwp_queue ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static s32 FUNC_3(s32 VAR_1)
{
 s32 VAR_2;
 sys_resetinfo *VAR_3;
 lwp_queue *VAR_4 = &VAR_0;

 VAR_2 = 1;
 VAR_3 = (sys_resetinfo*)VAR_4->first;
 while(VAR_3!=(sys_resetinfo*)FUNC_0(VAR_4)) {
  if(VAR_3->func && VAR_3->func(VAR_1)==0) VAR_2 |= (VAR_2<<1);
  VAR_3 = (sys_resetinfo*)VAR_3->node.next;
 }
 if(FUNC_1()==0) VAR_2 |= (VAR_2<<1);

 if(VAR_2&~0x01) return 0;
 return 1;
}
