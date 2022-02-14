
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct CONTEXT_T {int semaphore; int eos; int status; } ;
struct TYPE_7__ {scalar_t__ cmd; scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ userdata; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   struct CONTEXT_T *VAR_5 = (struct CONTEXT_T *)VAR_3->userdata;

   if (VAR_4->cmd == VAR_1)
      VAR_5->status = *(MMAL_STATUS_T *)VAR_4->data;
   else if (VAR_4->cmd == VAR_0)
      VAR_5->eos = VAR_2;

   FUNC_0(VAR_4);


   FUNC_1(&VAR_5->semaphore);
}
