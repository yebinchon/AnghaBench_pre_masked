
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int size; int id; } ;
struct TYPE_11__ {int ** input; int input_num; } ;
struct TYPE_10__ {int set; int fullscreen; TYPE_5__ hdr; int dest_rect; int alpha; int layer; } ;
struct TYPE_9__ {TYPE_3__* preview_component; int previewWindow; scalar_t__ wantFullScreenPreview; int opacity; int wantPreview; } ;
typedef TYPE_1__ RASPIPREVIEW_PARAMETERS ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_DISPLAYREGION_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,TYPE_3__**) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (char*,...) ;

MMAL_STATUS_T FUNC_5(RASPIPREVIEW_PARAMETERS *VAR_9)
{
   MMAL_COMPONENT_T *VAR_10 = 0;
   MMAL_PORT_T *VAR_11 = ((void*)0);
   MMAL_STATUS_T VAR_12;

   if (!VAR_9->wantPreview)
   {

      VAR_12 = FUNC_0("vc.null_sink", &VAR_10);

      if (VAR_12 != VAR_7)
      {
         FUNC_4("Unable to create null sink component");
         goto error;
      }
   }
   else
   {
      VAR_12 = FUNC_0(VAR_0,
                                     &VAR_10);

      if (VAR_12 != VAR_7)
      {
         FUNC_4("Unable to create preview component");
         goto error;
      }

      if (!VAR_10->input_num)
      {
         VAR_12 = VAR_5;
         FUNC_4("No input ports found on component");
         goto error;
      }

      VAR_11 = VAR_10->input[0];

      MMAL_DISPLAYREGION_T VAR_13;
      VAR_13.hdr.id = VAR_6;
      VAR_13.hdr.size = sizeof(MMAL_DISPLAYREGION_T);

      VAR_13.set = VAR_4;
      VAR_13.layer = VAR_8;

      VAR_13.set |= VAR_1;
      VAR_13.alpha = VAR_9->opacity;

      if (VAR_9->wantFullScreenPreview)
      {
         VAR_13.set |= VAR_3;
         VAR_13.fullscreen = 1;
      }
      else
      {
         VAR_13.set |= (VAR_2 | VAR_3);
         VAR_13.fullscreen = 0;
         VAR_13.dest_rect = VAR_9->previewWindow;
      }

      VAR_12 = FUNC_3(VAR_11, &VAR_13.hdr);

      if (VAR_12 != VAR_7 && VAR_12 != VAR_5)
      {
         FUNC_4("unable to set preview port parameters (%u)", VAR_12);
         goto error;
      }
   }


   VAR_12 = FUNC_2(VAR_10);

   if (VAR_12 != VAR_7)
   {
      FUNC_4("Unable to enable preview/null sink component (%u)", VAR_12);
      goto error;
   }

   VAR_9->preview_component = VAR_10;

   return VAR_12;

error:

   if (VAR_10)
      FUNC_1(VAR_10);

   return VAR_12;
}
