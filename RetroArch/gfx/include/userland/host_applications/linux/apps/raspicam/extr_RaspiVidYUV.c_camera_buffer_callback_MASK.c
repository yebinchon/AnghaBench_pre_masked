
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int int64_t ;
struct TYPE_28__ {scalar_t__ is_enabled; TYPE_3__* format; scalar_t__ userdata; } ;
struct TYPE_27__ {int abort; scalar_t__ lasttime; int starttime; TYPE_7__* pstate; int frame; scalar_t__ pts_file_handle; int file_handle; } ;
struct TYPE_24__ {int enable_annotate; char* annotate_string; int annotate_y; int annotate_x; int annotate_justify; int annotate_bg_colour; int annotate_text_colour; int annotate_text_size; } ;
struct TYPE_23__ {scalar_t__ gps; } ;
struct TYPE_26__ {scalar_t__ frame; scalar_t__ starttime; TYPE_6__* camera_pool; TYPE_5__ camera_parameters; int camera_component; TYPE_4__ common_settings; scalar_t__ onlyLuma; } ;
struct TYPE_25__ {int queue; } ;
struct TYPE_22__ {TYPE_2__* es; } ;
struct TYPE_20__ {int width; int height; } ;
struct TYPE_21__ {TYPE_1__ video; } ;
struct TYPE_19__ {int length; scalar_t__ pts; int data; } ;
typedef TYPE_7__ RASPIVIDYUV_STATE ;
typedef TYPE_8__ PORT_USERDATA ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_9__ MMAL_PORT_T ;
typedef TYPE_10__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 scalar_t__ FUNC_7 (TYPE_9__*,TYPE_10__*) ;
 TYPE_10__* FUNC_8 (int ) ;
 char* FUNC_9 () ;
 int FUNC_10 (int ,int,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void FUNC_14(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   MMAL_BUFFER_HEADER_T *VAR_5;
   static int64_t VAR_6 = -1;



   PORT_USERDATA *VAR_7 = (PORT_USERDATA *)VAR_3->userdata;
   RASPIVIDYUV_STATE *VAR_8 = VAR_7->pstate;

   if (VAR_7)
   {
      int VAR_9 = 0;
      int VAR_10 = VAR_4->length;
      int64_t VAR_11 = FUNC_3()/1000000;

      if (VAR_8->onlyLuma)
         VAR_10 = FUNC_13(VAR_4->length, VAR_3->format->es->video.width * VAR_3->format->es->video.height);

      FUNC_11(VAR_7->file_handle);

      if (VAR_10)
      {
         FUNC_4(VAR_4);
         VAR_9 = FUNC_2(VAR_4->data, 1, VAR_10, VAR_7->file_handle);
         FUNC_5(VAR_4);

         if (VAR_9 != VAR_10)
         {
            FUNC_12("Failed to write buffer data (%d from %d)- aborting", VAR_9, VAR_10);
            VAR_7->abort = 1;
         }
         if (VAR_7->pts_file_handle)
         {






            if(VAR_4->pts != VAR_2)
            {
               int64_t VAR_12;
               if(VAR_8->frame==0)
                  VAR_8->starttime=VAR_4->pts;
               VAR_7->lasttime=VAR_4->pts;
               VAR_12 = VAR_4->pts - VAR_7->starttime;
               FUNC_0(VAR_7->pts_file_handle,"%d.%03d\n", VAR_12/1000, VAR_12%1000);
               VAR_7->frame++;
            }
         }
      }


      if (VAR_11 != VAR_6)
      {
         if ((VAR_8->camera_parameters.enable_annotate & VAR_0) && VAR_8->common_settings.gps)
         {
            char *VAR_13 = FUNC_9();
            FUNC_10(VAR_8->camera_component, VAR_8->camera_parameters.enable_annotate,
                                         VAR_13,
                                         VAR_8->camera_parameters.annotate_text_size,
                                         VAR_8->camera_parameters.annotate_text_colour,
                                         VAR_8->camera_parameters.annotate_bg_colour,
                                         VAR_8->camera_parameters.annotate_justify,
                                         VAR_8->camera_parameters.annotate_x,
                                         VAR_8->camera_parameters.annotate_y
                                        );
            FUNC_1(VAR_13);
         }
         else
            FUNC_10(VAR_8->camera_component, VAR_8->camera_parameters.enable_annotate,
                                         VAR_8->camera_parameters.annotate_string,
                                         VAR_8->camera_parameters.annotate_text_size,
                                         VAR_8->camera_parameters.annotate_text_colour,
                                         VAR_8->camera_parameters.annotate_bg_colour,
                                         VAR_8->camera_parameters.annotate_justify,
                                         VAR_8->camera_parameters.annotate_x,
                                         VAR_8->camera_parameters.annotate_y
                                        );
         VAR_6 = VAR_11;
      }

   }
   else
   {
      FUNC_12("Received a camera buffer callback with no state");
   }


   FUNC_6(VAR_4);


   if (VAR_3->is_enabled)
   {
      MMAL_STATUS_T VAR_14;

      VAR_5 = FUNC_8(VAR_7->pstate->camera_pool->queue);

      if (VAR_5)
         VAR_14 = FUNC_7(VAR_3, VAR_5);

      if (!VAR_5 || VAR_14 != VAR_1)
         FUNC_12("Unable to return a buffer to the camera port");
   }
}
