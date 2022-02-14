
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VCOS_STATUS_T ;
struct TYPE_7__ {scalar_t__ magic; int * waiter; } ;
typedef TYPE_1__ VCOS_MSG_T ;
struct TYPE_8__ {int waitsem; int waiter; } ;
typedef TYPE_2__ VCOS_MSG_SIMPLE_WAITER_T ;
typedef int VCOS_MSGQUEUE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

VCOS_STATUS_T FUNC_5(VCOS_MSGQUEUE_T *VAR_2, uint32_t VAR_3, VCOS_MSG_T *VAR_4)
{
   VCOS_STATUS_T VAR_5;
   VCOS_MSG_SIMPLE_WAITER_T VAR_6;

   FUNC_0(VAR_4->magic == VAR_0);




   FUNC_0(VAR_4->waiter == ((void*)0));

   if ((VAR_5=FUNC_3(&VAR_6)) != VAR_1)
      return VAR_5;

   FUNC_1(&VAR_6.waiter, VAR_2, VAR_3, VAR_4);
   FUNC_4(&VAR_6.waitsem);
   FUNC_2(&VAR_6);

   return VAR_1;
}
