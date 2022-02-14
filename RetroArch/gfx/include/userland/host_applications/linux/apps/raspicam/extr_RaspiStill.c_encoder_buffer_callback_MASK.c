
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int length; int flags; int data; } ;
struct TYPE_17__ {scalar_t__ is_enabled; scalar_t__ userdata; } ;
struct TYPE_16__ {int complete_semaphore; TYPE_2__* pstate; scalar_t__ file_handle; } ;
struct TYPE_15__ {TYPE_1__* encoder_pool; } ;
struct TYPE_14__ {int queue; } ;
typedef TYPE_3__ PORT_USERDATA ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int,scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   int VAR_5 = 0;



   PORT_USERDATA *VAR_6 = (PORT_USERDATA *)VAR_3->userdata;

   if (VAR_6)
   {
      int VAR_7 = VAR_4->length;

      if (VAR_4->length && VAR_6->file_handle)
      {
         FUNC_1(VAR_4);

         VAR_7 = FUNC_0(VAR_4->data, 1, VAR_4->length, VAR_6->file_handle);

         FUNC_2(VAR_4);
      }


      if (VAR_7 != VAR_4->length)
      {
         FUNC_6("Unable to write buffer to file - aborting");
         VAR_5 = 1;
      }


      if (VAR_4->flags & (VAR_0 | VAR_1))
         VAR_5 = 1;
   }
   else
   {
      FUNC_6("Received a encoder buffer callback with no state");
   }


   FUNC_3(VAR_4);


   if (VAR_3->is_enabled)
   {
      MMAL_STATUS_T VAR_8 = VAR_2;
      MMAL_BUFFER_HEADER_T *VAR_9;

      VAR_9 = FUNC_5(VAR_6->pstate->encoder_pool->queue);

      if (VAR_9)
      {
         VAR_8 = FUNC_4(VAR_3, VAR_9);
      }
      if (!VAR_9 || VAR_8 != VAR_2)
         FUNC_6("Unable to return a buffer to the encoder port");
   }

   if (VAR_5)
      FUNC_7(&(VAR_6->complete_semaphore));
}
