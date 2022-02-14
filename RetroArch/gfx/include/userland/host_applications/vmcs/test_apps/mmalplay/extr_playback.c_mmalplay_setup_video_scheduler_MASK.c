
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
struct TYPE_7__ {int copy_output; } ;
struct TYPE_9__ {int video_clock; TYPE_1__ options; } ;
struct TYPE_8__ {int * clock; TYPE_6__** output; TYPE_6__** input; int name; int clock_num; int output_num; int input_num; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMALPLAY_T ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALPLAY_T *VAR_5, MMAL_COMPONENT_T *VAR_6)
{
   MMAL_STATUS_T VAR_7 = VAR_0;

   if (!VAR_6->input_num || !VAR_6->output_num || !VAR_6->clock_num)
   {
      FUNC_0("%s doesn't have input/output/clock ports", VAR_6->name);
      goto error;
   }


   if (!VAR_5->options.copy_output)
   {
      VAR_7 = FUNC_1(VAR_6->input[0],
            VAR_2, VAR_4);
      if (VAR_7 != VAR_3 && VAR_7 != VAR_1)
      {
         FUNC_0("failed to set zero copy on %s", VAR_6->input[0]->name);
         goto error;
      }
      VAR_7 = FUNC_1(VAR_6->output[0],
            VAR_2, VAR_4);
      if (VAR_7 != VAR_3 && VAR_7 != VAR_1)
      {
         FUNC_0("failed to set zero copy on %s", VAR_6->output[0]->name);
         goto error;
      }
   }


   VAR_5->video_clock = VAR_6->clock[0];

   VAR_7 = VAR_3;

 error:
   return VAR_7;
}
