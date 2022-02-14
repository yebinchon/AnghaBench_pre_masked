
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; scalar_t__ first; scalar_t__* last; scalar_t__ length; int semaphore; } ;
typedef TYPE_1__ MMAL_QUEUE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*,int ) ;

MMAL_QUEUE_T *FUNC_8(void)
{
   MMAL_QUEUE_T *VAR_1;

   VAR_1 = FUNC_2(sizeof(*VAR_1), "MMAL queue");
   if(!VAR_1) return 0;

   if(FUNC_3(&VAR_1->lock, "MMAL queue lock") != VAR_0 )
   {
      FUNC_1(VAR_1);
      return 0;
   }

   if(FUNC_7(&VAR_1->semaphore, "MMAL queue sema", 0) != VAR_0 )
   {
      FUNC_4(&VAR_1->lock);
      FUNC_1(VAR_1);
      return 0;
   }

                                      FUNC_5(&VAR_1->lock);
   VAR_1->length = 0;
   VAR_1->first = 0;
   VAR_1->last = &VAR_1->first;
   FUNC_0(VAR_1, ((void*)0));
                                        FUNC_6(&VAR_1->lock);

   return VAR_1;
}
