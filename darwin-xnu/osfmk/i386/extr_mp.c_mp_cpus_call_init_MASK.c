
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; int lock; } ;
typedef TYPE_1__ mp_call_queue_t ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 mp_call_queue_t *VAR_1 = &VAR_0;

 FUNC_0("mp_cpus_call_init()\n");
 FUNC_2(&VAR_1->lock, 0);
 FUNC_1(&VAR_1->queue);
}
