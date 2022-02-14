
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int semaphore; } ;
typedef TYPE_1__ MMAL_QUEUE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

MMAL_BUFFER_HEADER_T *FUNC_2(MMAL_QUEUE_T *VAR_1)
{
 if(!VAR_1) return 0;

   if (FUNC_1(&VAR_1->semaphore) != VAR_0)
       return ((void*)0);

   return FUNC_0(VAR_1);
}
