
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancelledDueToDeadlock; int mutex; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(void)
{
 bool VAR_1 = 0;


 if (!VAR_0)
 {
  return 0;
 }

 FUNC_1(&VAR_0->mutex);

 if (FUNC_0(VAR_0))
 {
  VAR_1 = VAR_0->cancelledDueToDeadlock;
 }

 FUNC_2(&VAR_0->mutex);

 return VAR_1;
}
