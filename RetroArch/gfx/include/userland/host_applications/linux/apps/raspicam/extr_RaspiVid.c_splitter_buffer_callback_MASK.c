
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


struct TYPE_24__ {int length; int data; } ;
struct TYPE_23__ {scalar_t__ is_enabled; TYPE_3__* format; scalar_t__ userdata; } ;
struct TYPE_22__ {int abort; TYPE_5__* pstate; int raw_file_handle; } ;
struct TYPE_21__ {scalar_t__ raw_output_fmt; TYPE_4__* splitter_pool; } ;
struct TYPE_20__ {int queue; } ;
struct TYPE_19__ {TYPE_2__* es; } ;
struct TYPE_17__ {int width; int height; } ;
struct TYPE_18__ {TYPE_1__ video; } ;
typedef TYPE_6__ PORT_USERDATA ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_7__ MMAL_PORT_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_8__*) ;
 TYPE_8__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
   MMAL_BUFFER_HEADER_T *VAR_4;
   PORT_USERDATA *VAR_5 = (PORT_USERDATA *)VAR_2->userdata;

   if (VAR_5)
   {
      int VAR_6 = 0;
      int VAR_7 = VAR_3->length;


      if (VAR_3->length && VAR_5->pstate->raw_output_fmt == VAR_1)
         VAR_7 = VAR_2->format->es->video.width * VAR_2->format->es->video.height;

      FUNC_6(VAR_5->raw_file_handle);

      if (VAR_7)
      {
         FUNC_1(VAR_3);
         VAR_6 = FUNC_0(VAR_3->data, 1, VAR_7, VAR_5->raw_file_handle);
         FUNC_2(VAR_3);

         if (VAR_6 != VAR_7)
         {
            FUNC_7("Failed to write raw buffer data (%d from %d)- aborting", VAR_6, VAR_7);
            VAR_5->abort = 1;
         }
      }
   }
   else
   {
      FUNC_7("Received a camera buffer callback with no state");
   }


   FUNC_3(VAR_3);


   if (VAR_2->is_enabled)
   {
      MMAL_STATUS_T VAR_8;

      VAR_4 = FUNC_5(VAR_5->pstate->splitter_pool->queue);

      if (VAR_4)
         VAR_8 = FUNC_4(VAR_2, VAR_4);

      if (!VAR_4 || VAR_8 != VAR_0)
         FUNC_7("Unable to return a buffer to the splitter port");
   }
}
