
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ owner; int mutex; } ;
typedef TYPE_1__ VCOS_REENTRANT_MUTEX_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(VCOS_REENTRANT_MUTEX_T *VAR_0)
{
   FUNC_0(VAR_0->count != 0);
   FUNC_0(VAR_0->owner == FUNC_2());
   VAR_0->count--;
   if (VAR_0->count == 0)
   {
      VAR_0->owner = 0;
      FUNC_1(&VAR_0->mutex);
   }
}
