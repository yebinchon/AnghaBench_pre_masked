
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_18__ ;
typedef struct TYPE_36__ TYPE_17__ ;
typedef struct TYPE_35__ TYPE_16__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef void* uint32_t ;
typedef int camera_num ;
typedef int cam_config ;
struct TYPE_46__ {int den; } ;
struct TYPE_43__ {void* height; void* width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_44__ {TYPE_9__ frame_rate; TYPE_6__ crop; void* height; void* width; } ;
struct TYPE_45__ {TYPE_7__ video; } ;
struct TYPE_42__ {int member_1; int member_0; } ;
struct TYPE_41__ {int member_1; int member_0; } ;
struct TYPE_40__ {int member_1; int member_0; } ;
struct TYPE_39__ {int member_1; int member_0; } ;
struct TYPE_38__ {int member_1; int member_0; } ;
struct TYPE_37__ {scalar_t__ change; TYPE_9__ frame_rate; scalar_t__ opaque; int vformat; int camera_num; } ;
struct TYPE_36__ {TYPE_10__* control; TYPE_10__** output; int output_num; } ;
struct TYPE_35__ {TYPE_8__* es; int encoding; } ;
struct TYPE_34__ {int member_2; int hdr; int member_1; TYPE_4__ member_0; } ;
struct TYPE_33__ {int member_1; int hdr; TYPE_3__ member_0; } ;
struct TYPE_32__ {void* max_stills_w; void* max_stills_h; void* max_preview_video_w; void* max_preview_video_h; int num_preview_video_frames; int hdr; int use_stc_timestamp; int fast_preview_resume; int stills_capture_circular_buffer_height; int one_shot_stills; int stills_yuv422; TYPE_5__ member_0; } ;
struct TYPE_31__ {int member_2; int hdr; int change_id; int member_1; TYPE_1__ member_0; } ;
struct TYPE_30__ {int hdr; int value; int member_1; TYPE_2__ member_0; } ;
struct TYPE_29__ {scalar_t__ buffer_num; TYPE_16__* format; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_10__ MMAL_PORT_T ;
typedef TYPE_11__ MMAL_PARAMETER_INT32_T ;
typedef TYPE_12__ MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T ;
typedef TYPE_13__ MMAL_PARAMETER_CAMERA_CONFIG_T ;
typedef TYPE_14__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_15__ MMAL_PARAMETER_ALGORITHM_CONTROL_T ;
typedef TYPE_16__ MMAL_ES_FORMAT_T ;
typedef TYPE_17__ MMAL_COMPONENT_T ;
typedef TYPE_18__ MMALCAM_BEHAVIOUR_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,TYPE_17__**) ;
 int FUNC_4 (TYPE_17__*) ;
 int FUNC_5 (TYPE_17__*) ;
 int FUNC_6 (TYPE_16__*,TYPE_16__*) ;
 int FUNC_7 (TYPE_10__*,int ) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,int *) ;
 scalar_t__ FUNC_10 (int ,void**,void**,int *) ;

