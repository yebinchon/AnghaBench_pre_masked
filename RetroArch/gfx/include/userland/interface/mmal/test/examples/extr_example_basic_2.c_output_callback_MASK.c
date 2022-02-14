
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct CONTEXT_T {int semaphore; int queue; } ;
struct TYPE_3__ {scalar_t__ userdata; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   struct CONTEXT_T *VAR_2 = (struct CONTEXT_T *)VAR_0->userdata;


   FUNC_0(VAR_2->queue, VAR_1);


   FUNC_1(&VAR_2->semaphore);
}
