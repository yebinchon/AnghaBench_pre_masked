
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int * last; int * first; } ;
struct TYPE_7__ {TYPE_1__ list; int lock; } ;
typedef TYPE_1__ MMAL_LIST_T ;
typedef TYPE_2__ MMAL_LIST_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

MMAL_LIST_T* FUNC_5(void)
{
   MMAL_LIST_PRIVATE_T *VAR_1;

   VAR_1 = FUNC_1(sizeof(MMAL_LIST_PRIVATE_T), "mmal-list");
   if (VAR_1 == ((void*)0))
      goto error;

   if (FUNC_2(&VAR_1->lock, "mmal-list lock") != VAR_0)
      goto error;


   FUNC_3(&VAR_1->lock);
   VAR_1->list.first = ((void*)0);
   VAR_1->list.last = ((void*)0);
   VAR_1->list.length = 0;
   FUNC_4(&VAR_1->lock);

   return &VAR_1->list;

error:
   FUNC_0(VAR_1);
   return ((void*)0);
}
