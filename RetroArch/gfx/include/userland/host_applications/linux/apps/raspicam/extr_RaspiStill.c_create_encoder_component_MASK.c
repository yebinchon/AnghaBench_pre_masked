
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_24__ {int control; TYPE_5__** output; TYPE_5__** input; int output_num; int input_num; } ;
struct TYPE_18__ {int member_1; int member_0; } ;
struct TYPE_23__ {int enable; scalar_t__ width; scalar_t__ height; int hdr; int quality; int member_4; int member_3; int member_2; int member_1; TYPE_1__ member_0; } ;
struct TYPE_22__ {scalar_t__ buffer_size; scalar_t__ buffer_size_recommended; scalar_t__ buffer_size_min; scalar_t__ buffer_num; scalar_t__ buffer_num_recommended; scalar_t__ buffer_num_min; int name; TYPE_11__* format; } ;
struct TYPE_20__ {scalar_t__ verbose; } ;
struct TYPE_19__ {scalar_t__ width; scalar_t__ height; int quality; scalar_t__ enable; } ;
struct TYPE_21__ {TYPE_3__ common_settings; TYPE_7__* encoder_component; int * encoder_pool; TYPE_2__ thumbnailConfig; scalar_t__ restart_interval; scalar_t__ quality; int encoding; } ;
struct TYPE_17__ {int encoding; } ;
typedef TYPE_4__ RASPISTILL_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_6__ MMAL_PARAMETER_THUMBNAIL_CONFIG_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_7__**) ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_11__*,TYPE_11__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int ,scalar_t__) ;
 int * FUNC_8 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_10(RASPISTILL_STATE *VAR_7)
{
   MMAL_COMPONENT_T *VAR_8 = 0;
   MMAL_PORT_T *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
   MMAL_STATUS_T VAR_11;
   MMAL_POOL_T *VAR_12;

   VAR_11 = FUNC_1(VAR_0, &VAR_8);

   if (VAR_11 != VAR_5)
   {
      FUNC_9("Unable to create JPEG encoder component");
      goto error;
   }

   if (!VAR_8->input_num || !VAR_8->output_num)
   {
      VAR_11 = VAR_1;
      FUNC_9("JPEG encoder doesn't have input/output ports");
      goto error;
   }

   VAR_9 = VAR_8->input[0];
   VAR_10 = VAR_8->output[0];


   FUNC_4(VAR_10->format, VAR_9->format);


   VAR_10->format->encoding = VAR_7->encoding;

   VAR_10->buffer_size = VAR_10->buffer_size_recommended;

   if (VAR_10->buffer_size < VAR_10->buffer_size_min)
      VAR_10->buffer_size = VAR_10->buffer_size_min;

   VAR_10->buffer_num = VAR_10->buffer_num_recommended;

   if (VAR_10->buffer_num < VAR_10->buffer_num_min)
      VAR_10->buffer_num = VAR_10->buffer_num_min;


   VAR_11 = FUNC_5(VAR_10);

   if (VAR_11 != VAR_5)
   {
      FUNC_9("Unable to set format on video encoder output port");
      goto error;
   }


   VAR_11 = FUNC_7(VAR_10, VAR_2, VAR_7->quality);

   if (VAR_11 != VAR_5)
   {
      FUNC_9("Unable to set JPEG quality");
      goto error;
   }


   VAR_11 = FUNC_7(VAR_10, VAR_3, VAR_7->restart_interval);

   if (VAR_7->restart_interval && VAR_11 != VAR_5)
   {
      FUNC_9("Unable to set JPEG restart interval");
      goto error;
   }


   {
      MMAL_PARAMETER_THUMBNAIL_CONFIG_T VAR_13 = {{VAR_4, sizeof(MMAL_PARAMETER_THUMBNAIL_CONFIG_T)}, 0, 0, 0, 0};

      if ( VAR_7->thumbnailConfig.enable &&
            VAR_7->thumbnailConfig.width > 0 && VAR_7->thumbnailConfig.height > 0 )
      {

         VAR_13.enable = 1;
         VAR_13.width = VAR_7->thumbnailConfig.width;
         VAR_13.height = VAR_7->thumbnailConfig.height;
         VAR_13.quality = VAR_7->thumbnailConfig.quality;
      }
      VAR_11 = FUNC_6(VAR_8->control, &VAR_13.hdr);
   }


   VAR_11 = FUNC_3(VAR_8);

   if (VAR_11 != VAR_5)
   {
      FUNC_9("Unable to enable video encoder component");
      goto error;
   }


   VAR_12 = FUNC_8(VAR_10, VAR_10->buffer_num, VAR_10->buffer_size);

   if (!VAR_12)
   {
      FUNC_9("Failed to create buffer header pool for encoder output port %s", VAR_10->name);
   }

   VAR_7->encoder_pool = VAR_12;
   VAR_7->encoder_component = VAR_8;

   if (VAR_7->common_settings.verbose)
      FUNC_0(VAR_6, "Encoder component done\n");

   return VAR_11;

error:

   if (VAR_8)
      FUNC_2(VAR_8);

   return VAR_11;
}
