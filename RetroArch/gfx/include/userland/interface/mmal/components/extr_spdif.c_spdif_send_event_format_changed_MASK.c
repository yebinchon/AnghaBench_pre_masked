
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_18__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_33__ {int buffer_num_recommended; int buffer_size_min; int buffer_size_recommended; int buffer_num_min; TYPE_18__* format; } ;
struct TYPE_32__ {TYPE_7__* priv; int buffer_num_recommended; int buffer_size_min; int buffer_num_min; TYPE_10__* format; } ;
struct TYPE_31__ {TYPE_6__* module; } ;
struct TYPE_30__ {int needs_configuring; } ;
struct TYPE_28__ {int sample_rate; } ;
struct TYPE_29__ {TYPE_4__ audio; } ;
struct TYPE_26__ {int sample_rate; } ;
struct TYPE_27__ {TYPE_2__ audio; } ;
struct TYPE_25__ {TYPE_12__* module; } ;
struct TYPE_24__ {TYPE_3__* es; } ;
struct TYPE_23__ {scalar_t__ status; } ;
struct TYPE_22__ {TYPE_1__* priv; } ;
struct TYPE_21__ {scalar_t__ encoding; TYPE_5__* es; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_8__ MMAL_PORT_T ;
typedef TYPE_9__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_10__ MMAL_ES_FORMAT_T ;
typedef TYPE_11__ MMAL_COMPONENT_T ;
typedef TYPE_12__ MMAL_COMPONENT_MODULE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_9__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_18__*,TYPE_10__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int **,int ) ;
 int FUNC_4 (TYPE_8__*,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_3, MMAL_PORT_T *VAR_4,
   MMAL_ES_FORMAT_T *VAR_5)
{
   MMAL_COMPONENT_MODULE_T *VAR_6 = VAR_3->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_7 = ((void*)0);
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_8;


   VAR_6->status = FUNC_3(VAR_4, &VAR_7, VAR_1);
   if (VAR_6->status != VAR_2)
   {
      FUNC_0("unable to get an event buffer");
      return VAR_6->status;
   }

   VAR_8 = FUNC_1(VAR_7);


   if (VAR_4->format->encoding == VAR_0)
      FUNC_2(VAR_8->format, VAR_4->format);
   else
      FUNC_2(VAR_8->format, VAR_5);

   VAR_8->format->es->audio.sample_rate = VAR_5->es->audio.sample_rate;


   VAR_8->buffer_num_min = VAR_4->buffer_num_min;
   VAR_8->buffer_size_min = VAR_4->buffer_size_min;
   VAR_8->buffer_size_recommended = VAR_8->buffer_size_min;
   VAR_8->buffer_num_recommended = VAR_4->buffer_num_recommended;

   VAR_4->priv->module->needs_configuring = 1;
   FUNC_4(VAR_4, VAR_7);
   return VAR_2;
}
