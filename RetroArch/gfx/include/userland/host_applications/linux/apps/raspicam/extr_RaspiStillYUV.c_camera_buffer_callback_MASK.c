
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_24__ {int length; int flags; int data; } ;
struct TYPE_23__ {scalar_t__ is_enabled; TYPE_3__* format; scalar_t__ userdata; } ;
struct TYPE_22__ {int complete_semaphore; TYPE_5__* pstate; scalar_t__ file_handle; } ;
struct TYPE_21__ {TYPE_4__* camera_pool; scalar_t__ onlyLuma; } ;
struct TYPE_20__ {int queue; } ;
struct TYPE_19__ {TYPE_2__* es; } ;
struct TYPE_17__ {int width; int height; } ;
struct TYPE_18__ {TYPE_1__ video; } ;
typedef TYPE_6__ PORT_USERDATA ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_7__ MMAL_PORT_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int,scalar_t__) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_8__*) ;
 TYPE_8__* FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   int VAR_5 = 0;


   PORT_USERDATA *VAR_6 = (PORT_USERDATA *)VAR_3->userdata;

   if (VAR_6)
   {
      int VAR_7 = 0;
      int VAR_8 = VAR_4->length;

      if (VAR_6->pstate->onlyLuma)
         VAR_8 = FUNC_7(VAR_4->length, VAR_3->format->es->video.width * VAR_3->format->es->video.height);

      if (VAR_8 && VAR_6->file_handle)
      {
         FUNC_1(VAR_4);

         VAR_7 = FUNC_0(VAR_4->data, 1, VAR_8, VAR_6->file_handle);

         FUNC_2(VAR_4);
      }


      if (VAR_4->length && VAR_7 != VAR_8)
      {
         FUNC_6("Unable to write buffer to file - aborting %d vs %d", VAR_7, VAR_8);
         VAR_5 = 1;
      }


      if (VAR_4->flags & (VAR_0 | VAR_1))
         VAR_5 = 1;
   }
   else
   {
      FUNC_6("Received a camera still buffer callback with no state");
   }


   FUNC_3(VAR_4);


   if (VAR_3->is_enabled)
   {
      MMAL_STATUS_T VAR_9;
      MMAL_BUFFER_HEADER_T *VAR_10 = FUNC_5(VAR_6->pstate->camera_pool->queue);


      if (VAR_10)
      {
         VAR_9 = FUNC_4(VAR_3, VAR_10);
      }

      if (!VAR_10 || VAR_9 != VAR_2)
         FUNC_6("Unable to return the buffer to the camera still port");
   }

   if (VAR_5)
   {
      FUNC_8(&(VAR_6->complete_semaphore));
   }
}
