
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_4__ {int detachstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__* const*) ;

int FUNC_1 (const pthread_attr_t * VAR_2, int *VAR_3)
{
   if (FUNC_0 (VAR_2) != 0 || VAR_3 == ((void*)0))
   {
      *VAR_3 = VAR_1;
      return VAR_0;
   }

   *VAR_3 = (*VAR_2)->detachstate;
   return 0;
}
