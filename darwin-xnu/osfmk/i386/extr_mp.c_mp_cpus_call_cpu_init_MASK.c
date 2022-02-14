
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_call_t ;
struct TYPE_3__ {int queue; int lock; } ;
typedef TYPE_1__ mp_call_queue_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(int VAR_2)
{
 int VAR_3;
 mp_call_queue_t *VAR_4 = &VAR_1[VAR_2];
 mp_call_t *VAR_5;

 FUNC_4(&VAR_4->lock, 0);
 FUNC_3(&VAR_4->queue);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = (mp_call_t *) FUNC_1(sizeof(mp_call_t));
  FUNC_2(VAR_5);
 }

 FUNC_0("mp_cpus_call_init(%d) done\n", VAR_2);
}
