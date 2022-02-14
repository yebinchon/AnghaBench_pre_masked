
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int timer_call_t ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ mpqueue_head_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static __inline__ void
FUNC_3(
 timer_call_t VAR_0,
 mpqueue_head_t *VAR_1)
{
 FUNC_2(FUNC_1(VAR_0), FUNC_0(VAR_1));
 VAR_1->count++;
 return;
}
