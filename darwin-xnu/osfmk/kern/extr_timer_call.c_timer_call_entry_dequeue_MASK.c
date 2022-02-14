
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int timer_call_t ;
struct TYPE_6__ {int count; } ;
typedef TYPE_1__ mpqueue_head_t ;
struct TYPE_7__ {int queue; } ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static __inline__ mpqueue_head_t *
FUNC_3(
 timer_call_t VAR_0)
{
 mpqueue_head_t *VAR_1 = FUNC_0(FUNC_1(VAR_0)->queue);

 FUNC_2(FUNC_1(VAR_0));
 VAR_1->count--;

 return VAR_1;
}
