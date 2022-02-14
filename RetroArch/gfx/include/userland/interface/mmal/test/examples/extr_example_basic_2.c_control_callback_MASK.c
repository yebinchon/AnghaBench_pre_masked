
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct CONTEXT_T {int semaphore; int status; } ;
struct TYPE_7__ {int cmd; scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ userdata; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   struct CONTEXT_T *VAR_2 = (struct CONTEXT_T *)VAR_0->userdata;

   switch (VAR_1->cmd)
   {
   case 129:

      break;
   case 128:

      VAR_2->status = *(MMAL_STATUS_T *)VAR_1->data;
      break;
   default:
      break;
   }


   FUNC_0(VAR_1);


   FUNC_1(&VAR_2->semaphore);
}
