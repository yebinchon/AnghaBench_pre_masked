
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
struct TYPE_7__ {int copy_output; scalar_t__ audio_destination; } ;
struct TYPE_9__ {int audio_clock; TYPE_1__ options; } ;
struct TYPE_8__ {int name; int * clock; scalar_t__ clock_num; TYPE_6__** input; int control; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMALPLAY_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMALPLAY_T *VAR_6, MMAL_COMPONENT_T *VAR_7)
{
   MMAL_STATUS_T VAR_8 = VAR_0;


   if (VAR_6->options.audio_destination)
   {
      VAR_8 = FUNC_3(VAR_7->control,
            VAR_2, VAR_6->options.audio_destination);
      if (VAR_8 != VAR_4)
         FUNC_1("could not set audio destination");
   }


   if (!VAR_6->options.copy_output)
   {
      VAR_8 = FUNC_2(VAR_7->input[0],
            VAR_3, VAR_5);
      if (VAR_8 != VAR_4 && VAR_8 != VAR_1)
      {
         FUNC_0("failed to set zero copy on %s", VAR_7->input[0]->name);
         goto error;
      }
   }

   if (VAR_7->clock_num)
      VAR_6->audio_clock = VAR_7->clock[0];
   else
      FUNC_0("%s doesn't have a clock port", VAR_7->name);

   VAR_8 = VAR_4;

 error:
   return VAR_8;
}
