
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_23__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_19__ ;
typedef struct TYPE_42__ TYPE_18__ ;
typedef struct TYPE_41__ TYPE_17__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int fps_range ;
typedef int camera_num ;
typedef int cam_config ;
struct TYPE_53__ {int den; int num; } ;
struct TYPE_52__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_51__ {int member_0; int member_1; } ;
struct TYPE_50__ {int member_0; int member_1; } ;
struct TYPE_49__ {int member_1; int member_0; } ;
struct TYPE_47__ {int height; int width; } ;
struct TYPE_48__ {TYPE_3__ previewWindow; } ;
struct TYPE_46__ {int member_1; int member_0; } ;
struct TYPE_45__ {int shutter_speed; int stereo_mode; } ;
struct TYPE_44__ {int member_1; int member_0; } ;
struct TYPE_43__ {TYPE_14__* control; TYPE_14__** output; int output_num; } ;
struct TYPE_42__ {TYPE_11__* es; void* encoding; int encoding_variant; } ;
struct TYPE_41__ {int one_shot_stills; int num_preview_video_frames; int hdr; int max_preview_video_h; int max_preview_video_w; int use_stc_timestamp; int fast_preview_resume; int stills_capture_circular_buffer_height; int stills_yuv422; int max_stills_h; int max_stills_w; TYPE_2__ member_0; } ;
struct TYPE_40__ {int hdr; TYPE_7__ member_2; TYPE_6__ member_1; TYPE_5__ member_0; } ;
struct TYPE_39__ {int hdr; int member_1; TYPE_1__ member_0; } ;
struct TYPE_38__ {scalar_t__ buffer_num; TYPE_18__* format; } ;
struct TYPE_36__ {scalar_t__ verbose; int height; int width; int sensor_mode; int cameraNum; } ;
struct TYPE_37__ {TYPE_12__ common_settings; TYPE_19__* camera_component; int raspitex_state; scalar_t__ useGL; TYPE_23__ camera_parameters; TYPE_4__ preview_parameters; scalar_t__ fullResPreview; } ;
struct TYPE_34__ {TYPE_9__ frame_rate; TYPE_8__ crop; void* height; void* width; } ;
struct TYPE_35__ {TYPE_10__ video; } ;
typedef TYPE_13__ RASPISTILL_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_14__ MMAL_PORT_T ;
typedef TYPE_15__ MMAL_PARAMETER_INT32_T ;
typedef TYPE_16__ MMAL_PARAMETER_FPS_RANGE_T ;
typedef TYPE_17__ MMAL_PARAMETER_CAMERA_CONFIG_T ;
typedef TYPE_18__ MMAL_ES_FORMAT_T ;
typedef TYPE_19__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_0 (int ,int) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_19__**) ;
 int FUNC_3 (TYPE_19__*) ;
 scalar_t__ FUNC_4 (TYPE_19__*) ;
 int FUNC_5 (TYPE_18__*,TYPE_18__*) ;
 scalar_t__ FUNC_6 (TYPE_14__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_14__*) ;
 scalar_t__ FUNC_8 (TYPE_14__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_14__*,int ,int ) ;
 int FUNC_10 (TYPE_19__*,TYPE_23__*) ;
 scalar_t__ FUNC_11 (TYPE_14__*,int *) ;
 scalar_t__ FUNC_12 (int *,TYPE_14__*) ;
 int VAR_21 ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_14(RASPISTILL_STATE *VAR_22)
{
   MMAL_COMPONENT_T *VAR_23 = 0;
   MMAL_ES_FORMAT_T *VAR_24;
   MMAL_PORT_T *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
   MMAL_STATUS_T VAR_28;


   VAR_28 = FUNC_2(VAR_5, &VAR_23);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("Failed to create camera component");
      goto error;
   }

   VAR_28 = FUNC_11(VAR_23->output[0], &VAR_22->camera_parameters.stereo_mode);
   VAR_28 += FUNC_11(VAR_23->output[1], &VAR_22->camera_parameters.stereo_mode);
   VAR_28 += FUNC_11(VAR_23->output[2], &VAR_22->camera_parameters.stereo_mode);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("Could not set stereo mode : error %d", VAR_28);
      goto error;
   }

   MMAL_PARAMETER_INT32_T VAR_29 =
   {{VAR_11, sizeof(VAR_29)}, VAR_22->common_settings.cameraNum};

   VAR_28 = FUNC_8(VAR_23->control, &VAR_29.hdr);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("Could not select camera : error %d", VAR_28);
      goto error;
   }

   if (!VAR_23->output_num)
   {
      VAR_28 = VAR_8;
      FUNC_13("Camera doesn't have output ports");
      goto error;
   }

   VAR_28 = FUNC_9(VAR_23->control, VAR_10, VAR_22->common_settings.sensor_mode);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("Could not set sensor mode : error %d", VAR_28);
      goto error;
   }

   VAR_25 = VAR_23->output[VAR_3];
   VAR_26 = VAR_23->output[VAR_4];
   VAR_27 = VAR_23->output[VAR_2];


   VAR_28 = FUNC_6(VAR_23->control, VAR_20);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("Unable to enable control port : error %d", VAR_28);
      goto error;
   }


   {
      MMAL_PARAMETER_CAMERA_CONFIG_T VAR_30 =
      {
         { VAR_9, sizeof(VAR_30) },
         .max_stills_w = VAR_22->common_settings.width,
         .max_stills_h = VAR_22->common_settings.height,
         .stills_yuv422 = 0,
         .one_shot_stills = 1,
         .max_preview_video_w = VAR_22->preview_parameters.previewWindow.width,
         .max_preview_video_h = VAR_22->preview_parameters.previewWindow.height,
         .num_preview_video_frames = 3,
         .stills_capture_circular_buffer_height = 0,
         .fast_preview_resume = 0,
         .use_stc_timestamp = VAR_13
      };

      if (VAR_22->fullResPreview)
      {
         VAR_30.max_preview_video_w = VAR_22->common_settings.width;
         VAR_30.max_preview_video_h = VAR_22->common_settings.height;
      }

      FUNC_8(VAR_23->control, &VAR_30.hdr);
   }

   FUNC_10(VAR_23, &VAR_22->camera_parameters);



   VAR_24 = VAR_25->format;
   VAR_24->encoding = VAR_7;
   VAR_24->encoding_variant = VAR_6;

   if(VAR_22->camera_parameters.shutter_speed > 6000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_31 = {{VAR_12, sizeof(VAR_31)},
         { 50, 1000 }, {166, 1000}
      };
      FUNC_8(VAR_25, &VAR_31.hdr);
   }
   else if(VAR_22->camera_parameters.shutter_speed > 1000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_32 = {{VAR_12, sizeof(VAR_32)},
         { 166, 1000 }, {999, 1000}
      };
      FUNC_8(VAR_25, &VAR_32.hdr);
   }
   if (VAR_22->fullResPreview)
   {


      VAR_24->es->video.width = FUNC_0(VAR_22->common_settings.width, 32);
      VAR_24->es->video.height = FUNC_0(VAR_22->common_settings.height, 16);
      VAR_24->es->video.crop.x = 0;
      VAR_24->es->video.crop.y = 0;
      VAR_24->es->video.crop.width = VAR_22->common_settings.width;
      VAR_24->es->video.crop.height = VAR_22->common_settings.height;
      VAR_24->es->video.frame_rate.num = VAR_1;
      VAR_24->es->video.frame_rate.den = VAR_0;
   }
   else
   {

      VAR_24->es->video.width = FUNC_0(VAR_22->preview_parameters.previewWindow.width, 32);
      VAR_24->es->video.height = FUNC_0(VAR_22->preview_parameters.previewWindow.height, 16);
      VAR_24->es->video.crop.x = 0;
      VAR_24->es->video.crop.y = 0;
      VAR_24->es->video.crop.width = VAR_22->preview_parameters.previewWindow.width;
      VAR_24->es->video.crop.height = VAR_22->preview_parameters.previewWindow.height;
      VAR_24->es->video.frame_rate.num = VAR_16;
      VAR_24->es->video.frame_rate.den = VAR_15;
   }

   VAR_28 = FUNC_7(VAR_25);
   if (VAR_28 != VAR_14)
   {
      FUNC_13("camera viewfinder format couldn't be set");
      goto error;
   }


   FUNC_5(VAR_26->format, VAR_24);
   VAR_28 = FUNC_7(VAR_26);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("camera video format couldn't be set");
      goto error;
   }


   if (VAR_26->buffer_num < VAR_19)
      VAR_26->buffer_num = VAR_19;

   VAR_24 = VAR_27->format;

   if(VAR_22->camera_parameters.shutter_speed > 6000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_33 = {{VAR_12, sizeof(VAR_33)},
         { 50, 1000 }, {166, 1000}
      };
      FUNC_8(VAR_27, &VAR_33.hdr);
   }
   else if(VAR_22->camera_parameters.shutter_speed > 1000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_34 = {{VAR_12, sizeof(VAR_34)},
         { 167, 1000 }, {999, 1000}
      };
      FUNC_8(VAR_27, &VAR_34.hdr);
   }

   VAR_24->encoding = VAR_7;
   VAR_24->es->video.width = FUNC_0(VAR_22->common_settings.width, 32);
   VAR_24->es->video.height = FUNC_0(VAR_22->common_settings.height, 16);
   VAR_24->es->video.crop.x = 0;
   VAR_24->es->video.crop.y = 0;
   VAR_24->es->video.crop.width = VAR_22->common_settings.width;
   VAR_24->es->video.crop.height = VAR_22->common_settings.height;
   VAR_24->es->video.frame_rate.num = VAR_18;
   VAR_24->es->video.frame_rate.den = VAR_17;

   VAR_28 = FUNC_7(VAR_27);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("camera still format couldn't be set");
      goto error;
   }


   if (VAR_27->buffer_num < VAR_19)
      VAR_27->buffer_num = VAR_19;


   VAR_28 = FUNC_4(VAR_23);

   if (VAR_28 != VAR_14)
   {
      FUNC_13("camera component couldn't be enabled");
      goto error;
   }

   if (VAR_22->useGL)
   {
      VAR_28 = FUNC_12(&VAR_22->raspitex_state, VAR_25);
      if (VAR_28 != VAR_14)
      {
         FUNC_1(VAR_21, "Failed to configure preview port for GL rendering");
         goto error;
      }
   }

   VAR_22->camera_component = VAR_23;

   if (VAR_22->common_settings.verbose)
      FUNC_1(VAR_21, "Camera component done\n");

   return VAR_28;

error:

   if (VAR_23)
      FUNC_3(VAR_23);

   return VAR_28;
}
