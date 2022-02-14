
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ slock_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

slock_t *FUNC_4(void)
{
   bool VAR_0 = 0;
   slock_t *VAR_1 = (slock_t*)FUNC_1(1, sizeof(*VAR_1));
   if (!VAR_1)
      return ((void*)0);





   VAR_0 = (FUNC_3(&VAR_1->lock, ((void*)0)) == 0);


   if (!VAR_0)
      goto error;

   return VAR_1;

error:
   FUNC_2(VAR_1);
   return ((void*)0);
}
