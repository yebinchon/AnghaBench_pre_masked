
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_22__ {TYPE_5__* format; } ;
struct TYPE_21__ {int output_num; TYPE_4__** output; TYPE_4__** input; int input_num; } ;
struct TYPE_20__ {void* encoding_variant; void* encoding; } ;
struct TYPE_19__ {scalar_t__ buffer_num; int name; int buffer_size; TYPE_5__* format; } ;
struct TYPE_17__ {scalar_t__ verbose; } ;
struct TYPE_18__ {int raw_output_fmt; TYPE_2__ common_settings; TYPE_6__* splitter_component; int * splitter_pool; TYPE_1__* camera_component; } ;
struct TYPE_16__ {TYPE_7__** output; } ;
typedef TYPE_3__ RASPIVID_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;
typedef TYPE_5__ MMAL_ES_FORMAT_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;



 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_6__**) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int * FUNC_6 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_7__*) ;
 int VAR_11 ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_9(RASPIVID_STATE *VAR_12)
{
   MMAL_COMPONENT_T *VAR_13 = 0;
   MMAL_PORT_T *VAR_14 = ((void*)0);
   MMAL_ES_FORMAT_T *VAR_15;
   MMAL_STATUS_T VAR_16;
   MMAL_POOL_T *VAR_17;
   int VAR_18;

   if (VAR_12->camera_component == ((void*)0))
   {
      VAR_16 = VAR_7;
      FUNC_8("Camera component must be created before splitter");
      goto error;
   }


   VAR_16 = FUNC_1(VAR_2, &VAR_13);

   if (VAR_16 != VAR_8)
   {
      FUNC_8("Failed to create splitter component");
      goto error;
   }

   if (!VAR_13->input_num)
   {
      VAR_16 = VAR_7;
      FUNC_8("Splitter doesn't have any input port");
      goto error;
   }

   if (VAR_13->output_num < 2)
   {
      VAR_16 = VAR_7;
      FUNC_8("Splitter doesn't have enough output ports");
      goto error;
   }


   FUNC_4(VAR_13->input[0]->format, VAR_12->camera_component->output[VAR_1]->format);

   if (VAR_13->input[0]->buffer_num < VAR_10)
      VAR_13->input[0]->buffer_num = VAR_10;

   VAR_16 = FUNC_5(VAR_13->input[0]);

   if (VAR_16 != VAR_8)
   {
      FUNC_8("Unable to set format on splitter input port");
      goto error;
   }


   for (VAR_18 = 0; VAR_18 < VAR_13->output_num; VAR_18++)
   {
      FUNC_4(VAR_13->output[VAR_18]->format, VAR_13->input[0]->format);

      if (VAR_18 == VAR_9)
      {
         VAR_15 = VAR_13->output[VAR_18]->format;

         switch (VAR_12->raw_output_fmt)
         {
         case 128:
         case 130:
            VAR_15->encoding = VAR_5;
            VAR_15->encoding_variant = VAR_5;
            break;
         case 129:
            if (FUNC_7(VAR_12->camera_component->output[VAR_0]))
               VAR_15->encoding = VAR_6;
            else
               VAR_15->encoding = VAR_4;
            VAR_15->encoding_variant = 0;
            break;
         default:
            VAR_16 = VAR_3;
            FUNC_8("unknown raw output format");
            goto error;
         }
      }

      VAR_16 = FUNC_5(VAR_13->output[VAR_18]);

      if (VAR_16 != VAR_8)
      {
         FUNC_8("Unable to set format on splitter output port %d", VAR_18);
         goto error;
      }
   }


   VAR_16 = FUNC_3(VAR_13);

   if (VAR_16 != VAR_8)
   {
      FUNC_8("splitter component couldn't be enabled");
      goto error;
   }


   VAR_14 = VAR_13->output[VAR_9];
   VAR_17 = FUNC_6(VAR_14, VAR_14->buffer_num, VAR_14->buffer_size);

   if (!VAR_17)
   {
      FUNC_8("Failed to create buffer header pool for splitter output port %s", VAR_14->name);
   }

   VAR_12->splitter_pool = VAR_17;
   VAR_12->splitter_component = VAR_13;

   if (VAR_12->common_settings.verbose)
      FUNC_0(VAR_11, "Splitter component done\n");

   return VAR_16;

error:

   if (VAR_13)
      FUNC_2(VAR_13);

   return VAR_16;
}
