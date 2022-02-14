
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_20__ {scalar_t__ opaque; int bit_rate; int vformat; } ;
struct TYPE_19__ {TYPE_2__** output; TYPE_2__** input; int output_num; int input_num; } ;
struct TYPE_16__ {int member_1; int member_0; } ;
struct TYPE_18__ {int member_1; int hdr; TYPE_1__ member_0; } ;
struct TYPE_17__ {scalar_t__ buffer_size; scalar_t__ buffer_size_recommended; scalar_t__ buffer_size_min; scalar_t__ buffer_num; scalar_t__ buffer_num_recommended; scalar_t__ buffer_num_min; TYPE_10__* format; } ;
struct TYPE_15__ {scalar_t__ encoding; int bitrate; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMALCAM_BEHAVIOUR_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*,TYPE_4__**) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_10__*,TYPE_10__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static MMAL_COMPONENT_T *FUNC_10(MMALCAM_BEHAVIOUR_T *VAR_8, MMAL_STATUS_T *VAR_9)
{
   MMAL_COMPONENT_T *VAR_10 = 0;
   MMAL_PORT_T *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
   const char *VAR_13 = VAR_1;
   uint32_t VAR_14;


   if (FUNC_9(VAR_8->vformat, 0, 0, &VAR_14))
   {
      *VAR_9 = VAR_2;
      goto error;
   }

   if (VAR_14 == VAR_3)
      VAR_13 = VAR_0;

   *VAR_9 = FUNC_3(VAR_13, &VAR_10);
   if(*VAR_9 != VAR_7)
   {
      FUNC_0("couldn't create video encoder");
      goto error;
   }
   if(!VAR_10->input_num || !VAR_10->output_num)
   {
      FUNC_0("video encoder doesn't have input/output ports");
      *VAR_9 = VAR_2;
      goto error;
   }

   VAR_11 = VAR_10->input[0];
   VAR_12 = VAR_10->output[0];

   FUNC_6(VAR_12->format, VAR_11->format);
   VAR_12->format->encoding = VAR_14;
   VAR_12->format->bitrate = VAR_8->bit_rate;
   *VAR_9 = FUNC_7(VAR_12);
   if(*VAR_9 != VAR_7)
   {
      FUNC_0("format not set on video encoder output port");
      goto error;
   }
   VAR_12->buffer_size = VAR_12->buffer_size_recommended;
   if (VAR_12->buffer_size < VAR_12->buffer_size_min)
      VAR_12->buffer_size = VAR_12->buffer_size_min;
   VAR_12->buffer_num = VAR_12->buffer_num_recommended;
   if (VAR_12->buffer_num < VAR_12->buffer_num_min)
      VAR_12->buffer_num = VAR_12->buffer_num_min;

   if (FUNC_2())
   {
      MMAL_PARAMETER_BOOLEAN_T VAR_15 =
         {{VAR_6, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};
      *VAR_9 = FUNC_8(VAR_12, &VAR_15.hdr);
      if (*VAR_9 != VAR_7 && *VAR_9 != VAR_5)
      {
         FUNC_0("failed to set zero copy on encoder output");
         goto error;
      }
      *VAR_9 = FUNC_8(VAR_11, &VAR_15.hdr);
      if (*VAR_9 != VAR_7 && *VAR_9 != VAR_5)
      {
         FUNC_0("failed to set zero copy on encoder input");
         goto error;
      }
      FUNC_1("enabled zero copy on encoder");
   }

   if (VAR_8->opaque)
   {
      VAR_11->format->encoding = VAR_4;
   }


   *VAR_9 = FUNC_5(VAR_10);
   if(*VAR_9)
   {
      FUNC_0("video encoder component couldn't be enabled");
      goto error;
   }

   return VAR_10;

 error:
   if(VAR_10) FUNC_4(VAR_10);
   return 0;
}
