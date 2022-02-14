
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* pthread_attr_t ;
struct TYPE_4__ {int sched_priority; } ;
struct TYPE_5__ {int valid; int contentionscope; int inheritsched; TYPE_1__ param; int detachstate; int * stackaddr; scalar_t__ stacksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;

int FUNC_2 (pthread_attr_t * VAR_6)
{
   pthread_attr_t VAR_7;


   if (VAR_6 == ((void*)0))
      return VAR_0;

   VAR_7 = (pthread_attr_t) FUNC_0 (sizeof (*VAR_7));

   if (VAR_7 == ((void*)0))
      return VAR_1;
   VAR_7->detachstate = VAR_3;






   VAR_7->param.sched_priority = FUNC_1();
   VAR_7->inheritsched = VAR_4;
   VAR_7->contentionscope = VAR_5;

   VAR_7->valid = VAR_2;

   *VAR_6 = VAR_7;

   return 0;
}
