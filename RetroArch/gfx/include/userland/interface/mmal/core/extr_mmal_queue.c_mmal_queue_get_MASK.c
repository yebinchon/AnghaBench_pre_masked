
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int semaphore; } ;
typedef TYPE_1__ MMAL_QUEUE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

MMAL_BUFFER_HEADER_T *FUNC_3(MMAL_QUEUE_T *VAR_1)
{
   FUNC_1(VAR_1);
   if(!VAR_1) return 0;

   if(FUNC_2(&VAR_1->semaphore) != VAR_0)
       return ((void*)0);

   return FUNC_0(VAR_1);
}
