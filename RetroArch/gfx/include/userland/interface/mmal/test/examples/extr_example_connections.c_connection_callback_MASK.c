
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct CONTEXT_T {int semaphore; } ;
struct TYPE_3__ {scalar_t__ user_data; } ;
typedef TYPE_1__ MMAL_CONNECTION_T ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(MMAL_CONNECTION_T *VAR_0)
{
   struct CONTEXT_T *VAR_1 = (struct CONTEXT_T *)VAR_0->user_data;


   FUNC_0(&VAR_1->semaphore);
}
