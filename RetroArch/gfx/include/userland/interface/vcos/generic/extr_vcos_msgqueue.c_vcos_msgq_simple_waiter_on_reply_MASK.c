
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VCOS_MSG_WAITER_T ;
typedef int VCOS_MSG_T ;
struct TYPE_2__ {int waitsem; } ;
typedef TYPE_1__ VCOS_MSG_SIMPLE_WAITER_T ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(VCOS_MSG_WAITER_T *VAR_0,
                                             VCOS_MSG_T *VAR_1)
{
   VCOS_MSG_SIMPLE_WAITER_T *VAR_2;
   (void)VAR_1;
   VAR_2 = (VCOS_MSG_SIMPLE_WAITER_T*)VAR_0;
   FUNC_0(&VAR_2->waitsem);
}
