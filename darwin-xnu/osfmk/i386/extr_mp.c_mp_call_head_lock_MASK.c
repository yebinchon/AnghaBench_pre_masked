
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ mp_call_queue_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline boolean_t
FUNC_2(mp_call_queue_t *VAR_1)
{
 boolean_t VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