__attribute__((used)) static MMAL_COMPONENT_T *FUNC_11(MMALCAM_BEHAVIOUR_T *VAR_17, MMAL_STATUS_T *VAR_18)
{
   MMAL_COMPONENT_T *VAR_19 = 0;
   MMAL_ES_FORMAT_T *VAR_20;
   MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T VAR_21 =
         {{VAR_10, sizeof(MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T)}, 0, 1};
   MMAL_PORT_T *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
   uint32_t VAR_25, VAR_26;
   MMAL_PARAMETER_INT32_T VAR_27 =
         {{VAR_9, sizeof(VAR_27)},0};


   *VAR_18 = FUNC_3(VAR_1, &VAR_19);
   if(*VAR_18 != VAR_14)
   {
      FUNC_0("couldn't create camera");
      goto error;
   }
   if(!VAR_19->output_num)
   {
      FUNC_0("camera doesn't have output ports");
      *VAR_18 = VAR_2;
      goto error;
   }

   VAR_22 = VAR_19->output[0];
   VAR_23 = VAR_19->output[1];
   VAR_24 = VAR_19->output[2];

   VAR_21.change_id = VAR_11;
   *VAR_18 = FUNC_9(VAR_19->control, &VAR_21.hdr);
   if (*VAR_18 != VAR_14 && *VAR_18 != VAR_5)
   {
      FUNC_0("No focus status change events");
   }
   VAR_27.value = VAR_17->camera_num;
   *VAR_18 = FUNC_9(VAR_19->control, &VAR_27.hdr);
   if (*VAR_18 != VAR_14 && *VAR_18 != VAR_5)
   {
       FUNC_0("No camera number change events");
   }
   if (FUNC_2())
   {
      MMAL_PARAMETER_BOOLEAN_T VAR_28 =
         {{VAR_12, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};
      *VAR_18 = FUNC_9(VAR_22, &VAR_28.hdr);
      if( *VAR_18 != VAR_14 && *VAR_18 != VAR_5 )
      {
         FUNC_0("failed to set zero copy on camera output");
         goto error;
      }
      FUNC_1("enabled zero copy on camera");
      *VAR_18 = FUNC_9(VAR_23, &VAR_28.hdr);
      if( *VAR_18 != VAR_14 && *VAR_18 != VAR_5 )
      {
         FUNC_0("failed to set zero copy on camera output");
         goto error;
      }
      *VAR_18 = FUNC_9(VAR_24, &VAR_28.hdr);
      if( *VAR_18 != VAR_14 && *VAR_18 != VAR_5 )
      {
         FUNC_0("failed to set zero copy on camera output");
         goto error;
      }
   }

   if ( VAR_17->change == VAR_0 )
   {
      MMAL_PARAMETER_ALGORITHM_CONTROL_T VAR_29 = {{VAR_6, sizeof(MMAL_PARAMETER_ALGORITHM_CONTROL_T)},
                        VAR_7, 1 };
      FUNC_9(VAR_19->control, &VAR_29.hdr);
   }

   *VAR_18 = FUNC_7(VAR_19->control, VAR_16);
   if (*VAR_18)
   {
      FUNC_0("control port couldn't be enabled: %d", *VAR_18);
      goto error;
   }


   if (FUNC_10(VAR_17->vformat, &VAR_25, &VAR_26, ((void*)0)))
   {
      *VAR_18 = VAR_2;
      goto error;
   }


   if (!VAR_17->frame_rate.den)
      VAR_17->frame_rate.den = 1;

   {
      MMAL_PARAMETER_CAMERA_CONFIG_T VAR_30 = {{VAR_8,sizeof(VAR_30)},
                              .max_stills_w = VAR_25,
                              .max_stills_h = VAR_26,
                              .stills_yuv422 = 0,
                              .one_shot_stills = 0,
                              .max_preview_video_w = VAR_25,
                              .max_preview_video_h = VAR_26,
                              .num_preview_video_frames = 3,
                              .stills_capture_circular_buffer_height = 0,
                              .fast_preview_resume = 0,



                              .use_stc_timestamp = VAR_13
                              };

      FUNC_9(VAR_19->control, &VAR_30.hdr);
   }


   VAR_20 = VAR_22->format;
   if (VAR_17->opaque)
      VAR_20->encoding = VAR_4;
   else
      VAR_20->encoding = VAR_3;

   VAR_20->es->video.width = VAR_25;
   VAR_20->es->video.height = VAR_26;
   VAR_20->es->video.crop.x = 0;
   VAR_20->es->video.crop.y = 0;
   VAR_20->es->video.crop.width = VAR_25;
   VAR_20->es->video.crop.height = VAR_26;
   VAR_20->es->video.frame_rate = VAR_17->frame_rate;

   *VAR_18 = FUNC_8(VAR_22);
   if(*VAR_18)
   {
      FUNC_0("camera viewfinder format couldn't be set");
      goto error;
   }


   FUNC_6(VAR_23->format, VAR_20);
   *VAR_18 = FUNC_8(VAR_23);
   if(*VAR_18)
   {
      FUNC_0("camera video format couldn't be set");
      goto error;
   }


   if (VAR_23->buffer_num < VAR_15)
      VAR_23->buffer_num = VAR_15;


   FUNC_6(VAR_24->format, VAR_20);
   *VAR_18 = FUNC_8(VAR_24);
   if(*VAR_18)
   {
      FUNC_0("camera still format couldn't be set");
      goto error;
   }


   if (VAR_24->buffer_num < VAR_15)
      VAR_24->buffer_num = VAR_15;


   *VAR_18 = FUNC_5(VAR_19);
   if(*VAR_18)
   {
      FUNC_0("camera component couldn't be enabled");
      goto error;
   }

   return VAR_19;

 error:
   if(VAR_19) FUNC_4(VAR_19);
   return 0;
}
