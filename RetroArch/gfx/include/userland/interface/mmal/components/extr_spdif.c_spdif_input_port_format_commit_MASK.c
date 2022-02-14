
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ encoding; TYPE_2__* es; int bitrate; } ;
struct TYPE_16__ {TYPE_3__** output; } ;
struct TYPE_15__ {TYPE_7__* format; int is_enabled; TYPE_4__* component; } ;
struct TYPE_13__ {scalar_t__ sample_rate; int channels; } ;
struct TYPE_14__ {TYPE_1__ audio; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,char*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_7__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_5)
{
   MMAL_COMPONENT_T *VAR_6 = VAR_5->component;
   MMAL_PORT_T *VAR_7 = VAR_6->output[0];


   if (VAR_5->format->encoding != VAR_0 &&
       VAR_5->format->encoding != VAR_1)
      return VAR_3;

   FUNC_0("%4.4s, %iHz, %ichan, %ibps", (char *)&VAR_5->format->encoding,
      VAR_5->format->es->audio.sample_rate, VAR_5->format->es->audio.channels,
      VAR_5->format->bitrate);





   if (!FUNC_1(VAR_5->format, VAR_7->format))
      return VAR_4;
   if (VAR_7->format->encoding == VAR_2 &&
       VAR_5->format->es->audio.sample_rate ==
          VAR_7->format->es->audio.sample_rate)
      return VAR_4;



   if (!VAR_7->is_enabled)
   {
      if (VAR_7->format->encoding != VAR_2)
         FUNC_2(VAR_7->format, VAR_5->format);
      VAR_7->format->es->audio.sample_rate = VAR_5->format->es->audio.sample_rate;
      return VAR_4;
   }


   return FUNC_3(VAR_6, VAR_7, VAR_5->format);
}
