
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCOS_MSG_WAITER_T ;
typedef int VCOS_MSG_T ;
struct TYPE_3__ {int sem; } ;
typedef TYPE_1__ VCOS_MSGQUEUE_T ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(VCOS_MSG_WAITER_T *VAR_0,
                                            VCOS_MSG_T *VAR_1)
{
   VCOS_MSGQUEUE_T *VAR_2 = (VCOS_MSGQUEUE_T*)VAR_0;
   FUNC_0(VAR_2, VAR_1);
   FUNC_1(&VAR_2->sem);
}
