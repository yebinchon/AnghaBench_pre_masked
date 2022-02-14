
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pthread_spinlock_t ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {TYPE_1__ u; int interlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int) ;



 TYPE_2__* VAR_2 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int *) ;

int FUNC_3 (pthread_spinlock_t * VAR_3)
{
   register pthread_spinlock_t VAR_4;

   if (((void*)0) == VAR_3 || ((void*)0) == *VAR_3)
      return (VAR_1);

   if (*VAR_3 == VAR_2)
   {
      int VAR_5;

      if ((VAR_5 = FUNC_1 (VAR_3)) != 0)
         return (VAR_5);
   }

   VAR_4 = *VAR_3;

   switch ((long)
         FUNC_0 (&(VAR_4->interlock),
            130,
            129))
   {
      case 129:
         return 0;
      case 130:
         return VAR_0;
      case 128:
         return FUNC_2 (&(VAR_4->u.mutex));
   }

   return VAR_1;
}
