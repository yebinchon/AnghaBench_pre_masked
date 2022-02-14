
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* timer_call_t ;
struct TYPE_9__ {int count; } ;
typedef TYPE_2__ mpqueue_head_t ;
struct TYPE_10__ {int queue; } ;
struct TYPE_8__ {int async_dequeue; } ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline__ void
FUNC_4(
 timer_call_t VAR_1)
{
 mpqueue_head_t *VAR_2 = FUNC_0(FUNC_1(VAR_1)->queue);
 if (VAR_2) {
  VAR_2->count--;
  (void) FUNC_3(FUNC_2(VAR_1));
  VAR_1->async_dequeue = VAR_0;
 }
 return;
}
