
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_21__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_19__ ;
typedef struct TYPE_43__ TYPE_18__ ;
typedef struct TYPE_42__ TYPE_17__ ;
typedef struct TYPE_41__ TYPE_16__ ;
typedef struct TYPE_40__ TYPE_15__ ;
typedef struct TYPE_39__ TYPE_14__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;
typedef struct TYPE_36__ TYPE_11__ ;
typedef struct TYPE_35__ TYPE_10__ ;


typedef int fps_range ;
typedef int camera_num ;
typedef int cam_config ;
struct TYPE_53__ {int den; int num; } ;
struct TYPE_52__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_54__ {TYPE_8__ frame_rate; TYPE_7__ crop; void* height; void* width; } ;
struct TYPE_51__ {int member_0; int member_1; } ;
struct TYPE_50__ {int member_0; int member_1; } ;
struct TYPE_49__ {int member_1; int member_0; } ;
struct TYPE_47__ {int height; int width; } ;
struct TYPE_48__ {TYPE_2__ previewWindow; } ;
struct TYPE_46__ {int shutter_speed; } ;
struct TYPE_45__ {int member_1; int member_0; } ;
struct TYPE_44__ {TYPE_14__* control; TYPE_14__** output; int output_num; } ;
struct TYPE_43__ {scalar_t__ encoding; TYPE_10__* es; void* encoding_variant; } ;
struct TYPE_42__ {int one_shot_stills; int num_preview_video_frames; int hdr; int max_preview_video_h; int max_preview_video_w; int use_stc_timestamp; int fast_preview_resume; int stills_capture_circular_buffer_height; int stills_yuv422; int max_stills_h; int max_stills_w; TYPE_1__ member_0; } ;
struct TYPE_41__ {int hdr; TYPE_6__ member_2; TYPE_5__ member_1; TYPE_4__ member_0; } ;
struct TYPE_36__ {int member_1; int member_0; } ;
struct TYPE_40__ {int hdr; int member_1; TYPE_11__ member_0; } ;
struct TYPE_39__ {scalar_t__ buffer_num; scalar_t__ buffer_size; scalar_t__ buffer_size_min; scalar_t__ buffer_num_recommended; scalar_t__ name; TYPE_18__* format; } ;
struct TYPE_37__ {scalar_t__ verbose; int height; int width; int sensor_mode; int cameraNum; } ;
struct TYPE_38__ {scalar_t__ encoding; TYPE_12__ common_settings; TYPE_19__* camera_component; int * camera_pool; TYPE_21__ camera_parameters; TYPE_3__ preview_parameters; scalar_t__ fullResPreview; } ;
struct TYPE_35__ {TYPE_9__ video; } ;
typedef TYPE_13__ RASPISTILLYUV_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_14__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
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
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_0 (int ,int) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_19__**) ;
 int FUNC_3 (TYPE_19__*) ;
 scalar_t__ FUNC_4 (TYPE_19__*) ;
 int FUNC_5 (TYPE_18__*,TYPE_18__*) ;
 scalar_t__ FUNC_6 (TYPE_14__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_14__*) ;
 scalar_t__ FUNC_8 (TYPE_14__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_14__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_14__*,int ,int ) ;
 int * FUNC_11 (TYPE_14__*,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_14__*) ;
 int FUNC_13 (TYPE_19__*,TYPE_21__*) ;
 int VAR_25 ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_15(RASPISTILLYUV_STATE *VAR_26)
{
   MMAL_COMPONENT_T *VAR_27 = 0;
   MMAL_ES_FORMAT_T *VAR_28;
   MMAL_PORT_T *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);
   MMAL_STATUS_T VAR_32;
   MMAL_POOL_T *VAR_33;


   VAR_32 = FUNC_2(VAR_5, &VAR_27);

   if (VAR_32 != VAR_17)
   {
      FUNC_14("Failed to create camera component");
      goto error;
   }

   MMAL_PARAMETER_INT32_T VAR_34 =
   {{VAR_13, sizeof(VAR_34)}, VAR_26->common_settings.cameraNum};

   VAR_32 = FUNC_8(VAR_27->control, &VAR_34.hdr);

   if (VAR_32 != VAR_17)
   {
      FUNC_14("Could not select camera : error %d", VAR_32);
      goto error;
   }

   if (!VAR_27->output_num)
   {
      VAR_32 = VAR_10;
      FUNC_14("Camera doesn't have output ports");
      goto error;
   }

   VAR_32 = FUNC_10(VAR_27->control, VAR_12, VAR_26->common_settings.sensor_mode);

   if (VAR_32 != VAR_17)
   {
      FUNC_14("Could not set sensor mode : error %d", VAR_32);
      goto error;
   }

   VAR_29 = VAR_27->output[VAR_3];
   VAR_30 = VAR_27->output[VAR_4];
   VAR_31 = VAR_27->output[VAR_2];


   VAR_32 = FUNC_6(VAR_27->control, VAR_24);

   if (VAR_32 != VAR_17 )
   {
      FUNC_14("Unable to enable control port : error %d", VAR_32);
      goto error;
   }


   {
      MMAL_PARAMETER_CAMERA_CONFIG_T VAR_35 =
      {
         { VAR_11, sizeof(VAR_35) },
         .max_stills_w = VAR_26->common_settings.width,
         .max_stills_h = VAR_26->common_settings.height,
         .stills_yuv422 = 0,
         .one_shot_stills = 1,
         .max_preview_video_w = VAR_26->preview_parameters.previewWindow.width,
         .max_preview_video_h = VAR_26->preview_parameters.previewWindow.height,
         .num_preview_video_frames = 3,
         .stills_capture_circular_buffer_height = 0,
         .fast_preview_resume = 0,
         .use_stc_timestamp = VAR_16
      };

      if (VAR_26->fullResPreview)
      {
         VAR_35.max_preview_video_w = VAR_26->common_settings.width;
         VAR_35.max_preview_video_h = VAR_26->common_settings.height;
      }

      FUNC_8(VAR_27->control, &VAR_35.hdr);
   }

   FUNC_13(VAR_27, &VAR_26->camera_parameters);



   VAR_28 = VAR_29->format;

   VAR_28->encoding = VAR_8;
   VAR_28->encoding_variant = VAR_7;

   if(VAR_26->camera_parameters.shutter_speed > 6000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_36 = {{VAR_14, sizeof(VAR_36)},
         { 50, 1000 }, {166, 1000}
      };
      FUNC_8(VAR_29, &VAR_36.hdr);
   }
   else if(VAR_26->camera_parameters.shutter_speed > 1000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_37 = {{VAR_14, sizeof(VAR_37)},
         { 166, 1000 }, {999, 1000}
      };
      FUNC_8(VAR_29, &VAR_37.hdr);
   }
   if (VAR_26->fullResPreview)
   {


      VAR_28->es->video.width = FUNC_0(VAR_26->common_settings.width, 32);
      VAR_28->es->video.height = FUNC_0(VAR_26->common_settings.height, 16);
      VAR_28->es->video.crop.x = 0;
      VAR_28->es->video.crop.y = 0;
      VAR_28->es->video.crop.width = VAR_26->common_settings.width;
      VAR_28->es->video.crop.height = VAR_26->common_settings.height;
      VAR_28->es->video.frame_rate.num = VAR_1;
      VAR_28->es->video.frame_rate.den = VAR_0;
   }
   else
   {

      VAR_28->es->video.width = FUNC_0(VAR_26->preview_parameters.previewWindow.width, 32);
      VAR_28->es->video.height = FUNC_0(VAR_26->preview_parameters.previewWindow.height, 16);
      VAR_28->es->video.crop.x = 0;
      VAR_28->es->video.crop.y = 0;
      VAR_28->es->video.crop.width = VAR_26->preview_parameters.previewWindow.width;
      VAR_28->es->video.crop.height = VAR_26->preview_parameters.previewWindow.height;
      VAR_28->es->video.frame_rate.num = VAR_20;
      VAR_28->es->video.frame_rate.den = VAR_19;
   }

   VAR_32 = FUNC_7(VAR_29);

   if (VAR_32 != VAR_17 )
   {
      FUNC_14("camera viewfinder format couldn't be set");
      goto error;
   }


   FUNC_5(VAR_30->format, VAR_28);
   VAR_32 = FUNC_7(VAR_30);

   if (VAR_32 != VAR_17 )
   {
      FUNC_14("camera video format couldn't be set");
      goto error;
   }


   if (VAR_30->buffer_num < VAR_23)
      VAR_30->buffer_num = VAR_23;

   VAR_28 = VAR_31->format;

   if(VAR_26->camera_parameters.shutter_speed > 6000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_38 = {{VAR_14, sizeof(VAR_38)},
         { 50, 1000 }, {166, 1000}
      };
      FUNC_8(VAR_31, &VAR_38.hdr);
   }
   else if(VAR_26->camera_parameters.shutter_speed > 1000000)
   {
      MMAL_PARAMETER_FPS_RANGE_T VAR_39 = {{VAR_14, sizeof(VAR_39)},
         { 167, 1000 }, {999, 1000}
      };
      FUNC_8(VAR_31, &VAR_39.hdr);
   }

   if (VAR_26->encoding)
   {
      VAR_28->encoding = VAR_26->encoding;
      if (!FUNC_12(VAR_31))
      {
         if (VAR_28->encoding == VAR_9)
            VAR_28->encoding = VAR_6;
         else if (VAR_28->encoding == VAR_6)
            VAR_28->encoding = VAR_9;
      }
      VAR_28->encoding_variant = 0;
   }
   else
   {
      VAR_28->encoding = VAR_7;
      VAR_28->encoding_variant = VAR_7;
   }
   VAR_28->es->video.width = FUNC_0(VAR_26->common_settings.width, 32);
   VAR_28->es->video.height = FUNC_0(VAR_26->common_settings.height, 16);
   VAR_28->es->video.crop.x = 0;
   VAR_28->es->video.crop.y = 0;
   VAR_28->es->video.crop.width = VAR_26->common_settings.width;
   VAR_28->es->video.crop.height = VAR_26->common_settings.height;
   VAR_28->es->video.frame_rate.num = VAR_22;
   VAR_28->es->video.frame_rate.den = VAR_21;

   if (VAR_31->buffer_size < VAR_31->buffer_size_min)
      VAR_31->buffer_size = VAR_31->buffer_size_min;

   VAR_31->buffer_num = VAR_31->buffer_num_recommended;

   VAR_32 = FUNC_9(VAR_30, VAR_15, VAR_18);
   if (VAR_32 != VAR_17)
   {
      FUNC_14("Failed to select zero copy");
      goto error;
   }

   VAR_32 = FUNC_7(VAR_31);

   if (VAR_32 != VAR_17 )
   {
      FUNC_14("camera still format couldn't be set");
      goto error;
   }


   VAR_32 = FUNC_4(VAR_27);

   if (VAR_32 != VAR_17 )
   {
      FUNC_14("camera component couldn't be enabled");
      goto error;
   }


   VAR_33 = FUNC_11(VAR_31, VAR_31->buffer_num, VAR_31->buffer_size);

   if (!VAR_33)
   {
      FUNC_14("Failed to create buffer header pool for camera still port %s", VAR_31->name);
   }

   VAR_26->camera_pool = VAR_33;
   VAR_26->camera_component = VAR_27;

   if (VAR_26->common_settings.verbose)
      FUNC_1(VAR_25, "Camera component done\n");

   return VAR_32;

error:

   if (VAR_27)
      FUNC_3(VAR_27);

   return VAR_32;
}
