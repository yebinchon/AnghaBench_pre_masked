
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int name; } ;
struct TYPE_10__ {int copy_output; int copy_input; } ;
struct TYPE_13__ {TYPE_8__* video_out_port; TYPE_2__ options; } ;
struct TYPE_12__ {TYPE_8__** output; TYPE_8__** input; int name; int output_num; int input_num; } ;
struct TYPE_9__ {int member_1; int member_0; } ;
struct TYPE_11__ {int member_1; int hdr; TYPE_1__ member_0; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMALPLAY_T ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_8__*,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALPLAY_T *VAR_4, MMAL_COMPONENT_T *VAR_5)
{
   MMAL_PARAMETER_BOOLEAN_T VAR_6 =
      {{VAR_2, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};
   MMAL_STATUS_T VAR_7 = VAR_0;

   if(!VAR_5->input_num || !VAR_5->output_num)
   {
      FUNC_0("%s doesn't have input/output ports", VAR_5->name);
      goto error;
   }


   if (!VAR_4->options.copy_input)
   {
      VAR_7 = FUNC_1(VAR_5->input[0], &VAR_6.hdr);
      if (VAR_7 != VAR_3 && VAR_7 != VAR_1)
      {
         FUNC_0("failed to set zero copy on %s", VAR_5->input[0]->name);
         goto error;
      }
   }
   if (!VAR_4->options.copy_output)
   {
      VAR_7 = FUNC_1(VAR_5->output[0], &VAR_6.hdr);
      if (VAR_7 != VAR_3 && VAR_7 != VAR_1)
      {
         FUNC_0("failed to set zero copy on %s", VAR_5->output[0]->name);
         goto error;
      }
   }

   VAR_4->video_out_port = VAR_5->output[0];
   VAR_7 = VAR_3;

 error:
   return VAR_7;
}
