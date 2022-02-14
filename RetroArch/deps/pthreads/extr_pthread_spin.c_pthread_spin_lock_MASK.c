
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pthread_spinlock_t ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {scalar_t__ interlock; TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int *) ;

int FUNC_3 (pthread_spinlock_t * VAR_5)
{
   register pthread_spinlock_t VAR_6;

   if (((void*)0) == VAR_5 || ((void*)0) == *VAR_5)
      return (VAR_0);

   if (*VAR_5 == VAR_4)
   {
      int VAR_7;

      if ((VAR_7 = FUNC_1 (VAR_5)) != 0)
         return (VAR_7);
   }

   VAR_6 = *VAR_5;

   while ( VAR_1 ==
         FUNC_0 (&(VAR_6->interlock),
            VAR_1,
            VAR_2))
   {
   }

   if (VAR_6->interlock == VAR_1)
      return 0;

   if (VAR_6->interlock == VAR_3)
      return FUNC_2 (&(VAR_6->u.mutex));

   return VAR_0;
}
