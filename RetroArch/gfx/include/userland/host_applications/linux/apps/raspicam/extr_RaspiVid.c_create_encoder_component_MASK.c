
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_23__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int param ;
struct TYPE_44__ {int buffer_size; int buffer_size_recommended; int buffer_size_min; scalar_t__ buffer_num; scalar_t__ buffer_num_recommended; scalar_t__ buffer_num_min; int name; TYPE_23__* format; } ;
struct TYPE_42__ {int width; int height; scalar_t__ verbose; } ;
struct TYPE_43__ {scalar_t__ encoding; scalar_t__ level; scalar_t__ bitrate; int intraperiod; int slices; int quantisationParameter; int framerate; int intra_refresh_type; TYPE_14__* encoder_component; TYPE_7__ common_settings; int * encoder_pool; int inlineMotionVectors; int addSPSTiming; int bInlineHeaders; int immutableInput; int profile; } ;
struct TYPE_41__ {scalar_t__ level; int profile; } ;
struct TYPE_40__ {int member_1; int member_0; } ;
struct TYPE_39__ {int member_1; int member_0; } ;
struct TYPE_35__ {int den; scalar_t__ num; } ;
struct TYPE_37__ {TYPE_1__ frame_rate; } ;
struct TYPE_38__ {TYPE_2__ video; } ;
struct TYPE_36__ {scalar_t__ encoding; scalar_t__ bitrate; TYPE_3__* es; } ;
struct TYPE_34__ {int size; int id; } ;
struct TYPE_33__ {TYPE_9__** output; TYPE_9__** input; int output_num; int input_num; } ;
struct TYPE_32__ {int member_1; TYPE_19__ hdr; TYPE_5__ member_0; } ;
struct TYPE_31__ {int refresh_mode; TYPE_19__ hdr; scalar_t__ pir_mbs; scalar_t__ cir_mbs; scalar_t__ air_ref; scalar_t__ air_mbs; } ;
struct TYPE_30__ {TYPE_19__ hdr; TYPE_6__* profile; } ;
struct TYPE_29__ {TYPE_19__ hdr; int member_1; TYPE_4__ member_0; } ;
typedef TYPE_8__ RASPIVID_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_9__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_10__ MMAL_PARAMETER_VIDEO_RATECONTROL_T ;
typedef TYPE_11__ MMAL_PARAMETER_VIDEO_PROFILE_T ;
typedef TYPE_12__ MMAL_PARAMETER_VIDEO_INTRA_REFRESH_T ;
typedef TYPE_13__ MMAL_PARAMETER_UINT32_T ;
typedef TYPE_14__ MMAL_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,TYPE_14__**) ;
 int FUNC_3 (TYPE_14__*) ;
 scalar_t__ FUNC_4 (TYPE_14__*) ;
 int FUNC_5 (TYPE_23__*,TYPE_23__*) ;
 scalar_t__ FUNC_6 (TYPE_9__*) ;
 scalar_t__ FUNC_7 (TYPE_9__*,TYPE_19__*) ;
 scalar_t__ FUNC_8 (TYPE_9__*,TYPE_19__*) ;
 scalar_t__ FUNC_9 (TYPE_9__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_9__*,int ,int) ;
 int * FUNC_11 (TYPE_9__*,scalar_t__,int) ;
 int VAR_24 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_14(RASPIVID_STATE *VAR_25)
{
   MMAL_COMPONENT_T *VAR_26 = 0;
   MMAL_PORT_T *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
   MMAL_STATUS_T VAR_29;
   MMAL_POOL_T *VAR_30;

   VAR_29 = FUNC_2(VAR_3, &VAR_26);

   if (VAR_29 != VAR_20)
   {
      FUNC_12("Unable to create video encoder component");
      goto error;
   }

   if (!VAR_26->input_num || !VAR_26->output_num)
   {
      VAR_29 = VAR_7;
      FUNC_12("Video encoder doesn't have input/output ports");
      goto error;
   }

   VAR_27 = VAR_26->input[0];
   VAR_28 = VAR_26->output[0];


   FUNC_5(VAR_28->format, VAR_27->format);


   VAR_28->format->encoding = VAR_25->encoding;

   if(VAR_25->encoding == VAR_5)
   {
      if(VAR_25->level == VAR_21)
      {
         if(VAR_25->bitrate > VAR_0)
         {
            FUNC_1(VAR_24, "Bitrate too high: Reducing to 25MBit/s\n");
            VAR_25->bitrate = VAR_0;
         }
      }
      else
      {
         if(VAR_25->bitrate > VAR_1)
         {
            FUNC_1(VAR_24, "Bitrate too high: Reducing to 62.5MBit/s\n");
            VAR_25->bitrate = VAR_1;
         }
      }
   }
   else if(VAR_25->encoding == VAR_6)
   {
      if(VAR_25->bitrate > VAR_2)
      {
         FUNC_1(VAR_24, "Bitrate too high: Reducing to 25MBit/s\n");
         VAR_25->bitrate = VAR_2;
      }
   }

   VAR_28->format->bitrate = VAR_25->bitrate;

   if (VAR_25->encoding == VAR_5)
      VAR_28->buffer_size = VAR_28->buffer_size_recommended;
   else
      VAR_28->buffer_size = 256<<10;

   if (VAR_28->buffer_size < VAR_28->buffer_size_min)
      VAR_28->buffer_size = VAR_28->buffer_size_min;

   VAR_28->buffer_num = VAR_28->buffer_num_recommended;

   if (VAR_28->buffer_num < VAR_28->buffer_num_min)
      VAR_28->buffer_num = VAR_28->buffer_num_min;



   VAR_28->format->es->video.frame_rate.num = 0;
   VAR_28->format->es->video.frame_rate.den = 1;


   VAR_29 = FUNC_6(VAR_28);

   if (VAR_29 != VAR_20)
   {
      FUNC_12("Unable to set format on video encoder output port");
      goto error;
   }


   if (0)
   {
      MMAL_PARAMETER_VIDEO_RATECONTROL_T VAR_31 = {{ VAR_11, sizeof(VAR_31)}, VAR_23};
      VAR_29 = FUNC_8(VAR_28, &VAR_31.hdr);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set ratecontrol");
         goto error;
      }

   }

   if (VAR_25->encoding == VAR_5 &&
         VAR_25->intraperiod != -1)
   {
      MMAL_PARAMETER_UINT32_T VAR_32 = {{ VAR_8, sizeof(VAR_32)}, VAR_25->intraperiod};
      VAR_29 = FUNC_8(VAR_28, &VAR_32.hdr);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set intraperiod");
         goto error;
      }
   }

   if (VAR_25->encoding == VAR_5 && VAR_25->slices > 1 && VAR_25->common_settings.width <= 1280)
   {
      int VAR_33 = FUNC_0(VAR_25->common_settings.height, 16) >> 4;

      if (VAR_25->slices > VAR_33)
      {
         FUNC_1(VAR_24,"H264 Slice count (%d) exceeds number of macroblock rows (%d). Setting slices to %d.\n", VAR_25->slices, VAR_33, VAR_33);

      }
      int VAR_34 = VAR_33/VAR_25->slices;
      if (VAR_33 - VAR_25->slices*VAR_34)
         VAR_34++;

      VAR_29 = FUNC_10(VAR_28, VAR_9, VAR_34);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set number of slices");
         goto error;
      }
   }

   if (VAR_25->encoding == VAR_5 &&
       VAR_25->quantisationParameter)
   {
      MMAL_PARAMETER_UINT32_T VAR_35 = {{ VAR_12, sizeof(VAR_35)}, VAR_25->quantisationParameter};
      VAR_29 = FUNC_8(VAR_28, &VAR_35.hdr);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set initial QP");
         goto error;
      }

      MMAL_PARAMETER_UINT32_T VAR_36 = {{ VAR_16, sizeof(VAR_35)}, VAR_25->quantisationParameter};
      VAR_29 = FUNC_8(VAR_28, &VAR_36);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set min QP");
         goto error;
      }

      MMAL_PARAMETER_UINT32_T VAR_37 = {{ VAR_15, sizeof(VAR_35)}, VAR_25->quantisationParameter};
      VAR_29 = FUNC_8(VAR_28, &VAR_37);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set max QP");
         goto error;
      }
   }

   if (VAR_25->encoding == VAR_5)
   {
      MMAL_PARAMETER_VIDEO_PROFILE_T VAR_38;
      VAR_38.hdr.id = VAR_10;
      VAR_38.hdr.size = sizeof(VAR_38);

      VAR_38.profile[0].profile = VAR_25->profile;

      if((FUNC_0(VAR_25->common_settings.width,16) >> 4) * (FUNC_0(VAR_25->common_settings.height,16) >> 4) * VAR_25->framerate > 245760)
      {
         if((FUNC_0(VAR_25->common_settings.width,16) >> 4) * (FUNC_0(VAR_25->common_settings.height,16) >> 4) * VAR_25->framerate <= 522240)
         {
            FUNC_1(VAR_24, "Too many macroblocks/s: Increasing H264 Level to 4.2\n");
            VAR_25->level=VAR_22;
         }
         else
         {
            FUNC_12("Too many macroblocks/s requested");
            VAR_29 = VAR_4;
            goto error;
         }
      }

      VAR_38.profile[0].level = VAR_25->level;

      VAR_29 = FUNC_8(VAR_28, &VAR_38.hdr);
      if (VAR_29 != VAR_20)
      {
         FUNC_12("Unable to set H264 profile");
         goto error;
      }
   }

   if (FUNC_9(VAR_27, VAR_18, VAR_25->immutableInput) != VAR_20)
   {
      FUNC_12("Unable to set immutable input flag");

   }

   if (VAR_25->encoding == VAR_5)
   {

      if (FUNC_9(VAR_28, VAR_13, VAR_25->bInlineHeaders) != VAR_20)
      {
         FUNC_12("failed to set INLINE HEADER FLAG parameters");

      }


      if (FUNC_9(VAR_28, VAR_17, VAR_25->addSPSTiming) != VAR_20)
      {
         FUNC_12("failed to set SPS TIMINGS FLAG parameters");

      }


      if (FUNC_9(VAR_28, VAR_14, VAR_25->inlineMotionVectors) != VAR_20)
      {
         FUNC_12("failed to set INLINE VECTORS parameters");

      }


      if ( VAR_25->intra_refresh_type != -1)
      {
         MMAL_PARAMETER_VIDEO_INTRA_REFRESH_T VAR_39;
         VAR_39.hdr.id = VAR_19;
         VAR_39.hdr.size = sizeof(VAR_39);


         VAR_29 = FUNC_7(VAR_28, &VAR_39.hdr);
         if (VAR_29 != VAR_20)
         {
            FUNC_13("Unable to get existing H264 intra-refresh values. Please update your firmware");

            VAR_39.air_mbs = VAR_39.air_ref = VAR_39.cir_mbs = VAR_39.pir_mbs = 0;
         }

         VAR_39.refresh_mode = VAR_25->intra_refresh_type;




         VAR_29 = FUNC_8(VAR_28, &VAR_39.hdr);
         if (VAR_29 != VAR_20)
         {
            FUNC_12("Unable to set H264 intra-refresh values");
            goto error;
         }
      }
   }


   VAR_29 = FUNC_4(VAR_26);

   if (VAR_29 != VAR_20)
   {
      FUNC_12("Unable to enable video encoder component");
      goto error;
   }


   VAR_30 = FUNC_11(VAR_28, VAR_28->buffer_num, VAR_28->buffer_size);

   if (!VAR_30)
   {
      FUNC_12("Failed to create buffer header pool for encoder output port %s", VAR_28->name);
   }

   VAR_25->encoder_pool = VAR_30;
   VAR_25->encoder_component = VAR_26;

   if (VAR_25->common_settings.verbose)
      FUNC_1(VAR_24, "Encoder component done\n");

   return VAR_29;

error:
   if (VAR_26)
      FUNC_3(VAR_26);

   VAR_25->encoder_component = ((void*)0);

   return VAR_29;
}
