
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
typedef TYPE_2__* pthread_mutex_t ;
struct TYPE_6__ {int handle; int * ownerThread; int kind; scalar_t__ recursive_count; scalar_t__ lock_idx; } ;
struct TYPE_5__ {int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2 (pthread_mutex_t * VAR_3, const pthread_mutexattr_t * VAR_4)
{
   int VAR_5 = 0;
   pthread_mutex_t VAR_6;

   if (VAR_3 == ((void*)0))
      return VAR_0;

   VAR_6 = (pthread_mutex_t) FUNC_0 (1, sizeof (*VAR_6));

   if (VAR_6 == ((void*)0))
      VAR_5 = VAR_1;
   else
   {
      VAR_6->lock_idx = 0;
      VAR_6->recursive_count = 0;
      VAR_6->kind = (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0)
            ? VAR_2 : (*VAR_4)->kind);
      VAR_6->ownerThread = ((void*)0);

      FUNC_1(0,&VAR_6->handle);

   }

   *VAR_3 = VAR_6;

   return (VAR_5);
}
