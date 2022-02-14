
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* timer_call_t ;
struct TYPE_12__ {int count; int earliest_soft_deadline; int head; } ;
typedef TYPE_2__ mpqueue_head_t ;
struct TYPE_13__ {int deadline; int queue; } ;
struct TYPE_11__ {int flags; int soft_deadline; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_6__* FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __inline__ mpqueue_head_t *
FUNC_5(
 timer_call_t VAR_1,
 mpqueue_head_t *VAR_2,
 uint64_t VAR_3)
{
 mpqueue_head_t *VAR_4 = FUNC_0(FUNC_2(VAR_1)->queue);

 FUNC_3(FUNC_2(VAR_1), FUNC_1(VAR_2), VAR_3);





 timer_call_t VAR_5 = (timer_call_t)FUNC_4(&VAR_2->head);
 VAR_2->earliest_soft_deadline = VAR_5->flags & VAR_0 ? FUNC_2(VAR_5)->deadline : VAR_5->soft_deadline;

 if (VAR_4)
  VAR_4->count--;
 VAR_2->count++;

 return VAR_4;
}
